
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
static URLParseCase parse_cases[]={{"//[::acbb:aeed:abeb]"},
{"J:///%2e"},
{"//[::fbec:fbad:7abd]"},
{"I://[::daef:dfdb:ebfb:252.252.251.7%25~]"},
{"i://[afed:efba:dcee:eddd:bceb:afdd:252.253.203.255%25.]"},
{"//[::aebc:cbbb:edbc:250.252.1.252]"},
{"//[4faa::fdba:badd:252.250.255.255%25~]"},
{"//[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-]"},
{"//[::5bde:bfec%25~]"},
{"//%4a"},
{"v://[::dfac:bbfe:252.255.255.2%25~]"},
{"h://[::ebba:fbce:feec:beda:eabc:251.254.255.2]"},
{"l://[fcbe:ddac:cdcc:cbad:aebc:afda:250.255.250.224%25-]"},
{"//[::fbfa:dafe:edfd:ebcc:aeaf:223.255.253.253]"},
{"c://[abcb::cffe:afcb:bbad:bcdf:251.250.253.213]"},
{"f:///+"},
{"//[::250.253.253.97%25_]"},
{"//[ecfd::dbad:aadf:cfde:fdae:eeee:9dbb]"},
{"//[bbfb::eacc:ccff:cfef:cced:255.250.152.255]"},
{"R://[::ccce:dcec:4.254.252.250]"},
{"//[::eead:dfaa:235.254.255.250%25-]"},
{"M://[::dffa:251.189.251.252]"},
{"q://[5dbf:faed::badf:255.250.252.251%25_]"},
{"H://[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~]"},
{"r://[::eace:bccf:bdfe:75.252.252.255%25_]"},
{"w://[::fcee:ebdb:cbec:251.253.191.252%25~]"},
{"//[::cdad:fdfb:253.250.152.254]"},
{"M://[bbdb::eeba:bdee:fbde:efdc:250.254.250.219]"},
{"x://[::baac:cafd:8bfa]"},
{"//252.253.250.3"},
{"//[::caed:dbdc:adec:dccc:dcdb:254.250.254.23%25_]"},
{"//[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.]"},
{"//[::ebaf:251.254.1.250%25_]"},
{"//[::fffb:dece:ffbc:253.250.106.251]"},
{"//[vc.t]"},
{"//[::cfab:cbcf:eccf:251.250.254.64]"},
{"S://[::cbdc:255.254.23.254%25-]"},
{"a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~]"},
{"//?%f8"},
{"///%0b"},
{"//?%be"},
{"D://[::254.72.251.250]"},
{"r://[::ddbf:ebcb:dfef:0.254.250.253%25~]"},
{"//[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_]"},
{"//[::deca:eabe:bbdc:251.252.90.251]"},
{"//[::254.250.183.252%25~]"},
{"//[7ccc:fefb::ffae]"},
{"//[::252.251.29.254%25_]"},
{"//[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.]"},
{"//[::fbec:39.252.254.252]"},
{"//[va.Z]"},
{"r://[::cbdd:250.89.251.253%25.]"},
{"//[::beee:ccae:eeac:dabd:bada:251.252.66.252%25~]"},
{"//[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_]"},
{"//[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_]"},
{"//[::253.255.119.250]"},
{"//%a6@"},
{"//[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254]"},
{"B://[::%25F]"},
{"L://[::dbca:eafc:acca:255.255.254.243%25_]"},
{"g://[::ccab:aeef:abbb:253.255.8.253%25~]"},
{"//[::ffdc:bfdf:53.251.254.251]"},
{"i://[edbc:bace:dabf:cdef:beff:efca:5dbc:beca%25.]"},
{"//[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253]"},
{"Y://[efbb:bbef:fbca:fcdd:dcaa:fbef:255.252.15.251%25~]"},
{"//[cbad:fbcc:edad:daaf:ceda:feec:253.253.253.3]"},
{"g://[::bfac:ccad:254.250.250.217%25-]"},
{"//[::fdfd:bbdb:dcdd:facc:dacd:133.250.253.251]"},
{"U://[fcaa::aaaa:ebeb:dbfa:aeba:252.5.251.250]"},
{"//[fecc:adbe:dfff:ffba:ddff:ddef:219.255.253.255]"},
{"//[cedb::fbad:aabb:fbce:bfce:250.53.254.250]"},
{"//[aece::faaa:abfe:debd:cacb:255.252.239.255]"},
{"//%dc"},
{"//[2cea:dbdf::%25.]"},
{"d://[::bafe:aabf:251.250.228.255]"},
{"//[::ceff:dccb:deac:3dfe]"},
{"//[3fcb:eaea:dadf:eacb:cfcb:ceac:254.252.252.255]"},
{"v://[::229.252.253.255%25-]"},
{"//[::250.251.204.253]"},
{"R:///l"},
{"d://[acad:ceaa:faac:acfd:dbff:fbcd:251.251.35.253%25-]"},
{"//48.253.255.252"},
{"//?-"},
{"//[dbca::fcfc:abea:daad:dbfe:255.250.254.1]"},
{"//[cebd:cfed:dafe:fbff:dbed:aabc:3cdd:dcae]"},
{"//[fcfb::dcdb:cfdb:abeb:cafc:253.253.7.253]"},
{"P://[ceed::cddd:dfbb:ffbb:ddcb:253.254.250.19%25~]"},
{"B://[::252.253.255.24%25-]"},
{"//[::cafd:153.253.252.255]"},
{"//[ccfb::dfec:bebe:effc:cefc:255.250.250.58]"},
{"d://[::8ceb:cfcd]"},
{"//[::cfbc:adce:adee:250.251.250.93%25-]"},
{"//[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_]"},
{"C://[feab:adef:eadc:affa:bceb:bdea:251.253.255.100]"},
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