
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
static URLParseCase parse_cases[]={{"//[::feee:ceda:aaea:bbdd:cdfa:237.254.253.250]"},
{"H://[::fcba:ceeb:efab:252.253.251.232%25.]"},
{"//[::defb:ebbf:29.252.255.254]"},
{"N://[::dcfb:adec:deec:250.254.178.250]"},
{"//[::254.29.254.253%25~]"},
{"//[::abcb:cfda:bcdc:ffdc:cadc:250.251.5.254]"},
{"H://[::8.251.254.253%25-]"},
{"J://[::feaa:abcd:227.254.250.253%25-]"},
{"//[::bfdc:ebfb:251.254.253.0%25-]"},
{"T://8@"},
{"s://[efdd::efec:dfab:abef:fbac:251.251.255.0]"},
{"//[cecd::decb:cfaf:bade:efbf:efaf:1adf]"},
{"//[::dafa:dafe:bebd:facc:cfed:254.8.253.250%25_]"},
{"//[vd.v]"},
{"D://[::aedf:dbca:eabb:250.211.251.254%25-]"},
{"//[::aaad:bcad:9.254.251.254%25~]"},
{"//[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~]"},
{"//[::252.13.253.250]"},
{"l://[ccde::bcfc:dfbd:dfff:dfea:255.235.254.251%25.]"},
{"i://[::dcac:beba:afcd:250.252.254.221%25~]"},
{"//[::ffea:253.252.255.165]"},
{"//[::eada:aeec:eeab:251.252.255.57]"},
{"s://[::bdcb:1ecd]"},
{"//[::fccf:feec:adfa:218.251.253.251]"},
{"n://%ca"},
{"//[::fbfd:bdbc:254.253.125.252]"},
{"///1"},
{"//[::254.249.255.255%25_]"},
{"L://[1bcb::bdaa:251.251.254.251%25-]"},
{"//[::beac:eeac:affb:ebee:cfbb:3bce:abaa%25~]"},
{"//[::251.121.255.255]"},
{"v://[::afca:dfed:fdcd:253.252.254.130]"},
{"//[::171.250.253.255]"},
{"G://[::aaba:fafc:eedd:cdfb:dbcf:6bee:aebf%25_]"},
{"f://[::bdbd:dcbe:fbef:253.252.255.215%25-]"},
{"k://:/%c2"},
{"Z://[::babb:fcad:0fac:cdba]"},
{"l://[::dbef:ceca:cfdd:aefe:7bff%25~]"},
{"B://[::dada:aebf:eede:beec:eedc:255.146.253.253]"},
{"//[::daaf:dcef:bcaf:254.255.255.147]"},
{"//5.251.250.251"},
{"r://%f7"},
{"v://[adbe::dfcc:fafa:cfda:edab:254.2.251.250]"},
{"//[::acbe:26.251.251.250%25~]"},
{"P://[::0fff:cced%25~]"},
{"//[bcad:fcbd:aefd:ffff:aceb:dcdb:253.252.250.214%25-]"},
{"///_"},
{"///j"},
{"D://[::ccff:5bcf:cbab]"},
{"b://[::8ecf%25~]"},
{"N://[::%25%ee]"},
{"//[::dbba:ebea:7eac:dcbc]"},
{"k://[cfef::eebb:caef:abae:eacd:255.159.252.255]"},
{"//[::cfcc:5ced%25.]"},
{"//[::beca:ceca:dafa:adcb:ecda:250.253.250.0%25_]"},
{"m://[beaf:cbee:feca:adab:bcdf:acaf:254.254.5.255]"},
{"//[dbcb::bcae:cbcf:cddc:dcac:251.242.251.252%25~]"},
{"//[::ebbb:cced:cfcc:254.20.250.251]"},
{"//210.250.253.250"},
{"//[::252.254.17.253]"},
{"//[::edfe:250.251.255.253]"},
{"//[ebcf::fcec:dafa:ebaa:dffa:250.251.252.234]"},
{"//[bfae:dfba:feee:fcfe:debd:fcbc:254.250.3.254%25-]"},
{"//[::ecfc:fbaf:dcaa:236.255.254.250%25_]"},
{"u://[::efec:eabb:fabc:fcaf:afeb:253.252.204.253]"},
{"//[::fbed:6.250.250.252%25.]"},
{"r://[::afce:cdda:251.252.254.200]"},
{"//254.253.35.250"},
{"//[aedb::dbdf:babb:bfed:caba:8.255.251.253%25.]"},
{"//[::fecb:eaee:254.207.251.250%25_]"},
{"//[::abed:dbac:bdda:250.252.86.251]"},
{"C:///C"},
{"//[7ebf:babc::adbc:ccbe:eeba:253.254.255.252%25.]"},
{"//[::cdcf:cabb:250.207.253.252]"},
{"F://[::8acd:efce:eacc:253.250.253.255%25_]"},
{"//[::decc:acaa:efdd:255.252.73.250%25_]"},
{"//[::acde:cefa:dbaf:252.251.251.6%25.]"},
{"//[::dcdd:fcbe:bfac:cdff:0fee]"},
{"//%bd"}};
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