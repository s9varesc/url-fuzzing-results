
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
static URLParseCase parse_cases[]={{"I://[::daef:dfdb:ebfb:252.252.251.7%25~]"},
{"f:///+"},
{"q://[5dbf:faed::badf:255.250.252.251%25_]"},
{"a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~]"},
{"//?%f8"},
{"//[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_]"},
{"//[::deca:eabe:bbdc:251.252.90.251]"},
{"//[::fbec:39.252.254.252]"},
{"//[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_]"},
{"L://[::dbca:eafc:acca:255.255.254.243%25_]"},
{"//[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253]"},
{"U://[fcaa::aaaa:ebeb:dbfa:aeba:252.5.251.250]"},
{"d://[::8ceb:cfcd]"}};
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