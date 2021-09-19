
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
static URLParseCase parse_cases[]={{"I:/" ,"///﷎" ,"i" ,"" ,"" ,"" ,-1 ,"/%EF%B7%8E" ,"" ,""},
{"G:/" ,"//[::253.250.31.250]" ,"g" ,"" ,"" ,"[::fdfa:1ffa]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///#񅏼" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%F1%85%8F%BC"},
{"https://[eff1::adda:251.250.254.250]" ,"/" ,"https" ,"" ,"" ,"[eff1::adda:fbfa:fefa]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://254.57.253.254" ,"wss" ,"" ,"" ,"254.57.253.254" ,-1 ,"/" ,"" ,""},
{"file:///" ,"///%2e//񓀯" ,"file" ,"" ,"" ,"" ,-1 ,"//%F1%93%80%AF" ,"" ,""},
{"T://[dd2a:beca::ebfb:caaf:250.254.251.252]" ,"/" ,"t" ,"" ,"" ,"[dd2a:beca::ebfb:caaf:fafe:fbfc]" ,-1 ,"/" ,"" ,""},
{"" ,"http://[cfcd:afba:fffd:eedd:bfec:fbad:caed:ebee]" ,"http" ,"" ,"" ,"[cfcd:afba:fffd:eedd:bfec:fbad:caed:ebee]" ,-1 ,"/" ,"" ,""},
{"ftp://[cdba:ebcc:ceed:cafc:febd:cddd:254.250.254.253]" ,"/" ,"ftp" ,"" ,"" ,"[cdba:ebcc:ceed:cafc:febd:cddd:fefa:fefd]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/Ⅲ" ,"file" ,"" ,"" ,"" ,-1 ,"/%E2%85%A2" ,"" ,""},
{"L:/" ,"//[::3bcd:ffdf]" ,"l" ,"" ,"" ,"[::3bcd:ffdf]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///%2e/%2e" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"/?ﻶ" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/" ,"%EF%BB%B6" ,""},
{"ftp://[::]" ,"//[1daf::ddac:250.250.251.252]" ,"ftp" ,"" ,"" ,"[1daf::ddac:fafa:fbfc]" ,-1 ,"/" ,"" ,""},
{"h:/" ,"%2e%2e/x" ,"h" ,"" ,"" ,"" ,-1 ,"/x" ,"" ,""},
{"i://[::]:65301" ,"/" ,"i" ,"" ,"" ,"[::]" ,65301 ,"/" ,"" ,""},
{"" ,"wss://-U" ,"wss" ,"" ,"" ,"-u" ,-1 ,"/" ,"" ,""},
{"m:/" ,"//[cfb2::dbce:251.250.253.252]" ,"m" ,"" ,"" ,"[cfb2::dbce:fbfa:fdfc]" ,-1 ,"/" ,"" ,""},
{"ftp://8)" ,"/" ,"ftp" ,"" ,"" ,"8)" ,-1 ,"/" ,"" ,""},
{"" ,"Y:/8" ,"y" ,"" ,"" ,"" ,-1 ,"/8" ,"" ,""},
{"" ,"A://!n" ,"a" ,"" ,"" ,"!n" ,-1 ,"/" ,"" ,""},
{"" ,"file://[aa7e:adae::caed]" ,"file" ,"" ,"" ,"[aa7e:adae::caed]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/n:/" ,"file" ,"" ,"" ,"" ,-1 ,"/n:/" ,"" ,""},
{"file:///" ,"//[::]/%2e%2e/%2e." ,"file" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///#U" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"U"},
{"https://[::]" ,"/?_" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/" ,"_" ,""},
{"" ,"wss://[f0ca::bafe:251.253.250.251]" ,"wss" ,"" ,"" ,"[f0ca::bafe:fbfd:fafb]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/Q:/" ,"file" ,"" ,"" ,"" ,-1 ,"/Q:/" ,"" ,""},
{"http://[::9ffe]" ,"/" ,"http" ,"" ,"" ,"[::9ffe]" ,-1 ,"/" ,"" ,""},
{"" ,"g:/" ,"g" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"file:///" ,"///[]" ,"file" ,"" ,"" ,"" ,-1 ,"/[]" ,"" ,""},
{"file:///" ,"/k" ,"file" ,"" ,"" ,"" ,-1 ,"/k" ,"" ,""},
{"" ,"H://[adbb:eaaf:dbbe:faea:efbc:fdaf:255.65.254.251]" ,"h" ,"" ,"" ,"[adbb:eaaf:dbbe:faea:efbc:fdaf:ff41:fefb]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/%60ᦀ" ,"file" ,"" ,"" ,"" ,-1 ,"/%60%E1%A6%80" ,"" ,""},
{"file:///" ,"/@" ,"file" ,"" ,"" ,"" ,-1 ,"/@" ,"" ,""},
{"N:/𾟽" ,"/" ,"n" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"//[::cbcc:dabe:254.251.21.255]" ,"wss" ,"" ,"" ,"[::cbcc:dabe:fefb:15ff]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///#6" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"6"},
{"q:/" ,"//[::252.250.249.250]" ,"q" ,"" ,"" ,"[::fcfa:f9fa]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//[::eaec:254.2.253.255]" ,"http" ,"" ,"" ,"[::eaec:fe02:fdff]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//185.253.253.252" ,"file" ,"" ,"" ,"185.253.253.252" ,-1 ,"/" ,"" ,""},
{"K:/" ,"///" ,"k" ,"" ,"" ,"" ,-1 ,"/%EF%95%BD" ,"" ,""},
{"file:///" ,"򰠧" ,"file" ,"" ,"" ,"" ,-1 ,"/%F2%B0%A0%A7" ,"" ,""},
{"p:/" ,"/%7b~" ,"p" ,"" ,"" ,"" ,-1 ,"/%7b~" ,"" ,""},
{"c:/" ,"/=%" ,"c" ,"" ,"" ,"" ,-1 ,"/=%" ,"" ,""},
{"file:///" ,"򰌩" ,"file" ,"" ,"" ,"" ,-1 ,"/%F2%B0%8C%A9" ,"" ,""},
{"file:///" ,"//;v" ,"file" ,"" ,"" ,";v" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//:X@-" ,"ftp" ,"" ,"X" ,"-" ,-1 ,"/" ,"" ,""},
{"T:/?" ,"/" ,"t" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::253.251.253.254]" ,"https" ,"" ,"" ,"[::fdfb:fdfe]" ,-1 ,"/" ,"" ,""},
{"c:/" ,"//[::aeed:251.254.223.255]" ,"c" ,"" ,"" ,"[::aeed:fbfe:dfff]" ,-1 ,"/" ,"" ,""},
{"A:/" ,"//[cab7::ebfe]" ,"a" ,"" ,"" ,"[cab7::ebfe]" ,-1 ,"/" ,"" ,""},
{"ftp://[fdc7::]" ,"/" ,"ftp" ,"" ,"" ,"[fdc7::]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//255.252.1.254" ,"https" ,"" ,"" ,"255.252.1.254" ,-1 ,"/" ,"" ,""},
{"http://[::]?￈" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"c:/" ,"///j:/" ,"c" ,"" ,"" ,"" ,-1 ,"/j:/" ,"" ,""},
{"" ,"file://Ćm" ,"file" ,"" ,"" ,"xn--m-zha" ,-1 ,"/" ,"" ,""},
{"" ,"w:/J:/" ,"w" ,"" ,"" ,"" ,-1 ,"/J:/" ,"" ,""},
{"https://[::]" ,"//[5bcc:ccca::]" ,"https" ,"" ,"" ,"[5bcc:ccca::]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::]/$" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/$" ,"" ,""},
{"G://`" ,"/" ,"g" ,"" ,"" ,"`" ,-1 ,"/" ,"" ,""},
{"G:/" ,"//[::58.254.250.252]" ,"g" ,"" ,"" ,"[::3afe:fafc]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"///%2e.//򃗸" ,"file" ,"" ,"" ,"" ,-1 ,"//%F2%83%97%B8" ,"" ,""},
{"" ,"http://[::]/%2e%2e//﷎" ,"http" ,"" ,"" ,"[::]" ,-1 ,"//%EF%B7%8E" ,"" ,""},
{"" ,"mL:/" ,"ml" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::adcf:cedb:252.254.202.255]" ,"file" ,"" ,"" ,"[::adcf:cedb:fcfe:caff]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[fafa:edaa:aeaf:abaf:baab:bfac:eadb:cf6c]" ,"file" ,"" ,"" ,"[fafa:edaa:aeaf:abaf:baab:bfac:eadb:cf6c]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[daee:cafa::255.254.255.250]" ,"file" ,"" ,"" ,"[daee:cafa::fffe:fffa]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::]/," ,"file" ,"" ,"" ,"[::]" ,-1 ,"/," ,"" ,""},
{"" ,"V:/%2e./" ,"v" ,"" ,"" ,"" ,-1 ,"/%2e./%EF%8A%88" ,"" ,""},
{"ftp://[::]" ,"/?" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/" ,"%EE%93%BB" ,""},
{"wss://[::fe8d:252.250.253.255]" ,"/" ,"wss" ,"" ,"" ,"[::fe8d:fcfa:fdff]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::debd:facc:deff]" ,"file" ,"" ,"" ,"[::debd:facc:deff]" ,-1 ,"/" ,"" ,""},
{"f:/" ,"//[cc7e:dfbd::253.255.255.255]" ,"f" ,"" ,"" ,"[cc7e:dfbd::fdff:ffff]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"/?ﻃ" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"%EF%BB%83" ,""},
{"" ,"https://}" ,"https" ,"" ,"" ,"}" ,-1 ,"/" ,"" ,""},
{"file://63.255.251.255" ,"/" ,"file" ,"" ,"" ,"63.255.251.255" ,-1 ,"/" ,"" ,""},
{"A:/" ,"//[::afab:254.139.250.253]" ,"a" ,"" ,"" ,"[::afab:fe8b:fafd]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/M:/" ,"file" ,"" ,"" ,"" ,-1 ,"/M:/" ,"" ,""},
{"a:///'ﺩ" ,"/" ,"a" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[::254.254.250.4]" ,"https" ,"" ,"" ,"[::fefe:fa04]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::]/%2e%2e//ꮎ" ,"file" ,"" ,"" ,"[::]" ,-1 ,"//%EA%AE%8E" ,"" ,""},
{"file:///" ,".%2e/" ,"file" ,"" ,"" ,"" ,-1 ,"/%EE%96%A3" ,"" ,""},
{"file:///" ,"//{n" ,"file" ,"" ,"" ,"{n" ,-1 ,"/" ,"" ,""},
{"wss://[::254.255.251.61]" ,"/" ,"wss" ,"" ,"" ,"[::feff:fb3d]" ,-1 ,"/" ,"" ,""},
{"S://[6fec::cbbc:ebca:255.251.254.253]" ,"/" ,"s" ,"" ,"" ,"[6fec::cbbc:ebca:fffb:fefd]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::cebf:eedc:254.191.250.251]" ,"file" ,"" ,"" ,"[::cebf:eedc:febf:fafb]" ,-1 ,"/" ,"" ,""},
{"" ,"ws://[::7.250.250.251]" ,"ws" ,"" ,"" ,"[::7fa:fafb]" ,-1 ,"/" ,"" ,""},
{"ftp://30.254.250.252" ,"/" ,"ftp" ,"" ,"" ,"30.254.250.252" ,-1 ,"/" ,"" ,""},
{"http://[::]/)￺" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"r:/" ,"/?􏰜" ,"r" ,"" ,"" ,"" ,-1 ,"/" ,"%F4%8F%B0%9C" ,""},
{"" ,"file://[d2ef::dafa:ddfb:250.255.253.253]" ,"file" ,"" ,"" ,"[d2ef::dafa:ddfb:faff:fdfd]" ,-1 ,"/" ,"" ,""},
{"" ,"file://b" ,"file" ,"" ,"" ,"b" ,-1 ,"/" ,"" ,""}};
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