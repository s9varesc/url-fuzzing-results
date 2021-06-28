
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
static URLParseCase parse_cases[]={{"S://[::fdea:9.6.250.2]"},
{"Z://[::affd:caeb:4.6.36.8]"},
{"//?."},
{"H://[fdaf::ccfc:adca:dded:fcad]"},
{"//[::227.5.8.5]"},
{"//[::becd:dcde:feab:dabb:beaa:1.2.252.9]"},
{"O://[::edce:fcdc:baae:3.255.3.6%25_]"},
{"//[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_]"},
{"R://[::abca:222.9.3.6%25_]"},
{"//[::bfda:acda:5.8.3.252%25_]"}};
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