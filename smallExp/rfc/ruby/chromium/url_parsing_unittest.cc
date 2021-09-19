
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
static URLParseCase parse_cases[]={{"//[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~]"},
{"//[::fbfd:bdbc:254.253.125.252]"},
{"L://[1bcb::bdaa:251.251.254.251%25-]"},
{"v://[::afca:dfed:fdcd:253.252.254.130]"},
{"///_"},
{"N://[::%25%ee]"},
{"//[::ecfc:fbaf:dcaa:236.255.254.250%25_]"},
{"//[::abed:dbac:bdda:250.252.86.251]"},
{"F://[::8acd:efce:eacc:253.250.253.255%25_]"}};
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