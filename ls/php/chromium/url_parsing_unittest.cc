
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
{"" ,"http://[::cafb:dbcb:baaf:b3ae]" ,"http" ,"" ,"" ,"[::cafb:dbcb:baaf:b3ae]" ,-1 ,"/" ,"" ,""},
{"e:/" ,"//[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254]" ,"e" ,"" ,"" ,"[eada:fffc:eede:fdeb:adbc:edce:60fe:fafe]" ,-1 ,"/" ,"" ,""},
{"file://{" ,"/" ,"file" ,"" ,"" ,"{" ,-1 ,"/" ,"" ,""},
{"" ,"file:///+" ,"file" ,"" ,"" ,"" ,-1 ,"/+%EE%B3%97" ,"" ,""},
{"" ,"file://{" ,"file" ,"" ,"" ,"{" ,-1 ,"/" ,"" ,""},
{"Q:/h:/" ,"/" ,"q" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"https://%3d@\"" ,"https" ,"%3d" ,"" ,"\"" ,-1 ,"/" ,"" ,""},
{"W:/?" ,"/" ,"w" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://ž2" ,"file" ,"" ,"" ,"xn--2-soa" ,-1 ,"/" ,"" ,""},
{"m:/" ,"/?ｷ" ,"m" ,"" ,"" ,"" ,-1 ,"/" ,"%EF%BD%B7" ,""},
{"file:///" ,"//[cae2:ebaa::feff:fadc:251.254.253.254]" ,"file" ,"" ,"" ,"[cae2:ebaa::feff:fadc:fbfe:fdfe]" ,-1 ,"/" ,"" ,""},
{"" ,"ws://[::]:65530" ,"ws" ,"" ,"" ,"[::]" ,65530 ,"/" ,"" ,""},
{"http://[::]?﷎" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"R:/" ,"//[::eded]" ,"r" ,"" ,"" ,"[::eded]" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::cbfa:eded:6aab]" ,"https" ,"" ,"" ,"[::cbfa:eded:6aab]" ,-1 ,"/" ,"" ,""},
{"" ,"ws://[::]?⍭" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/" ,"%E2%8D%AD" ,""}};
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