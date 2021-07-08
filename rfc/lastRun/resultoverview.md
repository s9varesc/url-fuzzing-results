# Results 

Total number of URLs: 96

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 18.63% 
Cpp | 0 | 0 | 18.7% 
Go | 0 | 0 | 73.4% 
Python | 0 | 0 | 33.0% 
firefox | 37 | 1 | 48.1% 
chromium | 37 | 1 | 13.72% 
C | 49 | 1 | 47.1% 
PHP | 49 | 49 | 58.62% 
Ruby | 59 | 1 | 68.91% 
JavaScriptwhatwg-url | 70 | 1 | 36.21% 
Java | 96 | 25 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //%d2 ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` //N@ ```  <br> ``` //[8abb:ceea::acec:adeb:251.251.254.250%25~] ```  <br> ``` //[eafd:aaac:bfba:faac:cbec:cdad:57.250.253.254%25~] ```  <br> ``` //[dcad:dbaf:cbda:ddaa:cdec:aeed:251.222.255.250%25~] ```  <br> ``` //[cacc::ebcc:edcd:adec:caaf:253.252.163.254%25_] ```  <br> ``` //[bfdc:aabd:adbc:ffaa:acfb:cfda:bdfc:9bde] ```  <br> ``` //[::dfcf:deab:1.250.250.253%25_] ```  <br> ``` //[4bcc:bafd::bcad:254.255.255.252] ```  <br> ``` //[bbda:ecdd:bdbe:dbcf:fbfb:acee:7ede:bfab] ```  <br> ``` //[::bcfa:eaad:7efa%25~] ```  <br> ``` //[::afbf:ebed:ecfe:ffab:dbdc:252.25.253.252%25.] ```  <br> ``` //[::becc:fcba:dfde:ddfc:8eca%25~] ```  <br> ``` //@/o ```  <br> ``` ///@/q ```  <br> ``` //[edee::cbbe:afab:fabe:cefa:6cde:efdf] ```  <br> ``` //?' ```  <br> ``` //%e7 ```  <br> ``` //[::dabf:234.253.251.252%25-] ```  <br> ``` //[::cbfd:ebcd:253.251.212.255%25.] ```  <br> ``` //[::deff:cbbf:252.255.17.252%25.] ```  <br> ``` //[::acbb:faca:efad:254.255.157.251%25-] ```  <br> ``` //[bbcc::aaef:dccd:fdcb:afcc:6.253.250.253] ```  <br> ``` //[::%25a] ```  <br> ``` //[ebfc:eeea:efca:ecad:adbf:feee:251.251.251.9] ```  <br> ``` //[bede:cccf:ccdd:ddaf:efea:beec:250.81.254.252] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` I://[::250.253.200.252%25.] ```  <br> ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  <br> ``` //[8abb:ceea::acec:adeb:251.251.254.250%25~] ```  <br> ``` d://[eceb:ebaa:eeac:bffe:efce:fccd:252.255.252.0%25_] ```  <br> ``` C://[bcca:fdde:bedd:cbeb:afef:ecdc:251.56.254.251%25.] ```  <br> ``` //[eafd:aaac:bfba:faac:cbec:cdad:57.250.253.254%25~] ```  <br> ``` d://[::abdf:bbcf:250.251.255.241%25-] ```  <br> ``` //[dcad:dbaf:cbda:ddaa:cdec:aeed:251.222.255.250%25~] ```  <br> ``` //[cacc::ebcc:edcd:adec:caaf:253.252.163.254%25_] ```  <br> ``` z://[bcea::addb:cdfe:aefd:bffc:246.250.250.251%25~] ```  <br> ``` D://[ccbf:efac:fdbb:dcbb:eceb:dfed:1.252.253.254%25.] ```  <br> ``` R://[::%25O] ```  <br> ``` b://[::eedd:cbba:dfeb:dafe:adef:253.205.253.254] ```  <br> ``` H://[::220.255.252.252%25~] ```  <br> ``` x://[bbcb:ecee:aeaf:eccb:bffc:ccdf:9dbc:cfea%25~] ```  <br> ``` t://[adcf:feab:cceb:eacd:cbef:bfdd:23.253.252.255%25.] ```  <br> ``` S://[::efbb:badb:3.253.253.255%25.] ```  <br> ``` v://[::eaff:2.250.253.252%25~] ```  <br> ``` //[::dfcf:deab:1.250.250.253%25_] ```  <br> ``` E://[::250.253.251.197%25.] ```  <br> ``` x://[::%250] ```  <br> ``` //[::bcfa:eaad:7efa%25~] ```  <br> ``` //[::afbf:ebed:ecfe:ffab:dbdc:252.25.253.252%25.] ```  <br> ``` //[::becc:fcba:dfde:ddfc:8eca%25~] ```  <br> ``` D://[::dfcf:250.252.34.250%25~] ```  <br> ``` K://[4bad::baee:253.252.252.254%25-] ```  <br> ``` q://[1eac::fbbc%25-] ```  <br> ``` e://[fbaf::eace:bbae:bcae:fade:dafa:9dce%25.] ```  <br> ``` B://[effd::efbd:eafd:edbf:ecee:254.6.250.251%25.] ```  <br> ``` W://[::afbb:253.236.252.255%25_] ```  <br> ``` y://[::afdc:cfab:fedb:edbe:1eed%25-] ```  <br> ``` l://[::253.5.252.254%25~] ```  <br> ``` //[::dabf:234.253.251.252%25-] ```  <br> ``` //[::cbfd:ebcd:253.251.212.255%25.] ```  <br> ``` //[::deff:cbbf:252.255.17.252%25.] ```  <br> ``` A://[::4def%25.] ```  <br> ``` //[::acbb:faca:efad:254.255.157.251%25-] ```  <br> ``` q://[::ddfe:fcbe:cedb:6dfa%25.] ```  <br> ``` //[::%25a] ```  <br> ``` N://[::1beb:255.251.255.255%25~] ```  <br> ``` f://[::abcd:253.252.3.250%25-] ```  <br> ``` E://[::efca:dafe:fcce:2eda:bddb%25_] ```  <br> ``` h://[::eeca:facd:ddcf:209.255.251.254] ```  <br> ``` g://[::fcce:bfbf:fcad:cddf:bdbb:cfca:5cad%25.] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-]` is invalid : the IP host is malformed ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> 
 ``` Host `[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-]` is invalid : the IP host is malformed ```  |  ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> 
 ``` Host `[::250.253.200.252%25.]` is invalid : the IP host is malformed ```  |  ``` I://[::250.253.200.252%25.] ```  <br> 
 ``` Host `[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-]` is invalid : the IP host is malformed ```  |  ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  <br> 
 ``` Host `[::aded:cffa:dcde:252.255.224.254%25_]` is invalid : the IP host is malformed ```  |  ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> 
 ``` Host `%d2` is not a valid IDN host : a label or domain name contains disallowed characters. ```  |  ``` //%d2 ```  <br> 
 ``` Host `[::abdd:addc:255.254.1.252%25_]` is invalid : the IP host is malformed ```  |  ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> 
 ``` Host `[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~]` is invalid : the IP host is malformed ```  |  ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  <br> 
 ``` Host `[8abb:ceea::acec:adeb:251.251.254.250%25~]` is invalid : the IP host is malformed ```  |  ``` //[8abb:ceea::acec:adeb:251.251.254.250%25~] ```  <br> 
 ``` Host `[eceb:ebaa:eeac:bffe:efce:fccd:252.255.252.0%25_]` is invalid : the IP host is malformed ```  |  ``` d://[eceb:ebaa:eeac:bffe:efce:fccd:252.255.252.0%25_] ```  <br> 
 ``` Host `[bcca:fdde:bedd:cbeb:afef:ecdc:251.56.254.251%25.]` is invalid : the IP host is malformed ```  |  ``` C://[bcca:fdde:bedd:cbeb:afef:ecdc:251.56.254.251%25.] ```  <br> 
 ``` Host `[eafd:aaac:bfba:faac:cbec:cdad:57.250.253.254%25~]` is invalid : the IP host is malformed ```  |  ``` //[eafd:aaac:bfba:faac:cbec:cdad:57.250.253.254%25~] ```  <br> 
 ``` Host `[::abdf:bbcf:250.251.255.241%25-]` is invalid : the IP host is malformed ```  |  ``` d://[::abdf:bbcf:250.251.255.241%25-] ```  <br> 
 ``` Host `[dcad:dbaf:cbda:ddaa:cdec:aeed:251.222.255.250%25~]` is invalid : the IP host is malformed ```  |  ``` //[dcad:dbaf:cbda:ddaa:cdec:aeed:251.222.255.250%25~] ```  <br> 
 ``` Host `[cacc::ebcc:edcd:adec:caaf:253.252.163.254%25_]` is invalid : the IP host is malformed ```  |  ``` //[cacc::ebcc:edcd:adec:caaf:253.252.163.254%25_] ```  <br> 
 ``` Host `[bcea::addb:cdfe:aefd:bffc:246.250.250.251%25~]` is invalid : the IP host is malformed ```  |  ``` z://[bcea::addb:cdfe:aefd:bffc:246.250.250.251%25~] ```  <br> 
 ``` Host `[ccbf:efac:fdbb:dcbb:eceb:dfed:1.252.253.254%25.]` is invalid : the IP host is malformed ```  |  ``` D://[ccbf:efac:fdbb:dcbb:eceb:dfed:1.252.253.254%25.] ```  <br> 
 ``` Host `[::%25O]` is invalid : the IP host is malformed ```  |  ``` R://[::%25O] ```  <br> 
 ``` Host `[::220.255.252.252%25~]` is invalid : the IP host is malformed ```  |  ``` H://[::220.255.252.252%25~] ```  <br> 
 ``` Host `[bbcb:ecee:aeaf:eccb:bffc:ccdf:9dbc:cfea%25~]` is invalid : the IP host is malformed ```  |  ``` x://[bbcb:ecee:aeaf:eccb:bffc:ccdf:9dbc:cfea%25~] ```  <br> 
 ``` Host `[adcf:feab:cceb:eacd:cbef:bfdd:23.253.252.255%25.]` is invalid : the IP host is malformed ```  |  ``` t://[adcf:feab:cceb:eacd:cbef:bfdd:23.253.252.255%25.] ```  <br> 
 ``` Host `[::efbb:badb:3.253.253.255%25.]` is invalid : the IP host is malformed ```  |  ``` S://[::efbb:badb:3.253.253.255%25.] ```  <br> 
 ``` Host `[::eaff:2.250.253.252%25~]` is invalid : the IP host is malformed ```  |  ``` v://[::eaff:2.250.253.252%25~] ```  <br> 
 ``` Host `[::dfcf:deab:1.250.250.253%25_]` is invalid : the IP host is malformed ```  |  ``` //[::dfcf:deab:1.250.250.253%25_] ```  <br> 
 ``` Host `[::250.253.251.197%25.]` is invalid : the IP host is malformed ```  |  ``` E://[::250.253.251.197%25.] ```  <br> 
 ``` Host `[::%250]` is invalid : the IP host is malformed ```  |  ``` x://[::%250] ```  <br> 
 ``` Host `[::bcfa:eaad:7efa%25~]` is invalid : the IP host is malformed ```  |  ``` //[::bcfa:eaad:7efa%25~] ```  <br> 
 ``` Host `[::afbf:ebed:ecfe:ffab:dbdc:252.25.253.252%25.]` is invalid : the IP host is malformed ```  |  ``` //[::afbf:ebed:ecfe:ffab:dbdc:252.25.253.252%25.] ```  <br> 
 ``` Host `[::becc:fcba:dfde:ddfc:8eca%25~]` is invalid : the IP host is malformed ```  |  ``` //[::becc:fcba:dfde:ddfc:8eca%25~] ```  <br> 
 ``` Host `[::dfcf:250.252.34.250%25~]` is invalid : the IP host is malformed ```  |  ``` D://[::dfcf:250.252.34.250%25~] ```  <br> 
 ``` Host `[4bad::baee:253.252.252.254%25-]` is invalid : the IP host is malformed ```  |  ``` K://[4bad::baee:253.252.252.254%25-] ```  <br> 
 ``` Host `[1eac::fbbc%25-]` is invalid : the IP host is malformed ```  |  ``` q://[1eac::fbbc%25-] ```  <br> 
 ``` Host `[fbaf::eace:bbae:bcae:fade:dafa:9dce%25.]` is invalid : the IP host is malformed ```  |  ``` e://[fbaf::eace:bbae:bcae:fade:dafa:9dce%25.] ```  <br> 
 ``` Host `[effd::efbd:eafd:edbf:ecee:254.6.250.251%25.]` is invalid : the IP host is malformed ```  |  ``` B://[effd::efbd:eafd:edbf:ecee:254.6.250.251%25.] ```  <br> 
 ``` Host `[::afbb:253.236.252.255%25_]` is invalid : the IP host is malformed ```  |  ``` W://[::afbb:253.236.252.255%25_] ```  <br> 
 ``` Host `[::afdc:cfab:fedb:edbe:1eed%25-]` is invalid : the IP host is malformed ```  |  ``` y://[::afdc:cfab:fedb:edbe:1eed%25-] ```  <br> 
 ``` Host `[::253.5.252.254%25~]` is invalid : the IP host is malformed ```  |  ``` l://[::253.5.252.254%25~] ```  <br> 
 ``` Host `%e7` is not a valid IDN host : a label or domain name contains disallowed characters. ```  |  ``` //%e7 ```  <br> 
 ``` Host `[::dabf:234.253.251.252%25-]` is invalid : the IP host is malformed ```  |  ``` //[::dabf:234.253.251.252%25-] ```  <br> 
 ``` Host `[::cbfd:ebcd:253.251.212.255%25.]` is invalid : the IP host is malformed ```  |  ``` //[::cbfd:ebcd:253.251.212.255%25.] ```  <br> 
 ``` Host `[::deff:cbbf:252.255.17.252%25.]` is invalid : the IP host is malformed ```  |  ``` //[::deff:cbbf:252.255.17.252%25.] ```  <br> 
 ``` Host `[::4def%25.]` is invalid : the IP host is malformed ```  |  ``` A://[::4def%25.] ```  <br> 
 ``` Host `[::acbb:faca:efad:254.255.157.251%25-]` is invalid : the IP host is malformed ```  |  ``` //[::acbb:faca:efad:254.255.157.251%25-] ```  <br> 
 ``` Host `[::ddfe:fcbe:cedb:6dfa%25.]` is invalid : the IP host is malformed ```  |  ``` q://[::ddfe:fcbe:cedb:6dfa%25.] ```  <br> 
 ``` Host `[::%25a]` is invalid : the IP host is malformed ```  |  ``` //[::%25a] ```  <br> 
 ``` Host `[::1beb:255.251.255.255%25~]` is invalid : the IP host is malformed ```  |  ``` N://[::1beb:255.251.255.255%25~] ```  <br> 
 ``` Host `[::abcd:253.252.3.250%25-]` is invalid : the IP host is malformed ```  |  ``` f://[::abcd:253.252.3.250%25-] ```  <br> 
 ``` Host `[::efca:dafe:fcce:2eda:bddb%25_]` is invalid : the IP host is malformed ```  |  ``` E://[::efca:dafe:fcce:2eda:bddb%25_] ```  <br> 
 ``` Host `[::fcce:bfbf:fcad:cddf:bdbb:cfca:5cad%25.]` is invalid : the IP host is malformed ```  |  ``` g://[::fcce:bfbf:fcad:cddf:bdbb:cfca:5cad%25.] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //%d2 ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` //N@ ```  <br> ``` //[8abb:ceea::acec:adeb:251.251.254.250%25~] ```  <br> ``` //[eafd:aaac:bfba:faac:cbec:cdad:57.250.253.254%25~] ```  <br> ``` //[dcad:dbaf:cbda:ddaa:cdec:aeed:251.222.255.250%25~] ```  <br> ``` //[cacc::ebcc:edcd:adec:caaf:253.252.163.254%25_] ```  <br> ``` //[bfdc:aabd:adbc:ffaa:acfb:cfda:bdfc:9bde] ```  <br> ``` //[::dfcf:deab:1.250.250.253%25_] ```  <br> ``` //[4bcc:bafd::bcad:254.255.255.252] ```  <br> ``` //[bbda:ecdd:bdbe:dbcf:fbfb:acee:7ede:bfab] ```  <br> ``` //[::bcfa:eaad:7efa%25~] ```  <br> ``` //[::afbf:ebed:ecfe:ffab:dbdc:252.25.253.252%25.] ```  <br> ``` //[::becc:fcba:dfde:ddfc:8eca%25~] ```  <br> ``` //@/o ```  <br> ``` ///@/q ```  <br> ``` //[edee::cbbe:afab:fabe:cefa:6cde:efdf] ```  <br> ``` //?' ```  <br> ``` //%e7 ```  <br> ``` //[::dabf:234.253.251.252%25-] ```  <br> ``` //[::cbfd:ebcd:253.251.212.255%25.] ```  <br> ``` //[::deff:cbbf:252.255.17.252%25.] ```  <br> ``` //[::acbb:faca:efad:254.255.157.251%25-] ```  <br> ``` //[bbcc::aaef:dccd:fdcb:afcc:6.253.250.253] ```  <br> ``` //[::%25a] ```  <br> ``` //[ebfc:eeea:efca:ecad:adbf:feee:251.251.251.9] ```  <br> ``` //[bede:cccf:ccdd:ddaf:efea:beec:250.81.254.252] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` H://[::dabf:edad:eabc:cbef:aacf:4bbb:afba] ```  <br> ``` H://[::220.255.252.252%25~] ```  <br> ``` h://[::eeca:facd:ddcf:209.255.251.254] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` p://* ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: i ```  |  ``` I://[::250.253.200.252%25.] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  <br> ``` W://= ```  <br> ``` W://[::afbb:253.236.252.255%25_] ```  <br> ``` w://[::250.251.168.251] ```  <br> ``` W://[::eebf:eacc:ebae:250.252.8.255] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` d://255.76.253.254 ```  <br> ``` d://[::bedb:adea:6fdf:bdfa] ```  <br> ``` d://[::deba:cead:dbba:250.255.255.56] ```  <br> ``` d://[eceb:ebaa:eeac:bffe:efce:fccd:252.255.252.0%25_] ```  <br> ``` d://[::abdf:bbcf:250.251.255.241%25-] ```  <br> ``` D://[ccbf:efac:fdbb:dcbb:eceb:dfed:1.252.253.254%25.] ```  <br> ``` D://[::dfcf:250.252.34.250%25~] ```  <br> ``` D://[faab:fdfc:ccda:feed:bdde:ffbb:252.255.231.254] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: c ```  |  ``` C:///' ```  <br> ``` C://[bcca:fdde:bedd:cbeb:afef:ecdc:251.56.254.251%25.] ```  <br> ``` c://[::baac:cffb:29.252.255.251] ```  <br> ``` c://[abeb::aaec:bfcd:ddae:dbab:254.250.255.8] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: y ```  |  ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  <br> ``` y://[::afdc:cfab:fedb:edbe:1eed%25-] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: b ```  |  ``` B://@/_ ```  <br> ``` b://[::eedd:cbba:dfeb:dafe:adef:253.205.253.254] ```  <br> ``` b:///%1b ```  <br> ``` B://[effd::efbd:eafd:edbf:ecee:254.6.250.251%25.] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q://[::aaad:cbfa:deea:36.255.253.254] ```  <br> ``` q://[1eac::fbbc%25-] ```  <br> ``` Q://132.255.254.251 ```  <br> ``` q://[::ddfe:fcbe:cedb:6dfa%25.] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` E://[::fddb:bafe:efcb:254.114.254.255] ```  <br> ``` E://[::250.253.251.197%25.] ```  <br> ``` e://[fbaf::eace:bbae:bcae:fade:dafa:9dce%25.] ```  <br> ``` E://[::efca:dafe:fcce:2eda:bddb%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: z ```  |  ``` z://[bcea::addb:cdfe:aefd:bffc:246.250.250.251%25~] ```  <br> ``` z://[::7afd:bacd:cbcf:251.250.255.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R://[::%25O] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: j ```  |  ``` j://[::0bbe:ccfc:bdec:252.250.252.255] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: x ```  |  ``` x://[bbcb:ecee:aeaf:eccb:bffc:ccdf:9dbc:cfea%25~] ```  <br> ``` x://[::%250] ```  <br> ``` X://[2ffb::] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` f://[2afb:dedc:ecea:bcfd:efea:feff:250.254.253.252] ```  <br> ``` F://:@ ```  <br> ``` f://[::abcd:253.252.3.250%25-] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` t://[adcf:feab:cceb:eacd:cbef:bfdd:23.253.252.255%25.] ```  <br> ``` T://[3ecd::deed:debf:fdbc:dadd:253.250.251.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: s ```  |  ``` S://[::efbb:badb:3.253.253.255%25.] ```  <br> ``` S://[dfbc:dbfa:cccb:dcbe:dbec:fbdd:253.21.254.250] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: k ```  |  ``` K://[vd._] ```  <br> ``` K://[4bad::baee:253.252.252.254%25-] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` v://[::eaff:2.250.253.252%25~] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` l://[::253.5.252.254%25~] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: g ```  |  ``` g://[fbee:fcaa:caca:dadf:abae:adce:253.252.91.250] ```  <br> ``` g://[::fcce:bfbf:fcad:cddf:bdbb:cfca:5cad%25.] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: a ```  |  ``` A://[::4def%25.] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: o ```  |  ``` O://[3efe::fbac:aabc:253.251.251.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` N://[::1beb:255.251.255.255%25~] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> ``` I://[::250.253.200.252%25.] ```  <br> ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //%d2 ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  <br> ``` B://@/_ ```  <br> ``` //N@ ```  <br> ``` //[8abb:ceea::acec:adeb:251.251.254.250%25~] ```  <br> ``` d://[eceb:ebaa:eeac:bffe:efce:fccd:252.255.252.0%25_] ```  <br> ``` C://[bcca:fdde:bedd:cbeb:afef:ecdc:251.56.254.251%25.] ```  <br> ``` //[eafd:aaac:bfba:faac:cbec:cdad:57.250.253.254%25~] ```  <br> ``` d://[::abdf:bbcf:250.251.255.241%25-] ```  <br> ``` //[dcad:dbaf:cbda:ddaa:cdec:aeed:251.222.255.250%25~] ```  <br> ``` //[cacc::ebcc:edcd:adec:caaf:253.252.163.254%25_] ```  <br> ``` z://[bcea::addb:cdfe:aefd:bffc:246.250.250.251%25~] ```  <br> ``` D://[ccbf:efac:fdbb:dcbb:eceb:dfed:1.252.253.254%25.] ```  <br> ``` R://[::%25O] ```  <br> ``` H://[::220.255.252.252%25~] ```  <br> ``` x://[bbcb:ecee:aeaf:eccb:bffc:ccdf:9dbc:cfea%25~] ```  <br> ``` t://[adcf:feab:cceb:eacd:cbef:bfdd:23.253.252.255%25.] ```  <br> ``` //[bfdc:aabd:adbc:ffaa:acfb:cfda:bdfc:9bde] ```  <br> ``` S://[::efbb:badb:3.253.253.255%25.] ```  <br> ``` K://[vd._] ```  <br> ``` v://[::eaff:2.250.253.252%25~] ```  <br> ``` //[::dfcf:deab:1.250.250.253%25_] ```  <br> ``` //[4bcc:bafd::bcad:254.255.255.252] ```  <br> ``` E://[::250.253.251.197%25.] ```  <br> ``` //[bbda:ecdd:bdbe:dbcf:fbfb:acee:7ede:bfab] ```  <br> ``` x://[::%250] ```  <br> ``` //[::bcfa:eaad:7efa%25~] ```  <br> ``` //[::afbf:ebed:ecfe:ffab:dbdc:252.25.253.252%25.] ```  <br> ``` //[::becc:fcba:dfde:ddfc:8eca%25~] ```  <br> ``` F://:@ ```  <br> ``` //@/o ```  <br> ``` D://[::dfcf:250.252.34.250%25~] ```  <br> ``` K://[4bad::baee:253.252.252.254%25-] ```  <br> ``` q://[1eac::fbbc%25-] ```  <br> ``` e://[fbaf::eace:bbae:bcae:fade:dafa:9dce%25.] ```  <br> ``` ///@/q ```  <br> ``` B://[effd::efbd:eafd:edbf:ecee:254.6.250.251%25.] ```  <br> ``` //[edee::cbbe:afab:fabe:cefa:6cde:efdf] ```  <br> ``` W://[::afbb:253.236.252.255%25_] ```  <br> ``` y://[::afdc:cfab:fedb:edbe:1eed%25-] ```  <br> ``` //?' ```  <br> ``` l://[::253.5.252.254%25~] ```  <br> ``` //%e7 ```  <br> ``` //[::dabf:234.253.251.252%25-] ```  <br> ``` //[::cbfd:ebcd:253.251.212.255%25.] ```  <br> ``` //[::deff:cbbf:252.255.17.252%25.] ```  <br> ``` A://[::4def%25.] ```  <br> ``` //[::acbb:faca:efad:254.255.157.251%25-] ```  <br> ``` //[bbcc::aaef:dccd:fdcb:afcc:6.253.250.253] ```  <br> ``` q://[::ddfe:fcbe:cedb:6dfa%25.] ```  <br> ``` //[::%25a] ```  <br> ``` N://[::1beb:255.251.255.255%25~] ```  <br> ``` f://[::abcd:253.252.3.250%25-] ```  <br> ``` //[ebfc:eeea:efca:ecad:adbf:feee:251.251.251.9] ```  <br> ``` //[bede:cccf:ccdd:ddaf:efea:beec:250.81.254.252] ```  <br> ``` E://[::efca:dafe:fcce:2eda:bddb%25_] ```  <br> ``` g://[::fcce:bfbf:fcad:cddf:bdbb:cfca:5cad%25.] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //%d2 ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` //N@ ```  <br> ``` //[8abb:ceea::acec:adeb:251.251.254.250%25~] ```  <br> ``` //[eafd:aaac:bfba:faac:cbec:cdad:57.250.253.254%25~] ```  <br> ``` //[dcad:dbaf:cbda:ddaa:cdec:aeed:251.222.255.250%25~] ```  <br> ``` //[cacc::ebcc:edcd:adec:caaf:253.252.163.254%25_] ```  <br> ``` //[bfdc:aabd:adbc:ffaa:acfb:cfda:bdfc:9bde] ```  <br> ``` //[::dfcf:deab:1.250.250.253%25_] ```  <br> ``` //[4bcc:bafd::bcad:254.255.255.252] ```  <br> ``` //[bbda:ecdd:bdbe:dbcf:fbfb:acee:7ede:bfab] ```  <br> ``` //[::bcfa:eaad:7efa%25~] ```  <br> ``` //[::afbf:ebed:ecfe:ffab:dbdc:252.25.253.252%25.] ```  <br> ``` //[::becc:fcba:dfde:ddfc:8eca%25~] ```  <br> ``` //@/o ```  <br> ``` ///@/q ```  <br> ``` //[edee::cbbe:afab:fabe:cefa:6cde:efdf] ```  <br> ``` //?' ```  <br> ``` //%e7 ```  <br> ``` //[::dabf:234.253.251.252%25-] ```  <br> ``` //[::cbfd:ebcd:253.251.212.255%25.] ```  <br> ``` //[::deff:cbbf:252.255.17.252%25.] ```  <br> ``` //[::acbb:faca:efad:254.255.157.251%25-] ```  <br> ``` //[bbcc::aaef:dccd:fdcb:afcc:6.253.250.253] ```  <br> ``` //[::%25a] ```  <br> ``` //[ebfc:eeea:efca:ecad:adbf:feee:251.251.251.9] ```  <br> ``` //[bede:cccf:ccdd:ddaf:efea:beec:250.81.254.252] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` I://[::250.253.200.252%25.] ```  <br> ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  <br> ``` //[8abb:ceea::acec:adeb:251.251.254.250%25~] ```  <br> ``` d://[eceb:ebaa:eeac:bffe:efce:fccd:252.255.252.0%25_] ```  <br> ``` C://[bcca:fdde:bedd:cbeb:afef:ecdc:251.56.254.251%25.] ```  <br> ``` //[eafd:aaac:bfba:faac:cbec:cdad:57.250.253.254%25~] ```  <br> ``` d://[::abdf:bbcf:250.251.255.241%25-] ```  <br> ``` //[dcad:dbaf:cbda:ddaa:cdec:aeed:251.222.255.250%25~] ```  <br> ``` //[cacc::ebcc:edcd:adec:caaf:253.252.163.254%25_] ```  <br> ``` z://[bcea::addb:cdfe:aefd:bffc:246.250.250.251%25~] ```  <br> ``` D://[ccbf:efac:fdbb:dcbb:eceb:dfed:1.252.253.254%25.] ```  <br> ``` R://[::%25O] ```  <br> ``` H://[::220.255.252.252%25~] ```  <br> ``` x://[bbcb:ecee:aeaf:eccb:bffc:ccdf:9dbc:cfea%25~] ```  <br> ``` t://[adcf:feab:cceb:eacd:cbef:bfdd:23.253.252.255%25.] ```  <br> ``` //[bfdc:aabd:adbc:ffaa:acfb:cfda:bdfc:9bde] ```  <br> ``` S://[::efbb:badb:3.253.253.255%25.] ```  <br> ``` v://[::eaff:2.250.253.252%25~] ```  <br> ``` //[::dfcf:deab:1.250.250.253%25_] ```  <br> ``` //[4bcc:bafd::bcad:254.255.255.252] ```  <br> ``` E://[::250.253.251.197%25.] ```  <br> ``` //[bbda:ecdd:bdbe:dbcf:fbfb:acee:7ede:bfab] ```  <br> ``` x://[::%250] ```  <br> ``` //[::bcfa:eaad:7efa%25~] ```  <br> ``` //[::afbf:ebed:ecfe:ffab:dbdc:252.25.253.252%25.] ```  <br> ``` //[::becc:fcba:dfde:ddfc:8eca%25~] ```  <br> ``` D://[::dfcf:250.252.34.250%25~] ```  <br> ``` K://[4bad::baee:253.252.252.254%25-] ```  <br> ``` q://[1eac::fbbc%25-] ```  <br> ``` e://[fbaf::eace:bbae:bcae:fade:dafa:9dce%25.] ```  <br> ``` B://[effd::efbd:eafd:edbf:ecee:254.6.250.251%25.] ```  <br> ``` //[edee::cbbe:afab:fabe:cefa:6cde:efdf] ```  <br> ``` W://[::afbb:253.236.252.255%25_] ```  <br> ``` y://[::afdc:cfab:fedb:edbe:1eed%25-] ```  <br> ``` l://[::253.5.252.254%25~] ```  <br> ``` //[::dabf:234.253.251.252%25-] ```  <br> ``` //[::cbfd:ebcd:253.251.212.255%25.] ```  <br> ``` //[::deff:cbbf:252.255.17.252%25.] ```  <br> ``` A://[::4def%25.] ```  <br> ``` //[::acbb:faca:efad:254.255.157.251%25-] ```  <br> ``` //[bbcc::aaef:dccd:fdcb:afcc:6.253.250.253] ```  <br> ``` q://[::ddfe:fcbe:cedb:6dfa%25.] ```  <br> ``` //[::%25a] ```  <br> ``` N://[::1beb:255.251.255.255%25~] ```  <br> ``` f://[::abcd:253.252.3.250%25-] ```  <br> ``` //[ebfc:eeea:efca:ecad:adbf:feee:251.251.251.9] ```  <br> ``` //[bede:cccf:ccdd:ddaf:efea:beec:250.81.254.252] ```  <br> ``` E://[::efca:dafe:fcce:2eda:bddb%25_] ```  <br> ``` g://[::fcce:bfbf:fcad:cddf:bdbb:cfca:5cad%25.] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::dbac:edbe:2.253.250.254] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::254.9.252.252] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` H://[::dabf:edad:eabc:cbef:aacf:4bbb:afba] ```  | Java <br>
 ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` ///@/%1d ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` p://* ```  | Java <br>
 ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[6bef::bbbc:255.252.251.255] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` ///@/%e7 ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` I://[::250.253.200.252%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //%d2 ```  | firefox <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` d://255.76.253.254 ```  | Java <br>
 ``` C:///' ```  | Java <br>
 ``` W://= ```  | Java <br>
 ``` //[::abdd:addc:255.254.1.252%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` d://[::bedb:adea:6fdf:bdfa] ```  | Java <br>
 ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` B://@/_ ```  | Java <br>JavaScriptwhatwg-url <br>
 ``` d://[::deba:cead:dbba:250.255.255.56] ```  | Java <br>
 ``` //N@ ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` Q://[::aaad:cbfa:deea:36.255.253.254] ```  | Java <br>
 ``` //[8abb:ceea::acec:adeb:251.251.254.250%25~] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` d://[eceb:ebaa:eeac:bffe:efce:fccd:252.255.252.0%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` C://[bcca:fdde:bedd:cbeb:afef:ecdc:251.56.254.251%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[eafd:aaac:bfba:faac:cbec:cdad:57.250.253.254%25~] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` d://[::abdf:bbcf:250.251.255.241%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[dcad:dbaf:cbda:ddaa:cdec:aeed:251.222.255.250%25~] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[cacc::ebcc:edcd:adec:caaf:253.252.163.254%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` E://[::fddb:bafe:efcb:254.114.254.255] ```  | Java <br>
 ``` c://[::baac:cffb:29.252.255.251] ```  | Java <br>
 ``` z://[bcea::addb:cdfe:aefd:bffc:246.250.250.251%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` D://[ccbf:efac:fdbb:dcbb:eceb:dfed:1.252.253.254%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` R://[::%25O] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` b://[::eedd:cbba:dfeb:dafe:adef:253.205.253.254] ```  | C <br>Java <br>
 ``` H://[::220.255.252.252%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` j://[::0bbe:ccfc:bdec:252.250.252.255] ```  | Java <br>
 ``` x://[bbcb:ecee:aeaf:eccb:bffc:ccdf:9dbc:cfea%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` f://[2afb:dedc:ecea:bcfd:efea:feff:250.254.253.252] ```  | Java <br>
 ``` t://[adcf:feab:cceb:eacd:cbef:bfdd:23.253.252.255%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[bfdc:aabd:adbc:ffaa:acfb:cfda:bdfc:9bde] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` S://[::efbb:badb:3.253.253.255%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` K://[vd._] ```  | Java <br>JavaScriptwhatwg-url <br>
 ``` v://[::eaff:2.250.253.252%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::dfcf:deab:1.250.250.253%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[4bcc:bafd::bcad:254.255.255.252] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` E://[::250.253.251.197%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[bbda:ecdd:bdbe:dbcf:fbfb:acee:7ede:bfab] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` x://[::%250] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::bcfa:eaad:7efa%25~] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::afbf:ebed:ecfe:ffab:dbdc:252.25.253.252%25.] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::becc:fcba:dfde:ddfc:8eca%25~] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` b:///%1b ```  | Java <br>
 ``` F://:@ ```  | Java <br>JavaScriptwhatwg-url <br>
 ``` //@/o ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` D://[::dfcf:250.252.34.250%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` K://[4bad::baee:253.252.252.254%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` q://[1eac::fbbc%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` D://[faab:fdfc:ccda:feed:bdde:ffbb:252.255.231.254] ```  | Java <br>
 ``` S://[dfbc:dbfa:cccb:dcbe:dbec:fbdd:253.21.254.250] ```  | Java <br>
 ``` e://[fbaf::eace:bbae:bcae:fade:dafa:9dce%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` z://[::7afd:bacd:cbcf:251.250.255.253] ```  | Java <br>
 ``` ///@/q ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` B://[effd::efbd:eafd:edbf:ecee:254.6.250.251%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[edee::cbbe:afab:fabe:cefa:6cde:efdf] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` W://[::afbb:253.236.252.255%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` y://[::afdc:cfab:fedb:edbe:1eed%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //?' ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` l://[::253.5.252.254%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //%e7 ```  | firefox <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` g://[fbee:fcaa:caca:dadf:abae:adce:253.252.91.250] ```  | Java <br>
 ``` T://[3ecd::deed:debf:fdbc:dadd:253.250.251.253] ```  | Java <br>
 ``` //[::dabf:234.253.251.252%25-] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` X://[2ffb::] ```  | Java <br>
 ``` //[::cbfd:ebcd:253.251.212.255%25.] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` w://[::250.251.168.251] ```  | Java <br>
 ``` //[::deff:cbbf:252.255.17.252%25.] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` A://[::4def%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::acbb:faca:efad:254.255.157.251%25-] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[bbcc::aaef:dccd:fdcb:afcc:6.253.250.253] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` c://[abeb::aaec:bfcd:ddae:dbab:254.250.255.8] ```  | Java <br>
 ``` Q://132.255.254.251 ```  | Java <br>
 ``` q://[::ddfe:fcbe:cedb:6dfa%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` O://[3efe::fbac:aabc:253.251.251.253] ```  | Java <br>
 ``` //[::%25a] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` N://[::1beb:255.251.255.255%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` f://[::abcd:253.252.3.250%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[ebfc:eeea:efca:ecad:adbf:feee:251.251.251.9] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` W://[::eebf:eacc:ebae:250.252.8.255] ```  | Java <br>
 ``` //[bede:cccf:ccdd:ddaf:efea:beec:250.81.254.252] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` E://[::efca:dafe:fcce:2eda:bddb%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` h://[::eeca:facd:ddcf:209.255.251.254] ```  | C <br>Java <br>
 ``` g://[::fcce:bfbf:fcad:cddf:bdbb:cfca:5cad%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 37 | 37 | 0
chromium | 37 | 37 | 0

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

