
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
static URLParseCase parse_cases[]={{"//[::eebf:fbed:decc:badc:fbde:255.50.253.250]"},
{"//[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255]"},
{"//253.8.251.252"},
{"//[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251]"},
{"//[dfab::feee:dafb:bcaa:ecef:251.52.253.255]"},
{"//[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_]"},
{"//[2cae::ecda:acce:fbcd:254.253.254.251%25-]"},
{"//[::beed:fdbc:ffbf:251.251.1.252%25_]"},
{"X://[edda:ddcc:fcbe:edfd:bfaa:eaaf:254.250.253.4]"},
{"//[5fff::abff]"},
{"W://[::250.253.250.246%25-]"},
{"U://[::aabe:aeeb:eeee:bdbd:dfed:cbee:8adc%25-]"},
{"t://[::ebea:ccaf:58.253.252.252]"}};
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