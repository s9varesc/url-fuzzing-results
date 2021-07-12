
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
static URLParseCase parse_cases[]={{"F:/" ,"//M~" ,"f" ,"" ,"" ,"m~" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//250.253.252.6" ,"file" ,"" ,"" ,"250.253.252.6" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//252.250.250.250" ,"http" ,"" ,"" ,"252.250.250.250" ,-1 ,"/" ,"" ,""},
{"" ,"http://[::cafb:dbcb:baaf:b3ae]" ,"http" ,"" ,"" ,"[::cafb:dbcb:baaf:b3ae]" ,-1 ,"/" ,"" ,""},
{"e:/" ,"//[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254]" ,"e" ,"" ,"" ,"[eada:fffc:eede:fdeb:adbc:edce:60fe:fafe]" ,-1 ,"/" ,"" ,""},
{"y:/" ,"/#򀑫" ,"y" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%F2%80%91%AB"},
{"O:/" ,"𿇰" ,"o" ,"" ,"" ,"" ,-1 ,"/%F0%BF%87%B0" ,"" ,""},
{"c:/" ,"/?ﻟ" ,"c" ,"" ,"" ,"" ,-1 ,"/" ,"%EF%BB%9F" ,""},
{"" ,"http://[fefe:faaa::cabe:254.253.250.254]" ,"http" ,"" ,"" ,"[fefe:faaa::cabe:fefd:fafe]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//_$" ,"https" ,"" ,"" ,"_$" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/%2e///%2e" ,"file" ,"" ,"" ,"" ,-1 ,"///" ,"" ,""},
{"file://{" ,"/" ,"file" ,"" ,"" ,"{" ,-1 ,"/" ,"" ,""},
{"" ,"file:///+" ,"file" ,"" ,"" ,"" ,-1 ,"/+%EE%B3%97" ,"" ,""},
{"" ,"file://{" ,"file" ,"" ,"" ,"{" ,-1 ,"/" ,"" ,""},
{"Q:/h:/" ,"/" ,"q" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[d7fd:dbbb::251.254.255.255]" ,"https" ,"" ,"" ,"[d7fd:dbbb::fbfe:ffff]" ,-1 ,"/" ,"" ,""},
{"" ,"https://%3d@\"" ,"https" ,"%3d" ,"" ,"\"" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//222.255.255.251" ,"ws" ,"" ,"" ,"222.255.255.251" ,-1 ,"/" ,"" ,""},
{"W:/?" ,"/" ,"w" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"S:/" ,"//`" ,"s" ,"" ,"" ,"`" ,-1 ,"/" ,"" ,""},
{"" ,"file:///#｠" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%EF%BD%A0"},
{"D:/" ,"//[::ee1d:255.250.250.253]" ,"d" ,"" ,"" ,"[::ee1d:fffa:fafd]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//255.253.255.26" ,"ftp" ,"" ,"" ,"255.253.255.26" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"/?񢰜" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/" ,"%F1%A2%B0%9C" ,""},
{"file:///" ,"///R:/" ,"file" ,"" ,"" ,"" ,-1 ,"/R:/" ,"" ,""},
{"file:///" ,"/%2e//퟾" ,"file" ,"" ,"" ,"" ,-1 ,"//%ED%9F%BE" ,"" ,""},
{"" ,"file://ž2" ,"file" ,"" ,"" ,"xn--2-soa" ,-1 ,"/" ,"" ,""},
{"" ,"Mz:/" ,"mz" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"H:/" ,"//[::9bde]" ,"h" ,"" ,"" ,"[::9bde]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://[::]?񴰅" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/" ,"%F1%B4%B0%85" ,""},
{"file:///" ,"/.%2e/￹" ,"file" ,"" ,"" ,"" ,-1 ,"/%EF%BF%B9" ,"" ,""},
{"file:///" ,"/.." ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"ws://[::dced:ffda:dbea:eebf]" ,"ws" ,"" ,"" ,"[::dced:ffda:dbea:eebf]" ,-1 ,"/" ,"" ,""},
{"L:/" ,"//[a5fa:edee::beae:beeb:252.252.254.253]" ,"l" ,"" ,"" ,"[a5fa:edee::beae:beeb:fcfc:fefd]" ,-1 ,"/" ,"" ,""},
{"" ,"http://[da4d::cacf:efdf:251.255.253.251]" ,"http" ,"" ,"" ,"[da4d::cacf:efdf:fbff:fdfb]" ,-1 ,"/" ,"" ,""},
{"m:/" ,"/?ｷ" ,"m" ,"" ,"" ,"" ,-1 ,"/" ,"%EF%BD%B7" ,""},
{"wss://[::]" ,"//,k" ,"wss" ,"" ,"" ,",k" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//[ba2c:cbdc::fafe:255.254.250.254]" ,"ws" ,"" ,"" ,"[ba2c:cbdc::fafe:fffe:fafe]" ,-1 ,"/" ,"" ,""},
{"file://250.253.251.250" ,"/" ,"file" ,"" ,"" ,"250.253.251.250" ,-1 ,"/" ,"" ,""},
{"F:/" ,"///!%23" ,"f" ,"" ,"" ,"" ,-1 ,"/!%23" ,"" ,""},
{"" ,"ftp://8š" ,"ftp" ,"" ,"" ,"xn--8-5ma" ,-1 ,"/" ,"" ,""},
{"" ,"file:///#􇇥" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%F4%87%87%A5"},
{"file:///" ,"/#￸" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%EF%BF%B8"},
{"" ,"T:/%﹯" ,"t" ,"" ,"" ,"" ,-1 ,"/%%EF%B9%AF" ,"" ,""},
{"" ,"https://7.254.255.250" ,"https" ,"" ,"" ,"7.254.255.250" ,-1 ,"/" ,"" ,""},
{"" ,"wss://253.53.252.253" ,"wss" ,"" ,"" ,"253.53.252.253" ,-1 ,"/" ,"" ,""},
{"file:///" ,"%'" ,"file" ,"" ,"" ,"" ,-1 ,"/%'" ,"" ,""},
{"" ,"https://[::f9fe]" ,"https" ,"" ,"" ,"[::f9fe]" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[ee4e::fbce:252.252.255.250]" ,"ftp" ,"" ,"" ,"[ee4e::fbce:fcfc:fffa]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/%2e/琮" ,"file" ,"" ,"" ,"" ,-1 ,"/%E7%90%AE" ,"" ,""},
{"O:/" ,"//%ed" ,"o" ,"" ,"" ,"%ed" ,-1 ,"/" ,"" ,""},
{"W:/" ,"//[7eaf::adfa:bbde:254.253.252.250]" ,"w" ,"" ,"" ,"[7eaf::adfa:bbde:fefd:fcfa]" ,-1 ,"/" ,"" ,""},
{"o:/" ,"/뤠" ,"o" ,"" ,"" ,"" ,-1 ,"/%EB%A4%A0" ,"" ,""},
{"T:/" ,"///W:/" ,"t" ,"" ,"" ,"" ,-1 ,"/W:/" ,"" ,""},
{"F:/" ,"//{v" ,"f" ,"" ,"" ,"{v" ,-1 ,"/" ,"" ,""},
{"R:/" ,"/c:/" ,"r" ,"" ,"" ,"" ,-1 ,"/c:/" ,"" ,""},
{"file:///" ,"//[cae2:ebaa::feff:fadc:251.254.253.254]" ,"file" ,"" ,"" ,"[cae2:ebaa::feff:fadc:fbfe:fdfe]" ,-1 ,"/" ,"" ,""},
{"" ,"ws://[::]:65530" ,"ws" ,"" ,"" ,"[::]" ,65530 ,"/" ,"" ,""},
{"N:/" ,"//+" ,"n" ,"" ,"" ,"+" ,-1 ,"/" ,"" ,""},
{"" ,"ws://鸐@\"" ,"ws" ,"%E9%B8%90" ,"" ,"\"" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[::cacf:dd1e]" ,"ftp" ,"" ,"" ,"[::cacf:dd1e]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/.%2e//" ,"file" ,"" ,"" ,"" ,-1 ,"//%EF%96%B7" ,"" ,""},
{"file:///" ,"/=!" ,"file" ,"" ,"" ,"" ,-1 ,"/=!" ,"" ,""},
{"http://[::]?﷎" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"R:/" ,"//[::eded]" ,"r" ,"" ,"" ,"[::eded]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//[fdde:acbd:efee:ccea:accf:fdce:242.255.254.251]" ,"ws" ,"" ,"" ,"[fdde:acbd:efee:ccea:accf:fdce:f2ff:fefb]" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::cbfa:eded:6aab]" ,"https" ,"" ,"" ,"[::cbfa:eded:6aab]" ,-1 ,"/" ,"" ,""},
{"" ,"file://ck" ,"file" ,"" ,"" ,"ck" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"[ﴙ" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/[%EF%B4%99" ,"" ,""},
{"" ,"file:///#򃣻" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%F2%83%A3%BB"},
{"" ,"https://[::abdf:206.250.251.251]" ,"https" ,"" ,"" ,"[::abdf:cefa:fbfb]" ,-1 ,"/" ,"" ,""},
{"" ,"ws://[::]?⍭" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/" ,"%E2%8D%AD" ,""},
{"ftp://[::]" ,"//[df9c::254.250.253.255]" ,"ftp" ,"" ,"" ,"[df9c::fefa:fdff]" ,-1 ,"/" ,"" ,""},
{"e:/" ,"//[::ee0b]" ,"e" ,"" ,"" ,"[::ee0b]" ,-1 ,"/" ,"" ,""}};
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