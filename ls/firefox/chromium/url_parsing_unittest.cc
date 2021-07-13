
#include <stddef.h>

#include "base/stl_util.h"
#include "testing/gtest/include/gtest/gtest.h"
//#include "url/third_party/mozilla/url_parse.h"
#include "url/gurl.h"
#include "url/url_util.h"


namespace url {
namespace {

// describes the structure of inputs

struct URLParseCase {
  const char* baseurl;
  const char* input;

  const char* scheme;
  const char* username;
  const char* password;
  const char* host;
  int port;
  const char* path;
  const char* query;
  const char* ref;
};

void CheckValidity(const URLParseCase& parse_case, const GURL& parsed_url) {
  if(strcmp(parse_case.baseurl, "") != 0){
    ASSERT_TRUE(parsed_url.is_valid()) << "{\"url\":\""<< parse_case.baseurl << "<" << parse_case.input<<"\", \"exception\":\"invalid URL\"}"; //if base is present, add base to output
  }
  else{
    ASSERT_TRUE(parsed_url.is_valid()) << "{\"url\":\""<< parse_case.input<<"\", \"exception\":\"invalid URL\"}"; 
  
  }
  return;
}

void CheckComponents(const URLParseCase& parse_case, const GURL& parsed_url) { 
  char url[1000]; //TODO make size dependent on content
  if(strcmp(parse_case.baseurl, "") != 0){
    strcpy(url, parse_case.baseurl);
    strcat(url, "<");
    strcat(url, parse_case.input);
  }
  else{
    strcpy(url, parse_case.input);
  }
  ASSERT_EQ(parse_case.scheme, parsed_url.scheme()) << "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"scheme\", \"expected\":\""<<parse_case.scheme <<"\", \"actual\":\""<<parsed_url.scheme()<<"\"}}";
    ASSERT_EQ(parse_case.username, parsed_url.username())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"username\", \"expected\":\""<<parse_case.username <<"\", \"actual\":\""<<parsed_url.username()<<"\"}}";
    ASSERT_EQ(parse_case.password, parsed_url.password())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"password\", \"expected\":\""<<parse_case.password <<"\", \"actual\":\""<<parsed_url.password()<<"\"}}";
    ASSERT_EQ(parse_case.host, parsed_url.host())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"host\", \"expected\":\""<<parse_case.host <<"\", \"actual\":\""<<parsed_url.host()<<"\"}}";
    ASSERT_EQ(parse_case.port, parsed_url.IntPort())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"port\", \"expected\":\""<<parse_case.port <<"\", \"actual\":\""<<parsed_url.IntPort()<<"\"}}";
    ASSERT_EQ(parse_case.path, parsed_url.path())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"path\", \"expected\":\""<<parse_case.path <<"\", \"actual\":\""<<parsed_url.path()<<"\"}}";
    ASSERT_EQ(parse_case.query, parsed_url.query())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"query\", \"expected\":\""<<parse_case.query <<"\", \"actual\":\""<<parsed_url.query()<<"\"}}";
    ASSERT_EQ(parse_case.ref, parsed_url.ref())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"ref\", \"expected\":\""<<parse_case.ref <<"\", \"actual\":\""<<parsed_url.ref()<<"\"}}";
  return;
}

//Test inputs
static URLParseCase parse_cases[]={{"file://,=" ,"/" ,"file" ,"" ,"" ,",=" ,-1 ,"/" ,"" ,""},
{"F:/" ,"//~!" ,"f" ,"" ,"" ,"~!" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/.%2e///////%7b" ,"file" ,"" ,"" ,"" ,-1 ,"///////%7b" ,"" ,""},
{"j:/" ,"//[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251]" ,"j" ,"" ,"" ,"[efbb:efbc:eaff:cbaa:aebf:cada:fe43:fffb]" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[::]/%2e//" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"//" ,"" ,""},
{"http://[::]" ,"@𸻾" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/@%F0%B8%BB%BE" ,"" ,""},
{"" ,"https://[::253.254.254.48]" ,"https" ,"" ,"" ,"[::fdfe:fe30]" ,-1 ,"/" ,"" ,""},
{"file://[::]/酜" ,"/" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"wss://[::7cbc:253.250.252.255]" ,"/" ,"wss" ,"" ,"" ,"[::7cbc:fdfa:fcff]" ,-1 ,"/" ,"" ,""},
{"" ,"R://[dfaa::]" ,"r" ,"" ,"" ,"[dfaa::]" ,-1 ,"/" ,"" ,""},
{"file:///#󥓈" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"n://[::255.250.241.250]" ,"n" ,"" ,"" ,"[::fffa:f1fa]" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"/B:/" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/B:/" ,"" ,""},
{"" ,"file://[::fede:dcaf:251.251.9.254]" ,"file" ,"" ,"" ,"[::fede:dcaf:fbfb:9fe]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5]" ,"file" ,"" ,"" ,"[ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5]" ,-1 ,"/" ,"" ,""},
{"t:/" ,"//T" ,"t" ,"" ,"" ,"t" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"//254.255.177.255" ,"wss" ,"" ,"" ,"254.255.177.255" ,-1 ,"/" ,"" ,""},
{"" ,"d://[fdbe:ccab::acdf:daef:253.251.251.255]" ,"d" ,"" ,"" ,"[fdbe:ccab::acdf:daef:fdfb:fbff]" ,-1 ,"/" ,"" ,""},
{"" ,"file://U" ,"file" ,"" ,"" ,"u" ,-1 ,"/" ,"" ,""},
{"wss://$" ,"/" ,"wss" ,"" ,"" ,"$" ,-1 ,"/" ,"" ,""},
{"file:///" ,"햐" ,"file" ,"" ,"" ,"" ,-1 ,"/%ED%96%90" ,"" ,""},
{"" ,"file://)5" ,"file" ,"" ,"" ,")5" ,-1 ,"/" ,"" ,""},
{"B://[::deee:202.255.253.255]" ,"/" ,"b" ,"" ,"" ,"[::deee:caff:fdff]" ,-1 ,"/" ,"" ,""},
{"s:/" ,"//D" ,"s" ,"" ,"" ,"d" ,-1 ,"/" ,"" ,""},
{"P:/" ,"//[::fbaa:ceec:250.254.149.251]" ,"p" ,"" ,"" ,"[::fbaa:ceec:fafe:95fb]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//[::babe:dcfb:ed7d:abbd]" ,"ws" ,"" ,"" ,"[::babe:dcfb:ed7d:abbd]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/%7d%7d" ,"file" ,"" ,"" ,"" ,-1 ,"/%7d%7d" ,"" ,""},
{"" ,"wss://[c6fe::252.251.250.250]" ,"wss" ,"" ,"" ,"[c6fe::fcfb:fafa]" ,-1 ,"/" ,"" ,""},
{"g:/" ,"//[::acbe:bece:252.99.251.254]" ,"g" ,"" ,"" ,"[::acbe:bece:fc63:fbfe]" ,-1 ,"/" ,"" ,""},
{"" ,"https://.@," ,"https" ,"." ,"" ,"," ,-1 ,"/" ,"" ,""},
{"H:/" ,"//[::7afa:254.250.252.253]" ,"h" ,"" ,"" ,"[::7afa:fefa:fcfd]" ,-1 ,"/" ,"" ,""},
{"" ,"file://\"" ,"file" ,"" ,"" ,"\"" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//%@)" ,"https" ,"%" ,"" ,")" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::3eae:befd:250.255.253.253]" ,"file" ,"" ,"" ,"[::3eae:befd:faff:fdfd]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//M@`" ,"https" ,"M" ,"" ,"`" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[::165.255.253.255]" ,"https" ,"" ,"" ,"[::a5ff:fdff]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/./////%2e%2e" ,"file" ,"" ,"" ,"" ,-1 ,"////" ,"" ,""},
{"" ,"ftp://[ffaa:bfee:aafd:ddab:cecd:bfda:bcfb:dcc4]" ,"ftp" ,"" ,"" ,"[ffaa:bfee:aafd:ddab:cecd:bfda:bcfb:dcc4]" ,-1 ,"/" ,"" ,""},
{"http://[::]?沫" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::dcee:250.250.254.232]" ,"file" ,"" ,"" ,"[::dcee:fafa:fee8]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://[::]/./" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/%EE%AC%89" ,"" ,""},
{"" ,"ws://[::cfed:254.251.89.255]" ,"ws" ,"" ,"" ,"[::cfed:fefb:59ff]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::]/%2e%2e/󬱰" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%F3%AC%B1%B0" ,"" ,""},
{"" ,"file://[bf9b::beca:cadd:250.251.254.251]" ,"file" ,"" ,"" ,"[bf9b::beca:cadd:fafb:fefb]" ,-1 ,"/" ,"" ,""},
{"f:/" ,"//[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae]" ,"f" ,"" ,"" ,"[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::feeb]" ,"file" ,"" ,"" ,"[::feeb]" ,-1 ,"/" ,"" ,""},
{"" ,"X://[d1db:aace::]" ,"x" ,"" ,"" ,"[d1db:aace::]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf]" ,"https" ,"" ,"" ,"[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf]" ,-1 ,"/" ,"" ,""},
{"V:/%23" ,"/" ,"v" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"wss://[::]/%2e/%3e" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/%3e" ,"" ,""},
{"http://[fd2d:dccb::eeab:250.250.250.251]" ,"/" ,"http" ,"" ,"" ,"[fd2d:dccb::eeab:fafa:fafb]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///#@" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"@"},
{"" ,"wss://[::]:65341" ,"wss" ,"" ,"" ,"[::]" ,65341 ,"/" ,"" ,""},
{"http://[::]" ,"//[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac]" ,"http" ,"" ,"" ,"[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac]" ,-1 ,"/" ,"" ,""},
{"" ,"http://b$" ,"http" ,"" ,"" ,"b$" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//[::fccf:edda:cceb:a2ff]" ,"http" ,"" ,"" ,"[::fccf:edda:cceb:a2ff]" ,-1 ,"/" ,"" ,""},
{"e:/" ,"%2e////=" ,"e" ,"" ,"" ,"" ,-1 ,"////=" ,"" ,""},
{"o://[::5bde]" ,"/" ,"o" ,"" ,"" ,"[::5bde]" ,-1 ,"/" ,"" ,""},
{"" ,"o://[dcbb:ddbb::ddbb]" ,"o" ,"" ,"" ,"[dcbb:ddbb::ddbb]" ,-1 ,"/" ,"" ,""},
{"" ,"http://E" ,"http" ,"" ,"" ,"e" ,-1 ,"/" ,"" ,""}};
//test execution
TEST(URLParser, Parsing){
	for (size_t i = 0; i < base::size(parse_cases); i++) {
		GURL parsed_url;
		if(strcmp(parse_cases[i].baseurl, "") != 0){
			GURL parsed_base(parse_cases[i].baseurl);
			parsed_url=parsed_base.Resolve(parse_cases[i].input);
		}
		else{
			parsed_url= GURL(parse_cases[i].input);
		}
						
		CheckValidity(parse_cases[i], parsed_url);
		if ( parsed_url.is_valid()) {
			CheckComponents(parse_cases[i], parsed_url);

		}


	}
}

//namespace url
}
}