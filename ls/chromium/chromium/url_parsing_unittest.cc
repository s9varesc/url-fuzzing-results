
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
{"" ,"file:///^" ,"file" ,"" ,"" ,"" ,-1 ,"/^" ,"" ,""},
{"" ,"V://[::afab:bc8d:bbdc]" ,"v" ,"" ,"" ,"[::afab:bc8d:bbdc]" ,-1 ,"/" ,"" ,""},
{"N:/" ,"//*&" ,"n" ,"" ,"" ,"*&" ,-1 ,"/" ,"" ,""},
{"j:/" ,"//[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251]" ,"j" ,"" ,"" ,"[efbb:efbc:eaff:cbaa:aebf:cada:fe43:fffb]" ,-1 ,"/" ,"" ,""},
{"s:/a:/" ,"/" ,"s" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"ftp://[::]/%3c" ,"/" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/#Ｓ" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"%EF%BC%B3"},
{"" ,"http://252.254.3.255" ,"http" ,"" ,"" ,"252.254.3.255" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[::]/%2e//" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"//" ,"" ,""},
{"http://[::]" ,"@𸻾" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/@%F0%B8%BB%BE" ,"" ,""},
{"" ,"file://[::dbed:aebe:fdfe:ea7b]" ,"file" ,"" ,"" ,"[::dbed:aebe:fdfe:ea7b]" ,-1 ,"/" ,"" ,""},
{"" ,"https://[::253.254.254.48]" ,"https" ,"" ,"" ,"[::fdfe:fe30]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///%7b￧" ,"file" ,"" ,"" ,"" ,-1 ,"/%7b%EF%BF%A7" ,"" ,""},
{"" ,"wss://250.104.255.254" ,"wss" ,"" ,"" ,"250.104.255.254" ,-1 ,"/" ,"" ,""},
{"J:/" ,"//;" ,"j" ,"" ,"" ,";" ,-1 ,"/" ,"" ,""},
{"U:/" ,"//[::dbae:acfd:251.254.8.252]" ,"u" ,"" ,"" ,"[::dbae:acfd:fbfe:8fc]" ,-1 ,"/" ,"" ,""},
{"file://[::]/酜" ,"/" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"wss://[::7cbc:253.250.252.255]" ,"/" ,"wss" ,"" ,"" ,"[::7cbc:fdfa:fcff]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///鍕" ,"file" ,"" ,"" ,"" ,-1 ,"/%E9%8D%95" ,"" ,""},
{"" ,"file://[::eeaa:acfe:eada:d7bc]" ,"file" ,"" ,"" ,"[::eeaa:acfe:eada:d7bc]" ,-1 ,"/" ,"" ,""},
{"" ,"R://[dfaa::]" ,"r" ,"" ,"" ,"[dfaa::]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"﹐" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%EF%B9%90" ,"" ,""},
{"" ,"https://[::]/./%2e%2e" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"file:///#󥓈" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"n://[::255.250.241.250]" ,"n" ,"" ,"" ,"[::fffa:f1fa]" ,-1 ,"/" ,"" ,""},
{"file://[::bdbc:223.254.255.254]" ,"/" ,"file" ,"" ,"" ,"[::bdbc:dffe:fffe]" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"/B:/" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/B:/" ,"" ,""},
{"" ,"file://[::fede:dcaf:251.251.9.254]" ,"file" ,"" ,"" ,"[::fede:dcaf:fbfb:9fe]" ,-1 ,"/" ,"" ,""},
{"http://[::]?ퟻ" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"x:/" ,"//C" ,"x" ,"" ,"" ,"c" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//[::ffff:bafd:cafd:db8f]" ,"ftp" ,"" ,"" ,"[::ffff:bafd:cafd:db8f]" ,-1 ,"/" ,"" ,""},
{"" ,"E:/N:/" ,"e" ,"" ,"" ,"" ,-1 ,"/N:/" ,"" ,""},
{"" ,"file://[::]/," ,"file" ,"" ,"" ,"[::]" ,-1 ,"/," ,"" ,""},
{"" ,"file://[ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5]" ,"file" ,"" ,"" ,"[ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5]" ,-1 ,"/" ,"" ,""},
{"t:/" ,"//T" ,"t" ,"" ,"" ,"t" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"//254.255.177.255" ,"wss" ,"" ,"" ,"254.255.177.255" ,-1 ,"/" ,"" ,""},
{"" ,"d://[fdbe:ccab::acdf:daef:253.251.251.255]" ,"d" ,"" ,"" ,"[fdbe:ccab::acdf:daef:fdfb:fbff]" ,-1 ,"/" ,"" ,""},
{"b:/" ,"///)" ,"b" ,"" ,"" ,"" ,-1 ,"/)" ,"" ,""},
{"N:/" ,"/&￠" ,"n" ,"" ,"" ,"" ,-1 ,"/&%EF%BF%A0" ,"" ,""},
{"file:///" ,"//{y" ,"file" ,"" ,"" ,"{y" ,-1 ,"/" ,"" ,""},
{"" ,"http://[ecd5:deed::cafb]" ,"http" ,"" ,"" ,"[ecd5:deed::cafb]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"/[풂" ,"ws" ,"" ,"" ,"[::]" ,-1 ,"/[%ED%92%82" ,"" ,""},
{"K:/" ,"//U" ,"k" ,"" ,"" ,"u" ,-1 ,"/" ,"" ,""},
{"" ,"file://U" ,"file" ,"" ,"" ,"u" ,-1 ,"/" ,"" ,""},
{"file://[3eec:bdec::252.250.255.252]" ,"/" ,"file" ,"" ,"" ,"[3eec:bdec::fcfa:fffc]" ,-1 ,"/" ,"" ,""},
{"wss://[::]" ,"//[::255.252.223.251]" ,"wss" ,"" ,"" ,"[::fffc:dffb]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"/%7d~" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%7d~" ,"" ,""},
{"w:/" ,"//[::aeae:fcae:86.253.250.253]" ,"w" ,"" ,"" ,"[::aeae:fcae:56fd:fafd]" ,-1 ,"/" ,"" ,""},
{"n:/" ,"//,p" ,"n" ,"" ,"" ,",p" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//[::d8cd]" ,"ftp" ,"" ,"" ,"[::d8cd]" ,-1 ,"/" ,"" ,""},
{"wss://$" ,"/" ,"wss" ,"" ,"" ,"$" ,-1 ,"/" ,"" ,""},
{"file:///" ,"햐" ,"file" ,"" ,"" ,"" ,-1 ,"/%ED%96%90" ,"" ,""},
{"file:///" ,"//251.250.253.57" ,"file" ,"" ,"" ,"251.250.253.57" ,-1 ,"/" ,"" ,""},
{"" ,"E:/%60(" ,"e" ,"" ,"" ,"" ,-1 ,"/%60(" ,"" ,""},
{"" ,"file://)5" ,"file" ,"" ,"" ,")5" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::bbfe:251.252.122.251]" ,"file" ,"" ,"" ,"[::bbfe:fbfc:7afb]" ,-1 ,"/" ,"" ,""},
{"ws://[::fdca:251.251.254.83]" ,"/" ,"ws" ,"" ,"" ,"[::fdca:fbfb:fe53]" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//252.250.90.251" ,"ftp" ,"" ,"" ,"252.250.90.251" ,-1 ,"/" ,"" ,""},
{"v://[ceda:eaab:cafc:afbb:bfac:fdaf:254.253.253.253]" ,"/" ,"v" ,"" ,"" ,"[ceda:eaab:cafc:afbb:bfac:fdaf:fefd:fdfd]" ,-1 ,"/" ,"" ,""},
{"B://[::deee:202.255.253.255]" ,"/" ,"b" ,"" ,"" ,"[::deee:caff:fdff]" ,-1 ,"/" ,"" ,""},
{"I:/" ,"/%60*" ,"i" ,"" ,"" ,"" ,-1 ,"/%60*" ,"" ,""},
{"s:/" ,"//D" ,"s" ,"" ,"" ,"d" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/.///ᶓ" ,"file" ,"" ,"" ,"" ,-1 ,"///%E1%B6%93" ,"" ,""},
{"file:///" ,"M" ,"file" ,"" ,"" ,"" ,-1 ,"/M" ,"" ,""},
{"" ,"X://[e5da:febd::fcad:252.251.252.254]" ,"x" ,"" ,"" ,"[e5da:febd::fcad:fcfb:fcfe]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[bece:bdfa:acff:ffef:acdb:cbbf:250.253.251.6]" ,"file" ,"" ,"" ,"[bece:bdfa:acff:ffef:acdb:cbbf:fafd:fb06]" ,-1 ,"/" ,"" ,""},
{"M:/" ,"///h:/" ,"m" ,"" ,"" ,"" ,-1 ,"/h:/" ,"" ,""},
{"P:/" ,"//[::fbaa:ceec:250.254.149.251]" ,"p" ,"" ,"" ,"[::fbaa:ceec:fafe:95fb]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//[::babe:dcfb:ed7d:abbd]" ,"ws" ,"" ,"" ,"[::babe:dcfb:ed7d:abbd]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"︢" ,"file" ,"" ,"" ,"" ,-1 ,"/%EF%B8%A2" ,"" ,""},
{"b:/" ,"3" ,"b" ,"" ,"" ,"" ,-1 ,"/3" ,"" ,""},
{"ftp://[::]" ,"/" ,"ftp" ,"" ,"" ,"[::]" ,-1 ,"/%EF%9C%8E" ,"" ,""},
{"file:///" ,"/%7d%7d" ,"file" ,"" ,"" ,"" ,-1 ,"/%7d%7d" ,"" ,""},
{"" ,"wss://[c6fe::252.251.250.250]" ,"wss" ,"" ,"" ,"[c6fe::fcfb:fafa]" ,-1 ,"/" ,"" ,""},
{"g:/" ,"//[::acbe:bece:252.99.251.254]" ,"g" ,"" ,"" ,"[::acbe:bece:fc63:fbfe]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//255.255.252.248" ,"https" ,"" ,"" ,"255.255.252.248" ,-1 ,"/" ,"" ,""},
{"" ,"https://.@," ,"https" ,"." ,"" ,"," ,-1 ,"/" ,"" ,""},
{"H:/" ,"//[::7afa:254.250.252.253]" ,"h" ,"" ,"" ,"[::7afa:fefa:fcfd]" ,-1 ,"/" ,"" ,""},
{"R:/" ,"//[::b2ca:cdfa]" ,"r" ,"" ,"" ,"[::b2ca:cdfa]" ,-1 ,"/" ,"" ,""},
{"wss://:@+" ,"/" ,"wss" ,"" ,"" ,"+" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/?" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"%EE%BA%87" ,""},
{"" ,"file://\"" ,"file" ,"" ,"" ,"\"" ,-1 ,"/" ,"" ,""},
{"file:///?" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::]/ꪸ" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%EA%AA%B8" ,"" ,""},
{"" ,"file://178.254.253.250" ,"file" ,"" ,"" ,"178.254.253.250" ,-1 ,"/" ,"" ,""},
{"ftp://[::]" ,"//[cff9:beab::ddad:250.254.254.255]" ,"ftp" ,"" ,"" ,"[cff9:beab::ddad:fafe:feff]" ,-1 ,"/" ,"" ,""},
{"file:///'＿" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"i:/" ,"//[::f7fa:dafa]" ,"i" ,"" ,"" ,"[::f7fa:dafa]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::250.56.254.253]" ,"file" ,"" ,"" ,"[::fa38:fefd]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"%7dＥ" ,"file" ,"" ,"" ,"" ,-1 ,"/%7d%EF%BC%A5" ,"" ,""},
{"file:///#⮃" ,"/" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//%@)" ,"https" ,"%" ,"" ,")" ,-1 ,"/" ,"" ,""},
{"" ,"file://B" ,"file" ,"" ,"" ,"b" ,-1 ,"/" ,"" ,""},
{"d:/" ,"///􏾐" ,"d" ,"" ,"" ,"" ,-1 ,"/%F4%8F%BE%90" ,"" ,""},
{"" ,"file://[cd7e::bbfa:beaf:253.251.255.255]" ,"file" ,"" ,"" ,"[cd7e::bbfa:beaf:fdfb:ffff]" ,-1 ,"/" ,"" ,""},
{"U:/" ,"//[::badd:255.251.255.138]" ,"u" ,"" ,"" ,"[::badd:fffb:ff8a]" ,-1 ,"/" ,"" ,""},
{"ws://[::]" ,"//[::acef:deac:203.253.252.251]" ,"ws" ,"" ,"" ,"[::acef:deac:cbfd:fcfb]" ,-1 ,"/" ,"" ,""},
{"" ,"https://;~" ,"https" ,"" ,"" ,";~" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::3eae:befd:250.255.253.253]" ,"file" ,"" ,"" ,"[::3eae:befd:faff:fdfd]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//M@`" ,"https" ,"M" ,"" ,"`" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[::eecc:255.252.255.207]" ,"ftp" ,"" ,"" ,"[::eecc:fffc:ffcf]" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[::165.255.253.255]" ,"https" ,"" ,"" ,"[::a5ff:fdff]" ,-1 ,"/" ,"" ,""},
{"" ,"file://`$" ,"file" ,"" ,"" ,"`$" ,-1 ,"/" ,"" ,""},
{"file:///" ,"/./////%2e%2e" ,"file" ,"" ,"" ,"" ,-1 ,"////" ,"" ,""},
{"" ,"file://[::220.250.251.253]" ,"file" ,"" ,"" ,"[::dcfa:fbfd]" ,-1 ,"/" ,"" ,""},
{"z://[abce::]" ,"/" ,"z" ,"" ,"" ,"[abce::]" ,-1 ,"/" ,"" ,""},
{"" ,"file://z" ,"file" ,"" ,"" ,"z" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[ffaa:bfee:aafd:ddab:cecd:bfda:bcfb:dcc4]" ,"ftp" ,"" ,"" ,"[ffaa:bfee:aafd:ddab:cecd:bfda:bcfb:dcc4]" ,-1 ,"/" ,"" ,""},
{"p:/?ﺖ" ,"/" ,"p" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"M:/" ,"/+" ,"m" ,"" ,"" ,"" ,-1 ,"/+%EE%9D%89" ,"" ,""},
{"http://[::]?沫" ,"/" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/" ,"" ,""},
{"" ,"P:/." ,"p" ,"" ,"" ,"" ,-1 ,"/." ,"" ,""},
{"https://[::]" ,"􌧄" ,"https" ,"" ,"" ,"[::]" ,-1 ,"/%F4%8C%A7%84" ,"" ,""},
{"" ,"file://[::dcee:250.250.254.232]" ,"file" ,"" ,"" ,"[::dcee:fafa:fee8]" ,-1 ,"/" ,"" ,""},
{"" ,"wss://[::]/./" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/%EE%AC%89" ,"" ,""},
{"" ,"ws://[::cfed:254.251.89.255]" ,"ws" ,"" ,"" ,"[::cfed:fefb:59ff]" ,-1 ,"/" ,"" ,""},
{"" ,"file://[::]/%2e%2e/󬱰" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%F3%AC%B1%B0" ,"" ,""},
{"" ,"file://[bf9b::beca:cadd:250.251.254.251]" ,"file" ,"" ,"" ,"[bf9b::beca:cadd:fafb:fefb]" ,-1 ,"/" ,"" ,""},
{"f:/" ,"//[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae]" ,"f" ,"" ,"" ,"[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae]" ,-1 ,"/" ,"" ,""},
{"file:///" ,"//[::feeb]" ,"file" ,"" ,"" ,"[::feeb]" ,-1 ,"/" ,"" ,""},
{"" ,"X://[d1db:aace::]" ,"x" ,"" ,"" ,"[d1db:aace::]" ,-1 ,"/" ,"" ,""},
{"A:/#隤" ,"/" ,"a" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"https://[::]" ,"//[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf]" ,"https" ,"" ,"" ,"[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"ퟺ" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/%ED%9F%BA" ,"" ,""},
{"http://[::]" ,"//󢯼@=" ,"http" ,"%F3%A2%AF%BC" ,"" ,"=" ,-1 ,"/" ,"" ,""},
{"V:/%23" ,"/" ,"v" ,"" ,"" ,"" ,-1 ,"/" ,"" ,""},
{"" ,"wss://[::]/%2e/%3e" ,"wss" ,"" ,"" ,"[::]" ,-1 ,"/%3e" ,"" ,""},
{"http://[fd2d:dccb::eeab:250.250.250.251]" ,"/" ,"http" ,"" ,"" ,"[fd2d:dccb::eeab:fafa:fafb]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///#@" ,"file" ,"" ,"" ,"" ,-1 ,"/" ,"" ,"@"},
{"" ,"http://[::]/%60𓜎" ,"http" ,"" ,"" ,"[::]" ,-1 ,"/%60%F0%93%9C%8E" ,"" ,""},
{"" ,"wss://[::]:65341" ,"wss" ,"" ,"" ,"[::]" ,65341 ,"/" ,"" ,""},
{"http://[::]" ,"//[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac]" ,"http" ,"" ,"" ,"[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac]" ,-1 ,"/" ,"" ,""},
{"" ,"http://b$" ,"http" ,"" ,"" ,"b$" ,-1 ,"/" ,"" ,""},
{"b:/" ,"//[fcbf:cbfa::eceb:252.251.253.251]" ,"b" ,"" ,"" ,"[fcbf:cbfa::eceb:fcfb:fdfb]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//[::fccf:edda:cceb:a2ff]" ,"http" ,"" ,"" ,"[::fccf:edda:cceb:a2ff]" ,-1 ,"/" ,"" ,""},
{"http://[::]" ,"//_" ,"http" ,"" ,"" ,"_" ,-1 ,"/" ,"" ,""},
{"e:/" ,"%2e////=" ,"e" ,"" ,"" ,"" ,-1 ,"////=" ,"" ,""},
{"o://[::5bde]" ,"/" ,"o" ,"" ,"" ,"[::5bde]" ,-1 ,"/" ,"" ,""},
{"" ,"ftp://[dc4e:efde::]" ,"ftp" ,"" ,"" ,"[dc4e:efde::]" ,-1 ,"/" ,"" ,""},
{"" ,"file:///;9" ,"file" ,"" ,"" ,"" ,-1 ,"/;9" ,"" ,""},
{"" ,"S:/(ﻴ" ,"s" ,"" ,"" ,"" ,-1 ,"/(%EF%BB%B4" ,"" ,""},
{"" ,"file://[::]/%2e./%3f" ,"file" ,"" ,"" ,"[::]" ,-1 ,"/%3f" ,"" ,""},
{"" ,"V:///]!" ,"v" ,"" ,"" ,"" ,-1 ,"///]!" ,"" ,""},
{"Y:/" ,"%7b￸" ,"y" ,"" ,"" ,"" ,-1 ,"/%7b%EF%BF%B8" ,"" ,""},
{"" ,"o://[dcbb:ddbb::ddbb]" ,"o" ,"" ,"" ,"[dcbb:ddbb::ddbb]" ,-1 ,"/" ,"" ,""},
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