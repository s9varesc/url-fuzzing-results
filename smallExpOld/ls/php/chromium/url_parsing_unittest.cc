
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
static URLParseCase parse_cases[]={{"http://[::]#𕱽" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"V:/" ,"//[::cdbe:8.251.254.254]" ,"v" ,"" ,"" ,"[::cdbe:8fb:fefe]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::dcfd:dcef]" ,"file" ,"" ,"" ,"[::dcfd:dcef]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://:@*" ,"wss" ,"" ,"%EF%84%96" ,"*" ,-1 ,"/" ,"" ,""},
{"" ,"https://F," ,"https" ,"" ,"" ,"f," ,-1 ,"/" ,"" ,""},
{"J:/" ,"///&" ,"j" ,"" ,"" ,"" ,-1 ,"/&" ,"" ,""},
{"ws://[::]" ,"//[::cdef:bacb:cfc0]" ,"ws" ,"" ,"" ,"[::cdef:bacb:cfc0]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"/?g" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/" ,"g" ,""},
{"ws://[::]" ,"/_" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/_" ,"" ,""},
{"g:/" ,"%2e/*" ,"g" ,"" ,"" ,"" ,-1 ,"/*" ,"" ,""},
{"r:/" ,"//%6f" ,"r" ,"" ,"" ,"%6f" ,-1 ,"/" ,"" ,""},
{"D:/" ,"//[::dcef:caec:c3ef]" ,"d" ,"" ,"" ,"[::dcef:caec:c3ef]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"＆" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%EF%BC%86" ,"" ,""},
{"ws://[::]" ,"//[fffc:beac:feff:bebc:beea:fbad:250.81.251.251]" ,"ws" ,"" ,"" ,"[fffc:beac:feff:bebc:beea:fbad:fa51:fbfb]" ,-1 ,"/" ,"" ,""},
{"file:///?}" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://207.254.251.254" ,"file" ,"" ,"" ,"207.254.251.254" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"@" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/@" ,"" ,""},
{"" ,"Q:/%3f" ,"q" ,"" ,"" ,"" ,-1 ,"/%3f" ,"" ,""},
{"U:/" ,"//[::bffa:eecf:180.253.255.252]" ,"u" ,"" ,"" ,"[::bffa:eecf:b4fd:fffc]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://D" ,"wss" ,"" ,"" ,"d" ,-1 ,"/" ,"" ,""},
{"f:/" ,"//f" ,"f" ,"" ,"" ,"f" ,-1 ,"/" ,"" ,""},
{"file:///?﹩" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://;," ,"file" ,"" ,"" ,";," ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[::bdbb:faab:ccd9]" ,"https" ,"" ,"" ,"[::bdbb:faab:ccd9]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//@+" ,"ftp" ,"%EF%83%9E" ,"" ,"+" ,-1 ,"/" ,"" ,""},
{"M:/" ,"/嫭" ,"m" ,"" ,"" ,"" ,-1 ,"/%E5%AB%AD" ,"" ,""},
{"file:///" ,"//[dd8c::cbee:bdee:251.252.254.252]" ,"file" ,"" ,"" ,"[dd8c::cbee:bdee:fbfc:fefc]" ,-1 ,"/" ,"" ,""},
{"R:/" ,"//[::]:64305" ,"r" ,"" ,"" ,"[::]" ,64305 ,"/" ,"" ,""},
{"f:/" ,"//'b" ,"f" ,"" ,"" ,"'b" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/􏹺" ,"file" ,"" ,"" ,"" ,-1 ,"/%F4%8F%B9%BA" ,"" ,""},
{"" ,"http://[::]/󚇜" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/%F3%9A%87%9C" ,"" ,""},
{"A:/" ,"%2e//.." ,"a" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"P:/" ,"/?􏔲" ,"p" ,"" ,"" ,"" ,-1 ,"/" ,"%F4%8F%94%B2" ,""},
{"" ,"wss://Z!" ,"wss" ,"" ,"" ,"z!" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//253.70.252.250" ,"https" ,"" ,"" ,"253.70.252.250" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/.%2e/" ,"file" ,"" ,"" ,"" ,-1 ,"/%EF%A1%A0" ,"" ,""},
{"" ,"file:///#=" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"="},
{"file:///" ,"/?䉷" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%E4%89%B7" ,""},
{"" ,"T://N" ,"t" ,"" ,"" ,"n" ,-1 ,"/" ,"" ,""},
{"h:/" ,"//[::fadb:aae1:acce]" ,"h" ,"" ,"" ,"[::fadb:aae1:acce]" ,-1 ,"/" ,"" ,""},
{"" ,"http://[::afae:250.254.70.252]" ,"http" ,"" ,"" ,"[::afae:fafe:46fc]" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"//[cecc:aecb:bbdb:ebff:fecf:babe:ab0c:dbde]" ,"wss" ,"" ,"" ,"[cecc:aecb:bbdb:ebff:fecf:babe:ab0c:dbde]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///?ｦ" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%EF%BD%A6" ,""},
{"file://[::cdfb:bafe:39.254.250.250]" ,"/" ,"file" ,"" ,"" ,"[::cdfb:bafe:27fe:fafa]" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[::]/￴" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%EF%BF%B4" ,"" ,""},
{"wss://[::]" ,"//*o" ,"wss" ,"" ,"" ,"*o" ,-1 ,"/" ,"" ,""},
{"N:/" ,"///../]" ,"n" ,"" ,"" ,"" ,-1 ,"/]" ,"" ,""},
{"ws://[::]" ,"//[cab2::dedc:255.250.251.251]" ,"ws" ,"" ,"" ,"[cab2::dedc:fffa:fbfb]" ,-1 ,"/" ,"" ,""},
{"D:/" ,"//[eade:afdd:cade:bcff:fbca:adce:adca:aaed]" ,"d" ,"" ,"" ,"[eade:afdd:cade:bcff:fbca:adce:adca:aaed]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/%2e./􏲉" ,"file" ,"" ,"" ,"" ,-1 ,"/%F4%8F%B2%89" ,"" ,""},
{"" ,"file://[bee7:bddb::abec]" ,"file" ,"" ,"" ,"[bee7:bddb::abec]" ,-1 ,"/" ,"" ,""},
{"" ,"file://-+" ,"file" ,"" ,"" ,"-+" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//s" ,"https" ,"" ,"" ,"s" ,-1 ,"/" ,"" ,""},
{"F:/" ,"/./蔚" ,"f" ,"" ,"" ,"" ,-1 ,"/%E8%94%9A" ,"" ,""},
{"" ,"D://_" ,"d" ,"" ,"" ,"_" ,-1 ,"/" ,"" ,""},
{"rC:/" ,"/" ,"rc" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/툨" ,"file" ,"" ,"" ,"" ,-1 ,"/%ED%88%A8" ,"" ,""},
{"" ,"wss://251.255.214.253" ,"wss" ,"" ,"" ,"251.255.214.253" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//253.252.255.220" ,"file" ,"" ,"" ,"253.252.255.220" ,-1 ,"/" ,"" ,""},
{"C:/" ,"//[::ffd3:bada]" ,"c" ,"" ,"" ,"[::ffd3:bada]" ,-1 ,"/" ,"" ,""},
{"n:/" ,"//[dbc1:bcca::]" ,"n" ,"" ,"" ,"[dbc1:bcca::]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//[::]/)򢮯" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/)%F2%A2%AE%AF" ,"" ,""},
{"http://[::]" ,"%2e%2e//%2e." ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"ws://[eebd::efbe]" ,"/" ,"ws" ,"" ,"" ,"[eebd::efbe]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/'" ,"file" ,"" ,"" ,"" ,-1 ,"/'" ,"" ,""},
{"file:///" ,"//[::]/../%2e." ,"file" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///?%23" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%23" ,""},
{"" ,"file:///#!" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"!"},
{"K:/" ,"//[::252.251.253.49]" ,"k" ,"" ,"" ,"[::fcfb:fd31]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///R:/" ,"file" ,"" ,"" ,"" ,-1 ,"/R:/" ,"" ,""},
{"" ,"file://250.251.7.251" ,"file" ,"" ,"" ,"250.251.7.251" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//[fd3e:fdda::254.250.255.252]" ,"http" ,"" ,"" ,"[fd3e:fdda::fefa:fffc]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::]/􏘦" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%F4%8F%98%A6" ,"" ,""},
{"" ,"ftp://[ddbc:dece:afcd:ecac:abda:dcee:eab0:ccec]" ,"ftp" ,"" ,"" ,"[ddbc:dece:afcd:ecac:abda:dcee:eab0:ccec]" ,-1 ,"/" ,"" ,""},
{"" ,"i:/K:/" ,"i" ,"" ,"" ,"" ,-1 ,"/K:/" ,"" ,""},
{"v:/" ,"/" ,"v" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"http://+\"" ,"http" ,"" ,"" ,"+\"" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::ffed:abde:defd:fdc8]" ,"file" ,"" ,"" ,"[::ffed:abde:defd:fdc8]" ,-1 ,"/" ,"" ,""},
{"C:/" ,"//[da4d:daef::]" ,"c" ,"" ,"" ,"[da4d:daef::]" ,-1 ,"/" ,"" ,""},
{"file://ġ-Ł" ,"/" ,"file" ,"" ,"" ,"xn----hja4h" ,-1 ,"/" ,"" ,""},
{"file:///" ,"%7b%60" ,"file" ,"" ,"" ,"" ,-1 ,"/%7b%60" ,"" ,""},
{"O:/" ,"//[e5bf:aeaa::]" ,"o" ,"" ,"" ,"[e5bf:aeaa::]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[ebfe:abdd:caff:cadf:aeeb:fcaf:78.254.252.250]" ,"file" ,"" ,"" ,"[ebfe:abdd:caff:cadf:aeeb:fcaf:4efe:fcfa]" ,-1 ,"/" ,"" ,""},
{"u:/" ,"//[d1ef::eeef:253.255.255.253]" ,"u" ,"" ,"" ,"[d1ef::eeef:fdff:fffd]" ,-1 ,"/" ,"" ,""},
{"a:///d:/" ,"/" ,"a" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/?𿅢" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%F0%BF%85%A2" ,""},
{"file:///" ,"/􏔼" ,"file" ,"" ,"" ,"" ,-1 ,"/%F4%8F%94%BC" ,"" ,""}};
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