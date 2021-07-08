
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
static URLParseCase parse_cases[]={{"//[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-]"},
{"//[::dbac:edbe:2.253.250.254]"},
{"//[::254.9.252.252]"},
{"H://[::dabf:edad:eabc:cbef:aacf:4bbb:afba]"},
{"//[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255]"},
{"///@/%1d"},
{"p://*"},
{"//[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-]"},
{"//[6bef::bbbc:255.252.251.255]"},
{"///@/%e7"},
{"I://[::250.253.200.252%25.]"},
{"W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-]"},
{"//[::aded:cffa:dcde:252.255.224.254%25_]"},
{"//[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250]"},
{"//%d2"},
{"d://255.76.253.254"}};
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