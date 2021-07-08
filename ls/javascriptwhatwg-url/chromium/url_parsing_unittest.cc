
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
{"" ,"https://F," ,"https" ,"" ,"" ,"f," ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//[::cdef:bacb:cfc0]" ,"ws" ,"" ,"" ,"[::cdef:bacb:cfc0]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"/?g" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/" ,"g" ,""},
{"file:///?}" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://207.254.251.254" ,"file" ,"" ,"" ,"207.254.251.254" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"@" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/@" ,"" ,""},
{"" ,"Q:/%3f" ,"q" ,"" ,"" ,"" ,-1 ,"/%3f" ,"" ,""},
{"U:/" ,"//[::bffa:eecf:180.253.255.252]" ,"u" ,"" ,"" ,"[::bffa:eecf:b4fd:fffc]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://D" ,"wss" ,"" ,"" ,"d" ,-1 ,"/" ,"" ,""},
{"file:///?﹩" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://;," ,"file" ,"" ,"" ,";," ,-1 ,"/" ,"" ,""},
{"M:/" ,"/嫭" ,"m" ,"" ,"" ,"" ,-1 ,"/%E5%AB%AD" ,"" ,""},
{"R:/" ,"//[::]:64305" ,"r" ,"" ,"" ,"[::]" ,64305 ,"/" ,"" ,""},
{"" ,"http://[::]/󚇜" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/%F3%9A%87%9C" ,"" ,""},
{"P:/" ,"/?􏔲" ,"p" ,"" ,"" ,"" ,-1 ,"/" ,"%F4%8F%94%B2" ,""},
{"" ,"wss://Z!" ,"wss" ,"" ,"" ,"z!" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//253.70.252.250" ,"https" ,"" ,"" ,"253.70.252.250" ,-1 ,"/" ,"" ,""},
{"" ,"file:///#=" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"="},
{"file:///" ,"/?䉷" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%E4%89%B7" ,""},
{"h:/" ,"//[::fadb:aae1:acce]" ,"h" ,"" ,"" ,"[::fadb:aae1:acce]" ,-1 ,"/" ,"" ,""},
{"" ,"http://[::afae:250.254.70.252]" ,"http" ,"" ,"" ,"[::afae:fafe:46fc]" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[::]/￴" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%EF%BF%B4" ,"" ,""},
{"wss://[::]" ,"//*o" ,"wss" ,"" ,"" ,"*o" ,-1 ,"/" ,"" ,""},
{"N:/" ,"///../]" ,"n" ,"" ,"" ,"" ,-1 ,"/]" ,"" ,""},
{"file:///" ,"/%2e./􏲉" ,"file" ,"" ,"" ,"" ,-1 ,"/%F4%8F%B2%89" ,"" ,""},
{"" ,"file://[bee7:bddb::abec]" ,"file" ,"" ,"" ,"[bee7:bddb::abec]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//s" ,"https" ,"" ,"" ,"s" ,-1 ,"/" ,"" ,""},
{"" ,"D://_" ,"d" ,"" ,"" ,"_" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/툨" ,"file" ,"" ,"" ,"" ,-1 ,"/%ED%88%A8" ,"" ,""},
{"" ,"wss://251.255.214.253" ,"wss" ,"" ,"" ,"251.255.214.253" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//253.252.255.220" ,"file" ,"" ,"" ,"253.252.255.220" ,-1 ,"/" ,"" ,""},
{"C:/" ,"//[::ffd3:bada]" ,"c" ,"" ,"" ,"[::ffd3:bada]" ,-1 ,"/" ,"" ,""},
{"n:/" ,"//[dbc1:bcca::]" ,"n" ,"" ,"" ,"[dbc1:bcca::]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"%2e%2e//%2e." ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"ws://[eebd::efbe]" ,"/" ,"ws" ,"" ,"" ,"[eebd::efbe]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/'" ,"file" ,"" ,"" ,"" ,-1 ,"/'" ,"" ,""},
{"K:/" ,"//[::252.251.253.49]" ,"k" ,"" ,"" ,"[::fcfb:fd31]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///R:/" ,"file" ,"" ,"" ,"" ,-1 ,"/R:/" ,"" ,""},
{"" ,"file://250.251.7.251" ,"file" ,"" ,"" ,"250.251.7.251" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::]/􏘦" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%F4%8F%98%A6" ,"" ,""},
{"file:///" ,"//[::ffed:abde:defd:fdc8]" ,"file" ,"" ,"" ,"[::ffed:abde:defd:fdc8]" ,-1 ,"/" ,"" ,""},
{"file://ġ-Ł" ,"/" ,"file" ,"" ,"" ,"xn----hja4h" ,-1 ,"/" ,"" ,""},
{"file:///" ,"%7b%60" ,"file" ,"" ,"" ,"" ,-1 ,"/%7b%60" ,"" ,""},
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