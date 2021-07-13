
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
{"P://[::175.255.252.251%25~]"},
{"//[::aada:255.255.255.214%25_]"},
{"t://-"},
{"//#m"},
{"//@/%cd"},
{"//[cfde::dbbc:beec:ffec:beda:252.251.0.254]"}};
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