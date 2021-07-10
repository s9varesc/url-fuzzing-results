
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
static URLParseCase parse_cases[]={{"ftp://[::]" ,"//i" ,"ftp" ,"" ,"" ,"i" ,-1 ,"/" ,"" ,""},
{"ws://[::]:60132" ,"/" ,"ws" ,"" ,"" ,"[::]" ,60132 ,"/" ,"" ,""},
{"" ,"file://[dd7b::250.251.254.252]" ,"file" ,"" ,"" ,"[dd7b::fafb:fefc]" ,-1 ,"/" ,"" ,""},
{"A:/#秴" ,"/" ,"a" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::aa3e:254.253.255.251]" ,"https" ,"" ,"" ,"[::aa3e:fefd:fffb]" ,-1 ,"/" ,"" ,""},
{"g:/" ,"//{'" ,"g" ,"" ,"" ,"{'" ,-1 ,"/" ,"" ,""},
{"file:///" ,"..///.." ,"file" ,"" ,"" ,"" ,-1 ,"//" ,"" ,""},
{"file:///" ,"///;Ｒ" ,"file" ,"" ,"" ,"" ,-1 ,"/;%EF%BC%B2" ,"" ,""},
{"" ,"ws://[::251.2.255.250]" ,"ws" ,"" ,"" ,"[::fb02:fffa]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//[e8df::251.251.255.251]" ,"ftp" ,"" ,"" ,"[e8df::fbfb:fffb]" ,-1 ,"/" ,"" ,""},
{"" ,"http://[::]:65355" ,"http" ,"" ,"" ,"[::]" ,65355 ,"/" ,"" ,""},
{"http://[::]:65531" ,"/" ,"http" ,"" ,"" ,"[::]" ,65531 ,"/" ,"" ,""},
{"" ,"h:/a:/" ,"h" ,"" ,"" ,"" ,-1 ,"/a:/" ,"" ,""},
{"Z:/" ,"/#ﺞ" ,"z" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%EF%BA%9E"},
{"F:/" ,"//[dffb:adba:dfbb:effe:adad:caac:252.16.254.252]" ,"f" ,"" ,"" ,"[dffb:adba:dfbb:effe:adad:caac:fc10:fefc]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[::dcce:251.255.185.255]" ,"https" ,"" ,"" ,"[::dcce:fbff:b9ff]" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::acd8:253.253.251.253]" ,"https" ,"" ,"" ,"[::acd8:fdfd:fbfd]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//c" ,"file" ,"" ,"" ,"c" ,-1 ,"/" ,"" ,""},
{"" ,"N:/?񶫕" ,"n" ,"" ,"" ,"" ,-1 ,"/" ,"%F1%B6%AB%95" ,""},
{"f:/" ,"//W8" ,"f" ,"" ,"" ,"w8" ,-1 ,"/" ,"" ,""},
{"i:/" ,"//,i" ,"i" ,"" ,"" ,",i" ,-1 ,"/" ,"" ,""},
{"" ,"file:///E:/" ,"file" ,"" ,"" ,"" ,-1 ,"/E:/" ,"" ,""},
{"" ,"K:/祴" ,"k" ,"" ,"" ,"" ,-1 ,"/%E7%A5%B4" ,"" ,""},
{"" ,"file:///?" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%EE%BF%82" ,""},
{"r:/" ,"//[::c1ab:250.251.252.255]" ,"r" ,"" ,"" ,"[::c1ab:fafb:fcff]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[::fffa:faee:252.252.150.255]" ,"https" ,"" ,"" ,"[::fffa:faee:fcfc:96ff]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/%2e./򤋣" ,"file" ,"" ,"" ,"" ,-1 ,"/%F2%A4%8B%A3" ,"" ,""},
{"Gq:/" ,"/" ,"gq" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://-w" ,"file" ,"" ,"" ,"-w" ,-1 ,"/" ,"" ,""},
{"P:/" ,"//[bce3:abcc::edcb:fbff:255.252.251.254]" ,"p" ,"" ,"" ,"[bce3:abcc::edcb:fbff:fffc:fbfe]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::efde:bbdf]" ,"file" ,"" ,"" ,"[::efde:bbdf]" ,-1 ,"/" ,"" ,""},
{"h:/" ,"//l" ,"h" ,"" ,"" ,"l" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::efeb:254.96.250.255]" ,"https" ,"" ,"" ,"[::efeb:fe60:faff]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//[::205.253.255.250]" ,"http" ,"" ,"" ,"[::cdfd:fffa]" ,-1 ,"/" ,"" ,""},
{"H:/" ,"//P," ,"h" ,"" ,"" ,"p," ,-1 ,"/" ,"" ,""},
{"i:/" ,"/m:/" ,"i" ,"" ,"" ,"" ,-1 ,"/m:/" ,"" ,""},
{"" ,"http://[::250.253.203.254]" ,"http" ,"" ,"" ,"[::fafd:cbfe]" ,-1 ,"/" ,"" ,""},
{"W:/" ,"//[::]:6" ,"w" ,"" ,"" ,"[::]" ,6 ,"/" ,"" ,""},
{"file:///" ,"񁝅" ,"file" ,"" ,"" ,"" ,-1 ,"/%F1%81%9D%85" ,"" ,""},
{"g:/" ,"//O" ,"g" ,"" ,"" ,"o" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/./" ,"file" ,"" ,"" ,"" ,-1 ,"/%EE%98%8F" ,"" ,""},
{"X://[::]:65502" ,"/" ,"x" ,"" ,"" ,"[::]" ,65502 ,"/" ,"" ,""},
{"" ,"file://[::209.255.253.254]" ,"file" ,"" ,"" ,"[::d1ff:fdfe]" ,-1 ,"/" ,"" ,""},
{"" ,"file://RĤ" ,"file" ,"" ,"" ,"xn--r-qja" ,-1 ,"/" ,"" ,""},
{"" ,"http://[::dace:efee:250.250.253.202]" ,"http" ,"" ,"" ,"[::dace:efee:fafa:fdca]" ,-1 ,"/" ,"" ,""},
{"" ,"file://śO" ,"file" ,"" ,"" ,"xn--o-sma" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/*" ,"file" ,"" ,"" ,"" ,-1 ,"/*" ,"" ,""},
{"http://[::]" ,"//:𺈟@," ,"http" ,"" ,"%F0%BA%88%9F" ,"," ,-1 ,"/" ,"" ,""},
{"" ,"i:/?󆮖" ,"i" ,"" ,"" ,"" ,-1 ,"/" ,"%F3%86%AE%96" ,""},
{"d:/" ,"=" ,"d" ,"" ,"" ,"" ,-1 ,"/=" ,"" ,""},
{"V:/" ,"//-" ,"v" ,"" ,"" ,"-" ,-1 ,"/" ,"" ,""},
{"D:/" ,"/?" ,"d" ,"" ,"" ,"" ,-1 ,"/" ,"%EF%A0%88" ,""},
{"" ,"l:/]%60" ,"l" ,"" ,"" ,"" ,-1 ,"/]%60" ,"" ,""},
{"file:///" ,"/.%2e" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[dccd:ffbe:bebc:befc:fdfd:efdc:250.254.8.255]" ,"https" ,"" ,"" ,"[dccd:ffbe:bebc:befc:fdfd:efdc:fafe:8ff]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::bbbf:faac:252.251.255.207]" ,"file" ,"" ,"" ,"[::bbbf:faac:fcfb:ffcf]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//252.251.253.205" ,"file" ,"" ,"" ,"252.251.253.205" ,-1 ,"/" ,"" ,""},
{"" ,"https://i" ,"https" ,"" ,"" ,"i" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/#%3c" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%3c"},
{"" ,"file:///?`" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"`" ,""},
{"ftp://[::]" ,"//[8bae::ceae]" ,"ftp" ,"" ,"" ,"[8bae::ceae]" ,-1 ,"/" ,"" ,""},
{"b://[::]:62556" ,"/" ,"b" ,"" ,"" ,"[::]" ,62556 ,"/" ,"" ,""},
{"file:///" ,"/?漭" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%E6%BC%AD" ,""},
{"x:/" ,"//[::]:65369" ,"x" ,"" ,"" ,"[::]" ,65369 ,"/" ,"" ,""},
{"https://[::]" ,"//[::0fbd:255.251.253.253]" ,"https" ,"" ,"" ,"[::fbd:fffb:fdfd]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"+" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/+" ,"" ,""},
{"" ,"u:/?+" ,"u" ,"" ,"" ,"" ,-1 ,"/" ,"+" ,""},
{"p:/" ,"//[::e8ed]" ,"p" ,"" ,"" ,"[::e8ed]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//=" ,"file" ,"" ,"" ,"=" ,-1 ,"/" ,"" ,""},
{"" ,"file:///#Ȑ" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%C8%90"},
{"http://[::]" ,"//[::]:65535" ,"http" ,"" ,"" ,"[::]" ,65535 ,"/" ,"" ,""},
{"I:///!" ,"/" ,"i" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"M:/﫭" ,"m" ,"" ,"" ,"" ,-1 ,"/%EF%AB%AD" ,"" ,""},
{"B:/" ,"//[::]:4" ,"b" ,"" ,"" ,"[::]" ,4 ,"/" ,"" ,""},
{"" ,"https://[::fafd:fdfa:e7fa:bdec]" ,"https" ,"" ,"" ,"[::fafd:fdfa:e7fa:bdec]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/?􏼏" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%F4%8F%BC%8F" ,""},
{"" ,"http://[::aabf:acdf:254.251.252.15]" ,"http" ,"" ,"" ,"[::aabf:acdf:fefb:fc0f]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//Gă" ,"file" ,"" ,"" ,"xn--g-sha" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//䉠@)" ,"ws" ,"%E4%89%A0" ,"" ,")" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[cdcb::ebab:252.254.254.255]" ,"file" ,"" ,"" ,"[cdcb::ebab:fcfe:feff]" ,-1 ,"/" ,"" ,""}};
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