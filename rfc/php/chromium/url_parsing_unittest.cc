
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
  
  const char* input;
};

void CheckValidity(const URLParseCase& parse_case, const GURL& parsed_url) {
  ASSERT_TRUE(parsed_url.is_valid()) << "{\"url\":\""<< parse_case.input<<"\", \"exception\":\"invalid URL\"}";
  return;
}



//Test inputs
static URLParseCase parse_cases[]={{"Q://[::250.251.52.254%25-]"},
{"F://[::efca:adcf:227.251.252.254%25-]"},
{"D://[debc::eebc:dadd:defe:adec:255.252.128.250%25~]"},
{"//%2f"},
{"//[::dace:dfbd:8.251.252.250]"},
{"P://[::175.255.252.251%25~]"},
{"//253.211.255.253"},
{"//[::acff:255.194.253.252%25-]"},
{"E://[::0cee:253.252.254.255]"},
{"B:///%5a"},
{"w://[::eebb:bbca:cbad:aaeb:fbfb:252.254.7.252]"},
{"//[bebd::ebeb:abde:bceb:edcc:252.251.106.255%25~]"},
{"//[::fddf:fcdc:fadc:bffe:fefb%25.]"},
{"//[::1ecd:dddd:254.250.251.254%25-]"},
{"//[6fdd::afbe:252.254.251.252%25~]"},
{"Q://[eeea::cafd:abde:cbff:bfbf:254.253.250.34]"},
{"//:5"},
{"//[::aada:255.255.255.214%25_]"},
{"F://[::%258]"},
{"L:///%be"},
{"l://[::cdde:bfbe:cadd:209.254.254.250]"},
{"t://-"},
{"//[::faeb:fdea:eecc:eccb:ebdc:251.243.254.254%25_]"},
{"//[afba::baec:ceea:caec:dafd:252.251.250.1%25_]"},
{"Bn://"},
{"//#m"},
{"J://[::8fae:ffbe%25-]"},
{"//[::cceb:bfae:efbc:dcfb:efff:252.255.255.103%25-]"},
{"//[::addb:afde:ffdd:254.250.201.255]"},
{"//[adef::beba:bfba:cdbe:cedb:253.254.157.250%25_]"},
{"V://[cbcf::afce:bfef:aaba:cbcf:16.250.255.255]"},
{"D:///~"},
{"s://[daef::abce:dabd:fadc:abaa:252.253.250.1%25.]"},
{"//[::abaa:eabc:252.156.253.252%25.]"},
{"//[::bbae:250.254.8.253]"},
{"//[::%25%f8]"},
{"//@/%cd"},
{"//[cfde::dbbc:beec:ffec:beda:252.251.0.254]"},
{"//[::7ddd%25.]"},
{"//[fbab:aaba:dafe:affd:eebf:bcfd:98.255.252.250%25~]"}};
//test execution
TEST(URLParser, Parsing){
	for (size_t i = 0; i < base::size(parse_cases); i++) {
		GURL parsed_url(parse_cases[i].input);
		CheckValidity(parse_cases[i], parsed_url);

	}
}

//namespace url
}
}