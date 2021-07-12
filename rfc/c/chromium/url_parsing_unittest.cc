
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
{"//[::aebc:cbbb:edbc:250.252.1.252]"},
{"f:///+"},
{"//[bbfb::eacc:ccff:cfef:cced:255.250.152.255]"},
{"R://[::ccce:dcec:4.254.252.250]"},
{"q://[5dbf:faed::badf:255.250.252.251%25_]"},
{"H://[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~]"},
{"w://[::fcee:ebdb:cbec:251.253.191.252%25~]"},
{"//252.253.250.3"},
{"//[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.]"},
{"//[vc.t]"},
{"a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~]"},
{"//?%f8"},
{"r://[::ddbf:ebcb:dfef:0.254.250.253%25~]"},
{"//[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_]"},
{"//[::deca:eabe:bbdc:251.252.90.251]"},
{"//[::254.250.183.252%25~]"},
{"//[::fbec:39.252.254.252]"},
{"//[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_]"},
{"//[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254]"},
{"L://[::dbca:eafc:acca:255.255.254.243%25_]"},
{"//[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253]"},
{"U://[fcaa::aaaa:ebeb:dbfa:aeba:252.5.251.250]"},
{"//[2cea:dbdf::%25.]"},
{"d://[::bafe:aabf:251.250.228.255]"},
{"//[3fcb:eaea:dadf:eacb:cfcb:ceac:254.252.252.255]"},
{"d://[::8ceb:cfcd]"},
{"V://[4eed::fcfe:ecde:edcf:fccc:252.252.250.252%25_]"}};
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