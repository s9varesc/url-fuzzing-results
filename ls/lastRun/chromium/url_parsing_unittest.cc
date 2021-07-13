
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
  const char* baseurl;
  const char* input;

  const char* scheme;
  const char* username;
  const char* password;
  const char* host;
  int port;
  const char* path;
  const char* query;
  const char* ref;
};

void CheckValidity(const URLParseCase& parse_case, const GURL& parsed_url) {
  if(strcmp(parse_case.baseurl, "") != 0){
    ASSERT_TRUE(parsed_url.is_valid()) << "{\"url\":\""<< parse_case.baseurl << "<" << parse_case.input<<"\", \"exception\":\"invalid URL\"}"; //if base is present, add base to output
  }
  else{
    ASSERT_TRUE(parsed_url.is_valid()) << "{\"url\":\""<< parse_case.input<<"\", \"exception\":\"invalid URL\"}"; 
  
  }
  return;
}

void CheckComponents(const URLParseCase& parse_case, const GURL& parsed_url) { 
  char url[1000]; //TODO make size dependent on content
  if(strcmp(parse_case.baseurl, "") != 0){
    strcpy(url, parse_case.baseurl);
    strcat(url, "<");
    strcat(url, parse_case.input);
  }
  else{
    strcpy(url, parse_case.input);
  }
  ASSERT_EQ(parse_case.scheme, parsed_url.scheme()) << "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"scheme\", \"expected\":\""<<parse_case.scheme <<"\", \"actual\":\""<<parsed_url.scheme()<<"\"}}";
    ASSERT_EQ(parse_case.username, parsed_url.username())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"username\", \"expected\":\""<<parse_case.username <<"\", \"actual\":\""<<parsed_url.username()<<"\"}}";
    ASSERT_EQ(parse_case.password, parsed_url.password())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"password\", \"expected\":\""<<parse_case.password <<"\", \"actual\":\""<<parsed_url.password()<<"\"}}";
    ASSERT_EQ(parse_case.host, parsed_url.host())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"host\", \"expected\":\""<<parse_case.host <<"\", \"actual\":\""<<parsed_url.host()<<"\"}}";
    ASSERT_EQ(parse_case.port, parsed_url.IntPort())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"port\", \"expected\":\""<<parse_case.port <<"\", \"actual\":\""<<parsed_url.IntPort()<<"\"}}";
    ASSERT_EQ(parse_case.path, parsed_url.path())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"path\", \"expected\":\""<<parse_case.path <<"\", \"actual\":\""<<parsed_url.path()<<"\"}}";
    ASSERT_EQ(parse_case.query, parsed_url.query())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"query\", \"expected\":\""<<parse_case.query <<"\", \"actual\":\""<<parsed_url.query()<<"\"}}";
    ASSERT_EQ(parse_case.ref, parsed_url.ref())<< "{\"url\":\""<< url <<"\", \"error\":{\"component\":\"ref\", \"expected\":\""<<parse_case.ref <<"\", \"actual\":\""<<parsed_url.ref()<<"\"}}";
  return;
}

//Test inputs
static URLParseCase parse_cases[]={{"file://,=" ,"/" ,"file" ,"" ,"" ,",=" ,-1 ,"/" ,"" ,""},
{"F:/" ,"//~!" ,"f" ,"" ,"" ,"~!" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/.%2e///////%7b" ,"file" ,"" ,"" ,"" ,-1 ,"///////%7b" ,"" ,""},
{"ftp://[::]" ,"//[eeff:aeca:adad:fbce:adca:faec:246.250.253.252]" ,"ftp" ,"" ,"" ,"[eeff:aeca:adad:fbce:adca:faec:f6fa:fdfc]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///^" ,"file" ,"" ,"" ,"" ,-1 ,"/^" ,"" ,""},
{"ftp://[::]" ,"//'S" ,"ftp" ,"" ,"" ,"'s" ,-1 ,"/" ,"" ,""},
{"" ,"V://[::afab:bc8d:bbdc]" ,"v" ,"" ,"" ,"[::afab:bc8d:bbdc]" ,-1 ,"/" ,"" ,""},
{"N:/" ,"//*&" ,"n" ,"" ,"" ,"*&" ,-1 ,"/" ,"" ,""},
{"j:/" ,"//[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251]" ,"j" ,"" ,"" ,"[efbb:efbc:eaff:cbaa:aebf:cada:fe43:fffb]" ,-1 ,"/" ,"" ,""},
{"s:/a:/" ,"/" ,"s" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"ftp://[::]/%3c" ,"/" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/#Ｓ" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%EF%BC%B3"},
{"" ,"http://252.254.3.255" ,"http" ,"" ,"" ,"252.254.3.255" ,-1 ,"/" ,"" ,""},
{"G:/" ,"//[::abce:eabd:252.6.250.252]" ,"g" ,"" ,"" ,"[::abce:eabd:fc06:fafc]" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[::]/%2e//" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"//" ,"" ,""},
{"http://[::]" ,"@𸻾" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/@%F0%B8%BB%BE" ,"" ,""},
{"" ,"d:/%3f%22" ,"d" ,"" ,"" ,"" ,-1 ,"/%3f%22" ,"" ,""},
{"" ,"file://[feba:dabc:fccb:dedc:cdca:bbcf:ceba:ecdb]" ,"file" ,"" ,"" ,"[feba:dabc:fccb:dedc:cdca:bbcf:ceba:ecdb]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::dbed:aebe:fdfe:ea7b]" ,"file" ,"" ,"" ,"[::dbed:aebe:fdfe:ea7b]" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::253.254.254.48]" ,"https" ,"" ,"" ,"[::fdfe:fe30]" ,-1 ,"/" ,"" ,""},
{"ws://[::]/,%" ,"/" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///%7b￧" ,"file" ,"" ,"" ,"" ,-1 ,"/%7b%EF%BF%A7" ,"" ,""},
{"q:/" ,"//[::fcaa:fddb:255.251.250.52]" ,"q" ,"" ,"" ,"[::fcaa:fddb:fffb:fa34]" ,-1 ,"/" ,"" ,""},
{"http://[::afdb:afda:dbeb:eebc]" ,"/" ,"http" ,"" ,"" ,"[::afdb:afda:dbeb:eebc]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://250.104.255.254" ,"wss" ,"" ,"" ,"250.104.255.254" ,-1 ,"/" ,"" ,""},
{"J:/" ,"//;" ,"j" ,"" ,"" ,";" ,-1 ,"/" ,"" ,""},
{"U:/" ,"//[::dbae:acfd:251.254.8.252]" ,"u" ,"" ,"" ,"[::dbae:acfd:fbfe:8fc]" ,-1 ,"/" ,"" ,""},
{"file://[::]/酜" ,"/" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::]:18837" ,"https" ,"" ,"" ,"[::]" ,18837 ,"/" ,"" ,""},
{"" ,"file://[::]/./%2e%2e" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"A:/" ,"//[::aafe:d3dc:bddf]" ,"a" ,"" ,"" ,"[::aafe:d3dc:bddf]" ,-1 ,"/" ,"" ,""},
{"wss://[::7cbc:253.250.252.255]" ,"/" ,"wss" ,"" ,"" ,"[::7cbc:fdfa:fcff]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///鍕" ,"file" ,"" ,"" ,"" ,-1 ,"/%E9%8D%95" ,"" ,""},
{"" ,"file://[::eeaa:acfe:eada:d7bc]" ,"file" ,"" ,"" ,"[::eeaa:acfe:eada:d7bc]" ,-1 ,"/" ,"" ,""},
{"" ,"R://[dfaa::]" ,"r" ,"" ,"" ,"[dfaa::]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//[::daaf:cfca:255.22.254.252]" ,"ws" ,"" ,"" ,"[::daaf:cfca:ff16:fefc]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"﹐" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%EF%B9%90" ,"" ,""},
{"http://[::]" ,"//[::93.254.253.255]" ,"http" ,"" ,"" ,"[::5dfe:fdff]" ,-1 ,"/" ,"" ,""},
{"X://M" ,"/" ,"x" ,"" ,"" ,"m" ,-1 ,"/" ,"" ,""},
{"ws://[::]/;횘" ,"/" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::]/./%2e%2e" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"file:///#󥓈" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"h:/񻿼" ,"h" ,"" ,"" ,"" ,-1 ,"/%F1%BB%BF%BC" ,"" ,""},
{"file:///" ,"//[eaf9:ebab:ccbd:abea:ebca:fcbf:250.255.255.250]" ,"file" ,"" ,"" ,"[eaf9:ebab:ccbd:abea:ebca:fcbf:faff:fffa]" ,-1 ,"/" ,"" ,""},
{"" ,"n://[::255.250.241.250]" ,"n" ,"" ,"" ,"[::fffa:f1fa]" ,-1 ,"/" ,"" ,""},
{"file://[::bdbc:223.254.255.254]" ,"/" ,"file" ,"" ,"" ,"[::bdbc:dffe:fffe]" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"/B:/" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/B:/" ,"" ,""},
{"T:/" ,"//%2e" ,"t" ,"" ,"" ,"%2e" ,-1 ,"/" ,"" ,""},
{"s:/" ,"/?=" ,"s" ,"" ,"" ,"" ,-1 ,"/" ,"=" ,""},
{"" ,"file://[::fede:dcaf:251.251.9.254]" ,"file" ,"" ,"" ,"[::fede:dcaf:fbfb:9fe]" ,-1 ,"/" ,"" ,""},
{"http://[::]?ퟻ" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"x:/" ,"//C" ,"x" ,"" ,"" ,"c" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//[::ffff:bafd:cafd:db8f]" ,"ftp" ,"" ,"" ,"[::ffff:bafd:cafd:db8f]" ,-1 ,"/" ,"" ,""},
{"" ,"E:/N:/" ,"e" ,"" ,"" ,"" ,-1 ,"/N:/" ,"" ,""},
{"" ,"file://[::]/," ,"file" ,"" ,"" ,"[::]" ,-1 ,"/," ,"" ,""},
{"file:///" ,"//Z" ,"file" ,"" ,"" ,"z" ,-1 ,"/" ,"" ,""},
{"" ,"file://[ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5]" ,"file" ,"" ,"" ,"[ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5]" ,-1 ,"/" ,"" ,""},
{"t:/" ,"//T" ,"t" ,"" ,"" ,"t" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::]/ﺑ" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%EF%BA%91" ,"" ,""},
{"wss://[::]" ,"//254.255.177.255" ,"wss" ,"" ,"" ,"254.255.177.255" ,-1 ,"/" ,"" ,""},
{"" ,"d://[fdbe:ccab::acdf:daef:253.251.251.255]" ,"d" ,"" ,"" ,"[fdbe:ccab::acdf:daef:fdfb:fbff]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/%2e//*" ,"file" ,"" ,"" ,"" ,-1 ,"//*" ,"" ,""},
{"L:/" ,"///.//" ,"l" ,"" ,"" ,"" ,-1 ,"//%EE%8B%A5" ,"" ,""},
{"b:/" ,"///)" ,"b" ,"" ,"" ,"" ,-1 ,"/)" ,"" ,""},
{"" ,"file://[bed7:fdba::bcca:abee:254.250.250.250]" ,"file" ,"" ,"" ,"[bed7:fdba::bcca:abee:fefa:fafa]" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"/𰵮" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/%F0%B0%B5%AE" ,"" ,""},
{"N:/" ,"/&￠" ,"n" ,"" ,"" ,"" ,-1 ,"/&%EF%BF%A0" ,"" ,""},
{"file:///" ,"//{y" ,"file" ,"" ,"" ,"{y" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/#" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%EF%8E%BF"},
{"" ,"file:///#&" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"&"},
{"" ,"http://[ecd5:deed::cafb]" ,"http" ,"" ,"" ,"[ecd5:deed::cafb]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"/[풂" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/[%ED%92%82" ,"" ,""},
{"" ,"ftp://254.252.206.252" ,"ftp" ,"" ,"" ,"254.252.206.252" ,-1 ,"/" ,"" ,""},
{"K:/" ,"//U" ,"k" ,"" ,"" ,"u" ,-1 ,"/" ,"" ,""},
{"file://[::dbff:eeeb]" ,"/" ,"file" ,"" ,"" ,"[::dbff:eeeb]" ,-1 ,"/" ,"" ,""},
{"" ,"file://U" ,"file" ,"" ,"" ,"u" ,-1 ,"/" ,"" ,""},
{"file://[3eec:bdec::252.250.255.252]" ,"/" ,"file" ,"" ,"" ,"[3eec:bdec::fcfa:fffc]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::aadb:defe:bf9d:ccad]" ,"file" ,"" ,"" ,"[::aadb:defe:bf9d:ccad]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/&ఒ" ,"file" ,"" ,"" ,"" ,-1 ,"/&%E0%B0%92" ,"" ,""},
{"wss://[::]" ,"//[::255.252.223.251]" ,"wss" ,"" ,"" ,"[::fffc:dffb]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"/%7d~" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%7d~" ,"" ,""},
{"" ,"file://[::cbfb:173.253.253.252]" ,"file" ,"" ,"" ,"[::cbfb:adfd:fdfc]" ,-1 ,"/" ,"" ,""},
{"w:/" ,"//[::aeae:fcae:86.253.250.253]" ,"w" ,"" ,"" ,"[::aeae:fcae:56fd:fafd]" ,-1 ,"/" ,"" ,""},
{"n:/" ,"//,p" ,"n" ,"" ,"" ,",p" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//[::d8cd]" ,"ftp" ,"" ,"" ,"[::d8cd]" ,-1 ,"/" ,"" ,""},
{"wss://$" ,"/" ,"wss" ,"" ,"" ,"$" ,-1 ,"/" ,"" ,""},
{"file:///" ,"햐" ,"file" ,"" ,"" ,"" ,-1 ,"/%ED%96%90" ,"" ,""},
{"file:///" ,"//251.250.253.57" ,"file" ,"" ,"" ,"251.250.253.57" ,-1 ,"/" ,"" ,""},
{"W:/" ,"//[db4d::fdfd:cecb:250.254.251.254]" ,"w" ,"" ,"" ,"[db4d::fdfd:cecb:fafe:fbfe]" ,-1 ,"/" ,"" ,""},
{"F:/#=" ,"/" ,"f" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"E:/%60(" ,"e" ,"" ,"" ,"" ,-1 ,"/%60(" ,"" ,""},
{"" ,"file://)5" ,"file" ,"" ,"" ,")5" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::bbfe:251.252.122.251]" ,"file" ,"" ,"" ,"[::bbfe:fbfc:7afb]" ,-1 ,"/" ,"" ,""},
{"ws://[::fdca:251.251.254.83]" ,"/" ,"ws" ,"" ,"" ,"[::fdca:fbfb:fe53]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//252.250.90.251" ,"ftp" ,"" ,"" ,"252.250.90.251" ,-1 ,"/" ,"" ,""},
{"ws://[::]?!" ,"/" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"v://[ceda:eaab:cafc:afbb:bfac:fdaf:254.253.253.253]" ,"/" ,"v" ,"" ,"" ,"[ceda:eaab:cafc:afbb:bfac:fdaf:fefd:fdfd]" ,-1 ,"/" ,"" ,""},
{"B://[::deee:202.255.253.255]" ,"/" ,"b" ,"" ,"" ,"[::deee:caff:fdff]" ,-1 ,"/" ,"" ,""},
{"I:/" ,"/%60*" ,"i" ,"" ,"" ,"" ,-1 ,"/%60*" ,"" ,""},
{"ftp://[::]" ,"//[ce5c:dafc::caab:ecfc:253.252.254.252]" ,"ftp" ,"" ,"" ,"[ce5c:dafc::caab:ecfc:fdfc:fefc]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//:K@\"" ,"ws" ,"" ,"K" ,"\"" ,-1 ,"/" ,"" ,""},
{"file:///" ,"..///%60" ,"file" ,"" ,"" ,"" ,-1 ,"///%60" ,"" ,""},
{"s:/" ,"//D" ,"s" ,"" ,"" ,"d" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/.///ᶓ" ,"file" ,"" ,"" ,"" ,-1 ,"///%E1%B6%93" ,"" ,""},
{"file:///" ,".%2e///[" ,"file" ,"" ,"" ,"" ,-1 ,"///[" ,"" ,""},
{"file:///" ,"M" ,"file" ,"" ,"" ,"" ,-1 ,"/M" ,"" ,""},
{"" ,"X://[e5da:febd::fcad:252.251.252.254]" ,"x" ,"" ,"" ,"[e5da:febd::fcad:fcfb:fcfe]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[bece:bdfa:acff:ffef:acdb:cbbf:250.253.251.6]" ,"file" ,"" ,"" ,"[bece:bdfa:acff:ffef:acdb:cbbf:fafd:fb06]" ,-1 ,"/" ,"" ,""},
{"M:/" ,"///h:/" ,"m" ,"" ,"" ,"" ,-1 ,"/h:/" ,"" ,""},
{"https://[::]" ,"퟾" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/%ED%9F%BE" ,"" ,""},
{"" ,"https://[1cfe::ddfd:250.253.253.250]" ,"https" ,"" ,"" ,"[1cfe::ddfd:fafd:fdfa]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::fbca:cceb:dfda:dfde]" ,"file" ,"" ,"" ,"[::fbca:cceb:dfda:dfde]" ,-1 ,"/" ,"" ,""},
{"P:/" ,"//[::fbaa:ceec:250.254.149.251]" ,"p" ,"" ,"" ,"[::fbaa:ceec:fafe:95fb]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//[::babe:dcfb:ed7d:abbd]" ,"ws" ,"" ,"" ,"[::babe:dcfb:ed7d:abbd]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::254.248.254.255]" ,"file" ,"" ,"" ,"[::fef8:feff]" ,-1 ,"/" ,"" ,""},
{"De:/" ,"/" ,"de" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[fb3f:aeeb::252.250.255.254]" ,"file" ,"" ,"" ,"[fb3f:aeeb::fcfa:fffe]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"︢" ,"file" ,"" ,"" ,"" ,-1 ,"/%EF%B8%A2" ,"" ,""},
{"" ,"file://[::adff:abfb:214.252.253.252]" ,"file" ,"" ,"" ,"[::adff:abfb:d6fc:fdfc]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[c8ab:efde::250.251.251.253]" ,"file" ,"" ,"" ,"[c8ab:efde::fafb:fbfd]" ,-1 ,"/" ,"" ,""},
{"b:/" ,"3" ,"b" ,"" ,"" ,"" ,-1 ,"/3" ,"" ,""},
{"https://[::]" ,"//[adfc:efda:bafc:befc:dbaf:abfc:255.11.255.252]" ,"https" ,"" ,"" ,"[adfc:efda:bafc:befc:dbaf:abfc:ff0b:fffc]" ,-1 ,"/" ,"" ,""},
{"V:/" ,"/[" ,"v" ,"" ,"" ,"" ,-1 ,"/[" ,"" ,""},
{"ftp://[::]" ,"/" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%EF%9C%8E" ,"" ,""},
{"" ,"file://[::aeef:254.252.252.9]" ,"file" ,"" ,"" ,"[::aeef:fefc:fc09]" ,-1 ,"/" ,"" ,""},
{"a:/" ,"//%6f" ,"a" ,"" ,"" ,"%6f" ,-1 ,"/" ,"" ,""},
{"" ,"file://255.252.252.70" ,"file" ,"" ,"" ,"255.252.252.70" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/%7d%7d" ,"file" ,"" ,"" ,"" ,-1 ,"/%7d%7d" ,"" ,""},
{"" ,"wss://[c6fe::252.251.250.250]" ,"wss" ,"" ,"" ,"[c6fe::fcfb:fafa]" ,-1 ,"/" ,"" ,""},
{"g:/" ,"//[::acbe:bece:252.99.251.254]" ,"g" ,"" ,"" ,"[::acbe:bece:fc63:fbfe]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//255.255.252.248" ,"https" ,"" ,"" ,"255.255.252.248" ,-1 ,"/" ,"" ,""},
{"" ,"https://.@," ,"https" ,"." ,"" ,"," ,-1 ,"/" ,"" ,""},
{"H:/" ,"//[::7afa:254.250.252.253]" ,"h" ,"" ,"" ,"[::7afa:fefa:fcfd]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[ebff:daae:dfdb:efee:bbeb:efca:bc3f:faac]" ,"file" ,"" ,"" ,"[ebff:daae:dfdb:efee:bbeb:efca:bc3f:faac]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://R" ,"wss" ,"" ,"" ,"r" ,-1 ,"/" ,"" ,""},
{"R:/" ,"//[::b2ca:cdfa]" ,"r" ,"" ,"" ,"[::b2ca:cdfa]" ,-1 ,"/" ,"" ,""},
{"wss://:@+" ,"/" ,"wss" ,"" ,"" ,"+" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/?" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%EE%BA%87" ,""},
{"" ,"file://\"" ,"file" ,"" ,"" ,"\"" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[e2ae:cddc::250.255.252.255]" ,"https" ,"" ,"" ,"[e2ae:cddc::faff:fcff]" ,-1 ,"/" ,"" ,""},
{"file:///?" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::]/ꪸ" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%EA%AA%B8" ,"" ,""},
{"" ,"file://178.254.253.250" ,"file" ,"" ,"" ,"178.254.253.250" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//[cff9:beab::ddad:250.254.254.255]" ,"ftp" ,"" ,"" ,"[cff9:beab::ddad:fafe:feff]" ,-1 ,"/" ,"" ,""},
{"file:///'＿" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"i:/" ,"//[::f7fa:dafa]" ,"i" ,"" ,"" ,"[::f7fa:dafa]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::250.56.254.253]" ,"file" ,"" ,"" ,"[::fa38:fefd]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://Gſ" ,"wss" ,"" ,"" ,"gs" ,-1 ,"/" ,"" ,""},
{"file:///" ,"%7dＥ" ,"file" ,"" ,"" ,"" ,-1 ,"/%7d%EF%BC%A5" ,"" ,""},
{"z://[::dfbe:afea:251.254.251.254]" ,"/" ,"z" ,"" ,"" ,"[::dfbe:afea:fbfe:fbfe]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//[1fef:fbaa::aeeb:fcbb:252.254.251.251]" ,"http" ,"" ,"" ,"[1fef:fbaa::aeeb:fcbb:fcfe:fbfb]" ,-1 ,"/" ,"" ,""},
{"ws://[9eba::bdcc]" ,"/" ,"ws" ,"" ,"" ,"[9eba::bdcc]" ,-1 ,"/" ,"" ,""},
{"file:///#⮃" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::8bfd]" ,"file" ,"" ,"" ,"[::8bfd]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//%@)" ,"https" ,"%" ,"" ,")" ,-1 ,"/" ,"" ,""},
{"J:/" ,"/" ,"j" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://B" ,"file" ,"" ,"" ,"b" ,-1 ,"/" ,"" ,""},
{"" ,"http://[eac9::253.252.250.255]" ,"http" ,"" ,"" ,"[eac9::fdfc:faff]" ,-1 ,"/" ,"" ,""},
{"d:/" ,"///􏾐" ,"d" ,"" ,"" ,"" ,-1 ,"/%F4%8F%BE%90" ,"" ,""},
{"ftp://[::]" ,"//[::ccea:254.253.254.121]" ,"ftp" ,"" ,"" ,"[::ccea:fefd:fe79]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::9dff:afda:251.255.250.252]" ,"file" ,"" ,"" ,"[::9dff:afda:fbff:fafc]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//'p" ,"https" ,"" ,"" ,"'p" ,-1 ,"/" ,"" ,""},
{"" ,"file://[cd7e::bbfa:beaf:253.251.255.255]" ,"file" ,"" ,"" ,"[cd7e::bbfa:beaf:fdfb:ffff]" ,-1 ,"/" ,"" ,""},
{"U:/" ,"//[::badd:255.251.255.138]" ,"u" ,"" ,"" ,"[::badd:fffb:ff8a]" ,-1 ,"/" ,"" ,""},
{"c:/" ,"//m" ,"c" ,"" ,"" ,"m" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//[::acef:deac:203.253.252.251]" ,"ws" ,"" ,"" ,"[::acef:deac:cbfd:fcfb]" ,-1 ,"/" ,"" ,""},
{"" ,"https://;~" ,"https" ,"" ,"" ,";~" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::3eae:befd:250.255.253.253]" ,"file" ,"" ,"" ,"[::3eae:befd:faff:fdfd]" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[::deda:affa:b0df:aefe]" ,"ftp" ,"" ,"" ,"[::deda:affa:b0df:aefe]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[b8dc::fbec:dcae:252.250.254.250]" ,"file" ,"" ,"" ,"[b8dc::fbec:dcae:fcfa:fefa]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//M@`" ,"https" ,"M" ,"" ,"`" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[::eecc:255.252.255.207]" ,"ftp" ,"" ,"" ,"[::eecc:fffc:ffcf]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[::165.255.253.255]" ,"https" ,"" ,"" ,"[::a5ff:fdff]" ,-1 ,"/" ,"" ,""},
{"" ,"file://`$" ,"file" ,"" ,"" ,"`$" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/./////%2e%2e" ,"file" ,"" ,"" ,"" ,-1 ,"////" ,"" ,""},
{"o:///" ,"/" ,"o" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::220.250.251.253]" ,"file" ,"" ,"" ,"[::dcfa:fbfd]" ,-1 ,"/" ,"" ,""},
{"T:/" ,"//[::4aba:251.250.254.255]" ,"t" ,"" ,"" ,"[::4aba:fbfa:feff]" ,-1 ,"/" ,"" ,""},
{"v:/" ,"//[::babd:244.252.253.254]" ,"v" ,"" ,"" ,"[::babd:f4fc:fdfe]" ,-1 ,"/" ,"" ,""},
{"n:/?/" ,"/" ,"n" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"z://[abce::]" ,"/" ,"z" ,"" ,"" ,"[abce::]" ,-1 ,"/" ,"" ,""},
{"" ,"ws://[caf7::255.252.252.251]" ,"ws" ,"" ,"" ,"[caf7::fffc:fcfb]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//}`" ,"file" ,"" ,"" ,"}`" ,-1 ,"/" ,"" ,""},
{"B:/" ,"/#︓" ,"b" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%EF%B8%93"},
{"" ,"file://z" ,"file" ,"" ,"" ,"z" ,-1 ,"/" ,"" ,""},
{"Z:/" ,"/#%" ,"z" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%"},
{"" ,"ftp://[ffaa:bfee:aafd:ddab:cecd:bfda:bcfb:dcc4]" ,"ftp" ,"" ,"" ,"[ffaa:bfee:aafd:ddab:cecd:bfda:bcfb:dcc4]" ,-1 ,"/" ,"" ,""},
{"p:/?ﺖ" ,"/" ,"p" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"M:/" ,"/+" ,"m" ,"" ,"" ,"" ,-1 ,"/+%EE%9D%89" ,"" ,""},
{"http://[::]?沫" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::]/.//㶭" ,"file" ,"" ,"" ,"[::]" ,-1 ,"//%E3%B6%AD" ,"" ,""},
{"w:/" ,"//%5d" ,"w" ,"" ,"" ,"%5d" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"/#[" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,"["},
{"file:///" ,"//\"*" ,"file" ,"" ,"" ,"\"*" ,-1 ,"/" ,"" ,""},
{"" ,"U://[::ecea:cdbd:ccdd:afdb]" ,"u" ,"" ,"" ,"[::ecea:cdbd:ccdd:afdb]" ,-1 ,"/" ,"" ,""},
{"" ,"P:/." ,"p" ,"" ,"" ,"" ,-1 ,"/." ,"" ,""},
{"https://[::]" ,"􌧄" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/%F4%8C%A7%84" ,"" ,""},
{"" ,"file:///#틣" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%ED%8B%A3"},
{"" ,"file://[::dcee:250.250.254.232]" ,"file" ,"" ,"" ,"[::dcee:fafa:fee8]" ,-1 ,"/" ,"" ,""},
{"a:/" ,"//[aebb:cfee:ddba:cbda:fbca:aebc:b6cd:dcba]" ,"a" ,"" ,"" ,"[aebb:cfee:ddba:cbda:fbca:aebc:b6cd:dcba]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://[::]/./" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/%EE%AC%89" ,"" ,""},
{"wss://[::]" ,"//[befa::254.251.253.254]" ,"wss" ,"" ,"" ,"[befa::fefb:fdfe]" ,-1 ,"/" ,"" ,""},
{"" ,"w://[::]:65516" ,"w" ,"" ,"" ,"[::]" ,65516 ,"/" ,"" ,""},
{"" ,"ws://[::cfed:254.251.89.255]" ,"ws" ,"" ,"" ,"[::cfed:fefb:59ff]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::]/%2e%2e/󬱰" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%F3%AC%B1%B0" ,"" ,""},
{"" ,"file://[bf9b::beca:cadd:250.251.254.251]" ,"file" ,"" ,"" ,"[bf9b::beca:cadd:fafb:fefb]" ,-1 ,"/" ,"" ,""},
{"f:/" ,"//[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae]" ,"f" ,"" ,"" ,"[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://222.252.254.253" ,"wss" ,"" ,"" ,"222.252.254.253" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::feeb]" ,"file" ,"" ,"" ,"[::feeb]" ,-1 ,"/" ,"" ,""},
{"" ,"X://[d1db:aace::]" ,"x" ,"" ,"" ,"[d1db:aace::]" ,-1 ,"/" ,"" ,""},
{"A:/#隤" ,"/" ,"a" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"%2e//󠱎" ,"http" ,"" ,"" ,"[::]" ,-1 ,"//%F3%A0%B1%8E" ,"" ,""},
{"wss://[::]" ,"//[fdcf:dfdc:aafc:dfdd:eaae:bdfa:baca:c6ad]" ,"wss" ,"" ,"" ,"[fdcf:dfdc:aafc:dfdd:eaae:bdfa:baca:c6ad]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf]" ,"https" ,"" ,"" ,"[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"ퟺ" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/%ED%9F%BA" ,"" ,""},
{"ws://[::]" ,"V" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/V" ,"" ,""},
{"" ,"U://-p" ,"u" ,"" ,"" ,"-p" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//󢯼@=" ,"http" ,"%F3%A2%AF%BC" ,"" ,"=" ,-1 ,"/" ,"" ,""},
{"V:/%23" ,"/" ,"v" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"wss://[4aab:ebad::edfb:ffdd:254.254.252.253]" ,"/" ,"wss" ,"" ,"" ,"[4aab:ebad::edfb:ffdd:fefe:fcfd]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://[::]/%2e/%3e" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/%3e" ,"" ,""},
{"" ,"https://[::fba8:cabf]" ,"https" ,"" ,"" ,"[::fba8:cabf]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::fefb:ccfc:153.254.250.253]" ,"file" ,"" ,"" ,"[::fefb:ccfc:99fe:fafd]" ,-1 ,"/" ,"" ,""},
{"http://[fd2d:dccb::eeab:250.250.250.251]" ,"/" ,"http" ,"" ,"" ,"[fd2d:dccb::eeab:fafa:fafb]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"􏟃" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%F4%8F%9F%83" ,"" ,""},
{"" ,"file:///#@" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"@"},
{"" ,"http://[::]/%60𓜎" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/%60%F0%93%9C%8E" ,"" ,""},
{"t:/" ,"//[cfae::dbff]" ,"t" ,"" ,"" ,"[cfae::dbff]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://[::]:65341" ,"wss" ,"" ,"" ,"[::]" ,65341 ,"/" ,"" ,""},
{"" ,"file://[edcf:bebf:adea:abbe:bcbb:abeb:254.13.253.251]" ,"file" ,"" ,"" ,"[edcf:bebf:adea:abbe:bcbb:abeb:fe0d:fdfb]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac]" ,"http" ,"" ,"" ,"[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac]" ,-1 ,"/" ,"" ,""},
{"" ,"http://b$" ,"http" ,"" ,"" ,"b$" ,-1 ,"/" ,"" ,""},
{"b:/" ,"//[fcbf:cbfa::eceb:252.251.253.251]" ,"b" ,"" ,"" ,"[fcbf:cbfa::eceb:fcfb:fdfb]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[fc5b::facf]" ,"https" ,"" ,"" ,"[fc5b::facf]" ,-1 ,"/" ,"" ,""},
{"Y:/" ,"//O" ,"y" ,"" ,"" ,"o" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//[::fccf:edda:cceb:a2ff]" ,"http" ,"" ,"" ,"[::fccf:edda:cceb:a2ff]" ,-1 ,"/" ,"" ,""},
{"y:/" ,"//[aaf3:ccdc:cfbd:ecef:acfe:efdb:251.254.252.251]" ,"y" ,"" ,"" ,"[aaf3:ccdc:cfbd:ecef:acfe:efdb:fbfe:fcfb]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//_" ,"http" ,"" ,"" ,"_" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//253.43.251.251" ,"file" ,"" ,"" ,"253.43.251.251" ,-1 ,"/" ,"" ,""},
{"h:/" ,"//[::eca2]" ,"h" ,"" ,"" ,"[::eca2]" ,-1 ,"/" ,"" ,""},
{"e:/" ,"%2e////=" ,"e" ,"" ,"" ,"" ,-1 ,"////=" ,"" ,""},
{"o://[::5bde]" ,"/" ,"o" ,"" ,"" ,"[::5bde]" ,-1 ,"/" ,"" ,""},
{"" ,"ws://[::]/)︒" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/)%EF%B8%92" ,"" ,""},
{"" ,"https://[2ace:eabe:fece:acce:eafb:fadf:253.251.251.255]" ,"https" ,"" ,"" ,"[2ace:eabe:fece:acce:eafb:fadf:fdfb:fbff]" ,-1 ,"/" ,"" ,""},
{"" ,"G:/%7bᡚ" ,"g" ,"" ,"" ,"" ,-1 ,"/%7b%E1%A1%9A" ,"" ,""},
{"" ,"ftp://[dc4e:efde::]" ,"ftp" ,"" ,"" ,"[dc4e:efde::]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///;9" ,"file" ,"" ,"" ,"" ,-1 ,"/;9" ,"" ,""},
{"file:///" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/%EE%BB%86" ,"" ,""},
{"n:/" ,"//[bcae:ecfa:cacf:fddc:bfab:acbd:eafd:bb6b]" ,"n" ,"" ,"" ,"[bcae:ecfa:cacf:fddc:bfab:acbd:eafd:bb6b]" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"//ſ3" ,"wss" ,"" ,"" ,"s3" ,-1 ,"/" ,"" ,""},
{"" ,"S:/(ﻴ" ,"s" ,"" ,"" ,"" ,-1 ,"/(%EF%BB%B4" ,"" ,""},
{"F:/" ,"%2e%2e/򀒉" ,"f" ,"" ,"" ,"" ,-1 ,"/%F2%80%92%89" ,"" ,""},
{"" ,"file://[::]/%2e./%3f" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%3f" ,"" ,""},
{"" ,"b://s" ,"b" ,"" ,"" ,"s" ,-1 ,"/" ,"" ,""},
{"" ,"V:///]!" ,"v" ,"" ,"" ,"" ,-1 ,"///]!" ,"" ,""},
{"Y:/" ,"%7b￸" ,"y" ,"" ,"" ,"" ,-1 ,"/%7b%EF%BF%B8" ,"" ,""},
{"" ,"o://[dcbb:ddbb::ddbb]" ,"o" ,"" ,"" ,"[dcbb:ddbb::ddbb]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//251.252.253.241" ,"file" ,"" ,"" ,"251.252.253.241" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[9eed:bafe:dada:cecd:abca:fbec:250.252.255.253]" ,"file" ,"" ,"" ,"[9eed:bafe:dada:cecd:abca:fbec:fafc:fffd]" ,-1 ,"/" ,"" ,""},
{"" ,"http://E" ,"http" ,"" ,"" ,"e" ,-1 ,"/" ,"" ,""}};
//test execution
TEST(URLParser, Parsing){
	for (size_t i = 0; i < base::size(parse_cases); i++) {
		GURL parsed_url;
		if(strcmp(parse_cases[i].baseurl, "") != 0){
			GURL parsed_base(parse_cases[i].baseurl);
			parsed_url=parsed_base.Resolve(parse_cases[i].input);
		}
		else{
			parsed_url= GURL(parse_cases[i].input);
		}
						
		CheckValidity(parse_cases[i], parsed_url);
		if ( parsed_url.is_valid()) {
			CheckComponents(parse_cases[i], parsed_url);

		}


	}
}

//namespace url
}
}