
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
static URLParseCase parse_cases[]={{"t://?+"},
{"//[::efcd:edba:dcde:250.244.251.251]"},
{"V://[5def::fede:ceee:ecaa:dbae:251.254.252.255%25~]"},
{"h://?%d6"},
{"F1://"},
{"//[::250.254.2.251%25~]"},
{"//[::255.10.252.253%25.]"},
{"//[::bffb:bfbd:ceda:255.253.255.7%25_]"},
{"n://[::18.250.250.253]"},
{"b://[::acdf:cdfa:aedd:ddbc:ecaf:253.32.255.254%25~]"},
{"//[::ddab:aece:abad:5dda%25-]"},
{"//[::cdbb:ddda:251.252.95.250]"},
{"//[ccad::ceba:adde:aaba:feac:1.251.252.254]"},
{"//?%0c"},
{"C://[ecef:ffce:fada:bbce:fedd:ecaf:250.239.254.250]"},
{"w://#W"},
{"D://[::cbcc:236.255.254.253]"},
{"o://[::aabf:fbef:cbea:bcae:affc:5.250.253.250]"},
{"M://[2dcb:dcea::beeb:ebad:251.251.254.252]"},
{"//[::deaf:abcb:fffd:6.254.251.250]"},
{"Y://[::253.252.36.250]"},
{"R://[::ebed:cdde:250.31.254.251%25~]"},
{"Y://:/z"},
{"X://[ceae::cbbe:aeca:eacc:fdff:252.253.253.201%25_]"},
{"//[::9ceb:252.252.252.255%25~]"},
{"p://[::aeeb:caae:252.255.16.251]"},
{"p://[4cfa::dfaa:abcc:faaa:efcb:255.251.252.255]"},
{"S://[::253.252.250.186]"},
{"//?%fb"},
{"Q://[::250.251.52.254%25-]"},
{"//[::eabb:cbeb:dcbc:250.251.253.7]"},
{"J://#I"},
{"///@/9"},
{"F://[::efca:adcf:227.251.252.254%25-]"},
{"D://[debc::eebc:dadd:defe:adec:255.252.128.250%25~]"},
{"//%2f"},
{"g://[::ebcd:deed:251.252.255.252%25~]"},
{"//[::dbdb:abbf:addc:baaa:eecc:142.250.254.251]"},
{"O://[::9abc:dfbe%25~]"},
{"r:///i"},
{"//[::dace:dfbd:8.251.252.250]"},
{"A://[bfaf::ffdd:daaa:bcaf:eccf:253.132.253.254%25.]"},
{"//[::fccd:ccac:adeb:daac:ccfd:205.255.254.252]"},
{"x://[::abed:affd:abba:250.251.216.253%25_]"},
{"//251.253.134.255"},
{"u://5.250.252.251"},
{"//251.252.250.92"},
{"O://[deff:deba::edaa:eefe:decc:255.252.254.252]"},
{"V://[ffbb::bbad:fdbf:eccb:daaa:253.255.9.252]"},
{"//250.28.250.254"},
{"r://[ffdf:fbfa:eaca:facf:dace:fdfa:250.202.255.251%25-]"},
{"H://%8a"},
{"K://[::aabf:fade:bbee:ceae:bded:140.251.255.254]"},
{"//[vc.(]"},
{"//[faea::fcbc:affd:fcab:ddbe:253.252.254.37%25_]"},
{"P://[::175.255.252.251%25~]"},
{"p://[abeb::abde:fcdb:eebd:cecb:255.253.8.250%25~]"},
{"p://[::255.250.7.253]"},
{"//[::caab:cbfa:cebf:6dec:ccad]"},
{"//%e4"},
{"//x"},
{"b://[caca::fdec:abfb:faed:dfee:252.250.11.251%25-]"},
{"//[vb.d]"},
{"i://[::cede:cceb:efdb:255.6.250.251]"},
{"//[::dbcf:18.254.255.255%25-]"},
{"n://73.250.252.255"},
{"//253.211.255.253"},
{"//[8cca:cbdb::cdcc:251.251.252.253%25-]"},
{"//[fbae:abfa:abcf:ecef:fcfe:aabf:5.255.254.251%25_]"},
{"//[::%25r]"},
{"//[::adaf:caee:ccda:253.254.196.253]"},
{"//[::acff:255.194.253.252%25-]"},
{"//@/X"},
{"//:1"},
{"O://C"},
{"//[::becd:bbee:253.253.252.232%25-]"},
{"b://[::251.255.255.220]"},
{"E://[::0cee:253.252.254.255]"},
{"//[::feec:dbbd:afbc:ceae:acbf:253.255.255.229%25_]"},
{"g://[ebdc::eeee]"},
{"A://[::feee:dfec:cfae:255.1.254.253%25.]"},
{"N://[::ffdf:edae:cadf:229.255.252.253]"},
{"N://[::cbec:250.253.250.58%25_]"},
{"C://250.253.255.238"},
{"n://254.113.251.255"},
{"Z://[cfde:cddf:bcad:bccc:cfcd:abea:253.3.253.250%25~]"},
{"//[afbb:acda:bdbd:edea:ccbe:fbbd:252.255.253.32]"},
{"x://[::feba:dbaa:251.255.253.154]"},
{"//-@"},
{"//[::cedd:decc:bebf:cdfb:abac:251.253.110.253%25_]"},
{"B:///%5a"},
{"//[::ddcc:ccdc:252.251.250.65]"},
{"//253.251.251.227"},
{"//[::cdcc:225.253.252.253%25-]"},
{"x://[edca::effe:fadd:ccde:aaeb:251.81.254.255%25~]"},
{"w://[::eebb:bbca:cbad:aaeb:fbfb:252.254.7.252]"},
{"w://[::abff:fcfc:fdbd:fddc:efde:252.252.252.38]"},
{"Z://[::edaf:251.254.251.15%25-]"},
{"n://P"},
{"G://8"},
{"//[3aef:cecd::cbcd:255.250.250.252%25_]"},
{"//[::bfab:253.59.250.254]"},
{"//[::252.254.255.16%25~]"},
{"q://[::254.255.122.251]"},
{"///Z"},
{"///%c9"},
{"j://[::bdca:bcdd:251.223.251.254]"},
{"//250.215.255.251"},
{"Z://[::adbd:254.254.252.2%25~]"},
{"G://S"},
{"o://[fdcc::cdde:abcf:dcdb:dbaf:250.81.253.252%25.]"},
{"//[bebd::ebeb:abde:bceb:edcc:252.251.106.255%25~]"},
{"k://[::abaa:cced:251.253.251.15]"},
{"//[afee:fdab:dffd:ceca:bbfc:beef:250.250.241.255%25_]"},
{"//[ffaf::adbd:dddd:cdba:ddef:cbba:0cae]"},
{"//[0dfa:dfdd:bdbc:ffdc:eedd:ecaf:251.253.254.252]"},
{"l://[::aaac:cffd:defb:bafd:ccbf:9.252.251.253%25~]"},
{"//[1beb::cbcd:cdfd:efcb:efda:254.251.253.255]"},
{"a://[::bbfc:aecd:253.63.253.255%25.]"},
{"//[::9dfd:250.254.251.254]"},
{"//[dbaf:adef:befe:efac:bebd:dcab:253.227.250.254%25.]"},
{"Z://[::dafa:badf:affe:bdfa:fdaf:252.250.255.221%25.]"},
{"//[::fddf:fcdc:fadc:bffe:fefb%25.]"},
{"//[::1ecd:dddd:254.250.251.254%25-]"},
{"w://253.254.98.250"},
{"N://1"},
{"v://8.254.255.252"},
{"p://[::afde:afea:adbf:250.255.0.254]"},
{"//[::3ffe:effd]"},
{"J://[::dafc:eace:3.250.254.251%25~]"},
{"//[eaee:ecbc:ebad:eadf:ecee:eecd:152.250.252.250]"},
{"K://[::aada:daef:fbee:fdaf:cfcb:252.20.250.252%25_]"},
{"S://[::ecfd:cfdc:cdcf:becc:cadd:255.253.6.253]"},
{"//@/@"},
{"z://[::ebff:eddc:26.252.254.252%25.]"},
{"//[4cae::cdbb:fafa:bdaa:253.252.252.252%25-]"},
{"//[::bbfd:fbfc:caef:42.255.252.254%25.]"},
{"//[9cec:afed:ffeb:adba:ebaa:efac:250.255.251.251%25-]"},
{"//?%7a"},
{"h://[::15.255.250.250]"},
{"B://[::bcbf:aadb:ebdc:177.253.253.250]"},
{"X://[::ffcc:baba:caaa:fefd:dfbe:255.41.255.254]"},
{"//[::fecd:adfd:debe:dccc:badc:255.83.251.254%25~]"},
{"Y://[::%25q]"},
{"p://?3"},
{"y://[::afcb:250.255.235.253]"},
{"//[ddec::bbae:cfbf:bfae:bfac:252.255.251.254%25-]"},
{"//[6fdd::afbe:252.254.251.252%25~]"},
{"t://[acdb::cbea:eeaf:bccf:bdff:219.251.251.255]"},
{"T://[faac:effb::251.255.253.252%25-]"},
{"Q://[eeea::cafd:abde:cbff:bfbf:254.253.250.34]"},
{"o://[efeb:dade:bcff:ecff:badf:edca:250.253.254.7]"},
{"//[::edae:255.240.250.254]"},
{"//[::255.252.251.223%25.]"},
{"//[::febe:254.251.254.184%25.]"},
{"//:5"},
{"//[::ddcf:197.254.252.255]"},
{"//[::aada:255.255.255.214%25_]"},
{"c://[::acac:ddbd:aeee:255.252.251.30%25.]"},
{"p://[::250.254.252.2]"},
{"//252.250.175.250"},
{"I://[::cecf:fcec:9.252.252.254]"},
{"//[ffeb::ddfb:253.250.252.255%25.]"},
{"//9@"},
{"d://[abdd::aaec:eaac:faad:bdca:250.5.251.253%25.]"},
{"h://[::%25V]"},
{"B://[va.+]"},
{"//[::aeba:dfec:afaa:250.239.251.252]"},
{"F://[::%258]"},
{"//[::aeee:35.250.250.253%25.]"},
{"//#l"},
{"w://[adbb:fcaa::eefd:dded:bfda:254.253.253.250%25_]"},
{"//[::cebf:acee:dacc:251.252.254.217%25-]"},
{"///;"},
{"U://[0eff:abdd::dbda]"},
{"//[acdb::dceb:ecfe:cbea:fcdb:4.252.252.253]"},
{"L:///%be"},
{"//[::eccf:bcfc:85.251.253.254%25.]"},
{"//@/%0a"},
{"//[::bfac:1ddd%25~]"},
{"//[::253.255.140.250%25-]"},
{"//[cbfe:ffeb:ceff:cccb:adee:aaba:beac:6edd%25_]"},
{"//[cfbf:abdd:becb:eaef:ebdc:debd:2bac:cabe]"},
{"l://[::cdde:bfbe:cadd:209.254.254.250]"},
{"T://[::7afb:acec%25_]"},
{"t://-"},
{"M://D"},
{"g://[::bacb:deab:253.250.5.251%25_]"},
{"//[::faeb:fdea:eecc:eccb:ebdc:251.243.254.254%25_]"},
{"g://[aeea:acca:ccfa:eefb:feda:feea:252.255.252.218]"},
{"//[::adec:123.254.253.253]"},
{"B://[::255.254.6.250%25_]"},
{"//[::cfbf:bfbe:efda:255.6.254.255]"},
{"//[daef::bbbf:afda:bccb:dbfa:67.253.250.253%25~]"},
{"H://[8ffa:deac::ffeb:254.253.250.253%25_]"},
{"M://[::cdef:ebcd:253.250.252.209%25.]"},
{"h:///@/:"},
{"//y"},
{"f://[fdfc::cecf:fefe:dade:caca:255.252.127.252]"},
{"//[afba::baec:ceea:caec:dafd:252.251.250.1%25_]"},
{"//[::cdcd:250.253.252.208%25~]"},
{"d://[::255.255.253.208]"},
{"//[ecdf:fbec:dabd:cbbd:dbbe:ebcf:255.8.250.251%25_]"},
{"//[6bde:bfaf::ceeb:bfdc:254.251.250.253]"},
{"//[::abdd:bbfa:cdda:251.75.254.255]"},
{"//2"},
{"I://[5edb:efcf::251.254.254.255%25-]"},
{"//[::ccac:eebc:bbba:1.253.254.251]"},
{"g://[::cedb:facc:8deb]"},
{"c://[::255.253.252.3%25-]"},
{"//[::baba:255.255.253.7%25.]"},
{"U://[edeb::acbc:fdbd:eeae:ddcb:decf:3ffc%25_]"},
{"//[::255.2.252.252%25~]"},
{"//3@"},
{"a://%6b"},
{"Z://[::dfbe:ffbb:254.253.105.254%25.]"},
{"g://[aedb::fafd:cbcd:cccb:bcca:239.250.254.254%25~]"},
{"S://[::befa:cbaf:255.253.1.253]"},
{"//[::254.47.252.255]"},
{"p:///@/x"},
{"//[4aff::bceb:adaa:ddaf:250.255.251.252]"},
{"///:/o"},
{"//%0f"},
{"q://[::accb:250.254.250.213%25_]"},
{"Bn://"},
{"//[ccdc::afdd:cfeb:deff:faae:252.253.36.250]"},
{"//#m"},
{"W://[5dbe:edcb::aefa%25~]"},
{"//[::effc:dbbf:edcc:254.251.211.250%25_]"},
{"M://[ebdf::dcce:adcf:abdf:ecda:204.252.251.254]"},
{"H://[::baec:debf:eaaf:251.43.254.252]"},
{"r://%8e@"},
{"F://[::eacf:255.251.250.239%25_]"},
{"o://[::becd:decc:23.254.253.255%25~]"},
{"//[::3cfe:fadb:254.254.254.252%25.]"},
{"//[aead::edab:dfec:deeb:baca:251.253.166.255]"},
{"//254.255.250.84"},
{"//[::254.250.192.251%25_]"},
{"//[vd.a]"},
{"//[::ccbc:ebdf:beee:fcfe:dedd:251.60.251.251%25~]"},
{"Q://[::cfea:4ebb:ceed]"},
{"p://[ffda:adee::]"},
{"//[::ceff:cddb:ecac:252.7.253.251%25_]"},
{"//[fdce::becb:ddca:abcc:cede:227.250.251.251]"},
{"X://[ecbf:adfe:ddbf:feca:aded:bada:253.255.1.250]"},
{"j://%ae"},
{"l://[::cfab:acab:250.251.175.253]"},
{"J://[::8fae:ffbe%25-]"},
{"//[::aacc:255.251.84.254%25.]"},
{"r://[fbbc:accf:ecdc:cddd:afce:facf:254.41.255.254%25_]"},
{"//[ffaa:ddab:dddf:cfea:adbe:babd:254.253.91.254%25~]"},
{"s://[adcf::dafa:dbcb:babb:addc:255.252.254.0%25_]"},
{"//[::cceb:bfae:efbc:dcfb:efff:252.255.255.103%25-]"},
{"//[3bca:cffe::252.254.255.251]"},
{"//&@"},
{"k://[bdca::6fda:acba:bebc:dced:255.255.252.251%25_]"},
{"//[::225.250.250.253%25-]"},
{"E://[eebc:ceac:aabc:fbec:eafd:bffd:165.250.254.250%25-]"},
{"//[::bbdb:2faf%25.]"},
{"K://[::bfbe:fcba:253.7.252.255%25~]"},
{"D://254.254.36.253"},
{"//[::cddf:250.250.250.1]"},
{"R://[::252.253.171.255]"},
{"//254.252.255.142"},
{"//[dfec::0bac:bccf:fabb:dfdb:251.251.251.255%25-]"},
{"V://[fbec:bfcf:bfbd:bfdd:cade:fcae:255.251.250.19]"},
{"//[::eddf:aecf:cbff:0aeb%25.]"},
{"E://[cabb:efae:faed:baae:faee:bebf:236.255.250.255]"},
{"//[afad::dadd:dada:cfeb:ebbc:251.253.202.253]"},
{"u://[::debe:eadb:ecad:aeaf:efdc:beba:7fbd]"},
{"//[::bcbf:fdfa:cbec:254.250.253.253%25.]"},
{"//[bcff:affa::eaff:254.250.252.253%25-]"},
{"//[5acf::cebb:253.253.253.253%25~]"},
{"//[::addb:afde:ffdd:254.250.201.255]"},
{"m://[::efcc:abdb:255.252.251.246%25_]"},
{"//[::4aff:bcff]"},
{"//[dfdf::bade:fedd:faad:bcef:250.250.253.75%25~]"},
{"V:///8"},
{"Z://[::254.3.254.250]"},
{"//[bbcb:afac:fffa:bbfc:dacf:ccde:212.252.252.254]"},
{"r:///-"},
{"//[::255.251.82.253%25.]"},
{"//[cefa:cedc:bfba:ceef:cdff:dfba:252.225.252.252%25~]"},
{"//[adef::beba:bfba:cdbe:cedb:253.254.157.250%25_]"},
{"a://?%2e"},
{"V://[cbcf::afce:bfef:aaba:cbcf:16.250.255.255]"},
{"//[::2cee]"},
{"u://[::fbaa:ccfb:191.250.254.254%25~]"},
{"q://[::cbaa:cddc:bebf:254.255.93.251%25.]"},
{"F://[::eddc:afee:cadc:aaba:aaea:afaa:6bbc%25~]"},
{"//[::ceeb:fbad:fedb:250.254.8.252]"},
{"w://[acdb:addf:cdac:bbfe:bfdd:acae:254.255.250.3%25.]"},
{"M://[::fdcd:badd:ffee:bfef:aedc:251.254.118.251%25-]"},
{"//253.254.68.254"},
{"D:///~"},
{"s://[daef::abce:dabd:fadc:abaa:252.253.250.1%25.]"},
{"//[::affb:aaec:aeda:cbce:eacc:250.42.253.250]"},
{"//[ecce::ffdd:fcca:ebad:cebb:cdde:0aeb%25-]"},
{"///u"},
{"//[bcbd::ffbf:ffaa:cdaa:baec:238.250.253.253]"},
{"//[::feaf:255.0.250.252%25_]"},
{"U://[::bbee:bebe:253.252.253.142]"},
{"//[::aece:bfbe:fcdc:dded:cefb:254.254.251.43]"},
{"///:/5"},
{"x://[::251.250.254.202]"},
{"A://[::bfaa:eaec:acff:250.250.253.22%25-]"},
{"//[deae:befb:ccbe:dade:eedd:befc:253.255.1.253]"},
{"J:///@/)"},
{"///%e9"},
{"//[::abaa:eabc:252.156.253.252%25.]"},
{"J://[::efea:afca:dcbe:fecf:ccfe:43.250.251.252]"},
{"//[::dfcf:cadb:fcda:bfbc:cabd:253.251.172.253%25_]"},
{"X://[0cae:befd::adab]"},
{"//[3eab::efda]"},
{"//[0ecb:febe:baeb:cfbf:dccd:fcbb:254.255.254.250%25~]"},
{"//[::bbae:250.254.8.253]"},
{"//[::ffea:dbaf:beab:feed:dacd:224.252.255.250%25.]"},
{"//[ecef::acee:250.250.253.250]"},
{"//[1ddf::fdfe:aeaf:254.250.252.253%25-]"},
{"Z://[cedb::beef:acce:bafa:cadf:97.250.254.251%25.]"},
{"S://[afaf:bbde:bdaa:bbdd:bddb:cfea:253.251.253.201%25-]"},
{"C://[::bafd:fcbd:ebec:eecf:deef:253.252.252.97]"},
{"//[::%25l]"},
{"g://[::%253]"},
{"K://[afef:dbff:ddae:fcdf:dafd:facd:250.255.253.198]"},
{"k://[::cfed:cebc:afad:cbbe:afdc:252.250.225.250]"},
{"//[adac:dfba:cefb:dddd:edae:fcdc:8ddd:cced]"},
{"N:///%f0"},
{"//[::baee:254.253.255.230%25-]"},
{"//[::faab:cebf:bdcd:254.254.243.251%25_]"},
{"a://[::fddf:251.253.46.255%25-]"},
{"Q://[::254.254.239.251%25-]"},
{"//[::cfca:aebb:0ebd:ebcd]"},
{"w://[efdb:fdff:dada:fcca:bccd:bfde:253.255.251.219]"},
{"U://%e7"},
{"//%3e"},
{"l://[::0dcc]"},
{"D://[::caae:daaf:254.253.252.69%25-]"},
{"//[::abcd:aaad:aeff:feac:3dbb]"},
{"M://[2dbf::fcee:eabb:253.250.253.253%25-]"},
{"//[::cfac:ebaa:babc:234.252.251.251%25~]"},
{"//[::%25%f8]"},
{"//[::aaab:edcf:bcfa:138.252.255.252]"},
{"e://[fbcc::edeb:cbad:bfbc:cddc:251.255.50.254]"},
{"I://[::aafb:acab:ecfe:bcbc:becb:250.254.253.220]"},
{"//[3cdd::255.250.253.252%25~]"},
{"g://[::24.250.250.250]"},
{"o://[dfee::6bac:becd:beec:bdaa:254.251.252.251%25_]"},
{"//@/%cd"},
{"k://[::dedf:aeec:ecfe:cfcc:eeaf:254.251.78.252%25.]"},
{"U://[::251.252.251.163%25.]"},
{"E://[::bbea:254.250.255.20]"},
{"//[cfde::dbbc:beec:ffec:beda:252.251.0.254]"},
{"//[::cacf:4.254.254.253]"},
{"J://[::dfae:fcfd:dbca:3.250.252.251]"},
{"//252.255.252.206"},
{"//[::ebdd:254.254.40.250%25-]"},
{"//[::7ddd%25.]"},
{"//v"},
{"//0"},
{"H://[::feae:afec:dcee:adfb:abfc:251.217.250.254]"},
{"y://[6eea::aaff:cfca:dbde:dedf:253.254.250.252]"},
{"y://:/)"},
{"//[::cfff:abcc:aaae:255.0.253.251]"},
{"//[fbcf::cefc:efaf:cdce:cdff:253.251.251.213%25_]"},
{"d://[dddb:aebd:efeb:ccba:fcad:cbee:255.250.252.139%25_]"},
{"//[faeb:acbf:ddbe:befa:fdac:fffd:251.53.254.254]"},
{"H://[9bdb:acec::abcc:bbbf:253.254.254.253%25-]"},
{"r://[::aaff:dfdc:bcac:250.250.49.250]"},
{"J://[fdeb:eaec:dffe:bbec:bcba:abad:253.254.253.5]"},
{"//[7aff:ecde:babf:edda:aade:cedb:254.252.250.252%25_]"},
{"//[ddcd::bbfb:cafc:caee:fecf:255.254.9.250%25.]"},
{"//[cebc:beaa:fbaf:bada:dabe:ccdc:5.252.253.251%25.]"},
{"J://[::203.251.254.251%25.]"},
{"h://[ebfb:adac:dffc:eaba:fbbc:adaf:255.251.21.252%25_]"},
{"d://[::%256]"},
{"//[bfad:deaa:bbba:afec:baef:fcdd:250.253.253.17%25.]"},
{"//[dabe:eabe:dcbf:bada:daef:cded:0.254.255.251%25_]"},
{"//[abaf::adbd:cdbc:bdac:facf:250.227.255.253]"},
{"v://[::fbca:3fbe%25_]"},
{"//[fbab:aaba:dafe:affd:eebf:bcfd:98.255.252.250%25~]"},
{"//[::fdbf:255.255.250.205%25_]"},
{"//[fcba:afee:ceeb:adcb:bbeb:afdc:0bdf:cdad]"},
{"t://[::fecd:acee:0aff%25-]"},
{"P://[::abde:164.251.252.254%25~]"},
{"g://[::9.252.255.251]"},
{"y://[8cdf::aabc:253.254.251.251]"},
{"v://[febd:eadd:affc:dbcb:afdb:ebbe:fdad:ffdd%25-]"},
{"v://[2aaa::]"},
{"y://[::addb:fada:3.255.253.251%25-]"}};
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