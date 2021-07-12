
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
static URLParseCase parse_cases[]={{"J:///%2e"},
{"I://[::daef:dfdb:ebfb:252.252.251.7%25~]"},
{"//[::aebc:cbbb:edbc:250.252.1.252]"},
{"f:///+"},
{"//[ecfd::dbad:aadf:cfde:fdae:eeee:9dbb]"},
{"//[bbfb::eacc:ccff:cfef:cced:255.250.152.255]"},
{"R://[::ccce:dcec:4.254.252.250]"},
{"//[::eead:dfaa:235.254.255.250%25-]"},
{"q://[5dbf:faed::badf:255.250.252.251%25_]"},
{"H://[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~]"},
{"w://[::fcee:ebdb:cbec:251.253.191.252%25~]"},
{"//[::cdad:fdfb:253.250.152.254]"},
{"//252.253.250.3"},
{"//[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.]"},
{"//[vc.t]"},
{"//[::cfab:cbcf:eccf:251.250.254.64]"},
{"a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~]"},
{"//?%f8"},
{"D://[::254.72.251.250]"},
{"r://[::ddbf:ebcb:dfef:0.254.250.253%25~]"},
{"//[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_]"},
{"//[::deca:eabe:bbdc:251.252.90.251]"},
{"//[::254.250.183.252%25~]"},
{"//[::252.251.29.254%25_]"},
{"//[::fbec:39.252.254.252]"},
{"//[va.Z]"},
{"r://[::cbdd:250.89.251.253%25.]"},
{"//[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_]"},
{"//[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_]"},
{"//[::253.255.119.250]"},
{"//[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254]"},
{"L://[::dbca:eafc:acca:255.255.254.243%25_]"},
{"//[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253]"},
{"U://[fcaa::aaaa:ebeb:dbfa:aeba:252.5.251.250]"},
{"//[2cea:dbdf::%25.]"},
{"d://[::bafe:aabf:251.250.228.255]"},
{"//[3fcb:eaea:dadf:eacb:cfcb:ceac:254.252.252.255]"},
{"//48.253.255.252"},
{"//?-"},
{"//[cebd:cfed:dafe:fbff:dbed:aabc:3cdd:dcae]"},
{"P://[ceed::cddd:dfbb:ffbb:ddcb:253.254.250.19%25~]"},
{"//[ccfb::dfec:bebe:effc:cefc:255.250.250.58]"},
{"d://[::8ceb:cfcd]"},
{"//[::cfbc:adce:adee:250.251.250.93%25-]"},
{"//[ecbf::5eaf:daba:edae:eeaa:251.252.250.254]"},
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