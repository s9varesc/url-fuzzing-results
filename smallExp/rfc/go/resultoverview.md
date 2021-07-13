# Results 

Total number of URLs: 60

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
Cpp | 0 | 0 | 18.1% 
Python | 0 | 0 | 33.0% 
JavaScripturijs | 1 | 1 | 18.37% 
Go | 1 | 1 | 74.6% 
PHP | 24 | 24 | 49.14% 
C | 26 | 1 | 42.9% 
firefox | 40 | 1 | 48.1% 
chromium | 40 | 1 | 13.72% 
Ruby | 44 | 1 | 68.91% 
JavaScriptwhatwg-url | 51 | 1 | 34.28% 
Java | 60 | 15 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[::aebc:cbbb:edbc:250.252.1.252] ```  <br> ``` //[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-] ```  <br> ``` //[::5bde:bfec%25~] ```  <br> ``` //%4a ```  <br> ``` //[ecfd::dbad:aadf:cfde:fdae:eeee:9dbb] ```  <br> ``` //[bbfb::eacc:ccff:cfef:cced:255.250.152.255] ```  <br> ``` //[::eead:dfaa:235.254.255.250%25-] ```  <br> ``` //[::cdad:fdfb:253.250.152.254] ```  <br> ``` //252.253.250.3 ```  <br> ``` //[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.] ```  <br> ``` //[vc.t] ```  <br> ``` //[::cfab:cbcf:eccf:251.250.254.64] ```  <br> ``` //?%f8 ```  <br> ``` //?%be ```  <br> ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::254.250.183.252%25~] ```  <br> ``` //[7ccc:fefb::ffae] ```  <br> ``` //[::252.251.29.254%25_] ```  <br> ``` //[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[va.Z] ```  <br> ``` //[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` //[::253.255.119.250] ```  <br> ``` //%a6@ ```  <br> ``` //[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> ``` //[2cea:dbdf::%25.] ```  <br> ``` //[3fcb:eaea:dadf:eacb:cfcb:ceac:254.252.252.255] ```  <br> ``` //[::250.251.204.253] ```  <br> ``` //48.253.255.252 ```  <br> ``` //?- ```  <br> ``` //[dbca::fcfc:abea:daad:dbfe:255.250.254.1] ```  <br> ``` //[cebd:cfed:dafe:fbff:dbed:aabc:3cdd:dcae] ```  <br> ``` //[::cafd:153.253.252.255] ```  <br> ``` //[ccfb::dfec:bebe:effc:cefc:255.250.250.58] ```  <br> ``` //[::cfbc:adce:adee:250.251.250.93%25-] ```  <br> ``` //[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_] ```  <br> ``` //[ecbf::5eaf:daba:edae:eeaa:251.252.250.254] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> ``` //[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-] ```  <br> ``` //[::5bde:bfec%25~] ```  <br> ``` l://[fcbe:ddac:cdcc:cbad:aebc:afda:250.255.250.224%25-] ```  <br> ``` //[::eead:dfaa:235.254.255.250%25-] ```  <br> ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> ``` H://[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~] ```  <br> ``` w://[::fcee:ebdb:cbec:251.253.191.252%25~] ```  <br> ``` //[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.] ```  <br> ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> ``` r://[::ddbf:ebcb:dfef:0.254.250.253%25~] ```  <br> ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::254.250.183.252%25~] ```  <br> ``` //[::252.251.29.254%25_] ```  <br> ``` //[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.] ```  <br> ``` r://[::cbdd:250.89.251.253%25.] ```  <br> ``` //[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` //[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> ``` //[2cea:dbdf::%25.] ```  <br> ``` //[::250.251.204.253] ```  <br> ``` P://[ceed::cddd:dfbb:ffbb:ddcb:253.254.250.19%25~] ```  <br> ``` //[::cfbc:adce:adee:250.251.250.93%25-] ```  <br> ``` //[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_] ```  <br> ``` V://[4eed::fcfe:ecde:edcf:fccc:252.252.250.252%25_] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 
 ``` URI malformed ```  |  ``` //%a6@ ```  <br> 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `[::daef:dfdb:ebfb:252.252.251.7%25~]` is invalid : the IP host is malformed ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> 
 ``` Host `[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-]` is invalid : the IP host is malformed ```  |  ``` //[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-] ```  <br> 
 ``` Host `[::5bde:bfec%25~]` is invalid : the IP host is malformed ```  |  ``` //[::5bde:bfec%25~] ```  <br> 
 ``` Host `[fcbe:ddac:cdcc:cbad:aebc:afda:250.255.250.224%25-]` is invalid : the IP host is malformed ```  |  ``` l://[fcbe:ddac:cdcc:cbad:aebc:afda:250.255.250.224%25-] ```  <br> 
 ``` Host `[::eead:dfaa:235.254.255.250%25-]` is invalid : the IP host is malformed ```  |  ``` //[::eead:dfaa:235.254.255.250%25-] ```  <br> 
 ``` Host `[5dbf:faed::badf:255.250.252.251%25_]` is invalid : the IP host is malformed ```  |  ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> 
 ``` Host `[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~]` is invalid : the IP host is malformed ```  |  ``` H://[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~] ```  <br> 
 ``` Host `[::fcee:ebdb:cbec:251.253.191.252%25~]` is invalid : the IP host is malformed ```  |  ``` w://[::fcee:ebdb:cbec:251.253.191.252%25~] ```  <br> 
 ``` Host `[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.]` is invalid : the IP host is malformed ```  |  ``` //[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.] ```  <br> 
 ``` Host `[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~]` is invalid : the IP host is malformed ```  |  ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> 
 ``` Host `[::ddbf:ebcb:dfef:0.254.250.253%25~]` is invalid : the IP host is malformed ```  |  ``` r://[::ddbf:ebcb:dfef:0.254.250.253%25~] ```  <br> 
 ``` Host `[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_]` is invalid : the IP host is malformed ```  |  ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> 
 ``` Host `[::254.250.183.252%25~]` is invalid : the IP host is malformed ```  |  ``` //[::254.250.183.252%25~] ```  <br> 
 ``` Host `[::252.251.29.254%25_]` is invalid : the IP host is malformed ```  |  ``` //[::252.251.29.254%25_] ```  <br> 
 ``` Host `[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.]` is invalid : the IP host is malformed ```  |  ``` //[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.] ```  <br> 
 ``` Host `[::cbdd:250.89.251.253%25.]` is invalid : the IP host is malformed ```  |  ``` r://[::cbdd:250.89.251.253%25.] ```  <br> 
 ``` Host `[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_]` is invalid : the IP host is malformed ```  |  ``` //[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_] ```  <br> 
 ``` Host `[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_]` is invalid : the IP host is malformed ```  |  ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> 
 ``` Host `[::dbca:eafc:acca:255.255.254.243%25_]` is invalid : the IP host is malformed ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 
 ``` Host `[2cea:dbdf::%25.]` is invalid : the IP host is malformed ```  |  ``` //[2cea:dbdf::%25.] ```  <br> 
 ``` Host `[ceed::cddd:dfbb:ffbb:ddcb:253.254.250.19%25~]` is invalid : the IP host is malformed ```  |  ``` P://[ceed::cddd:dfbb:ffbb:ddcb:253.254.250.19%25~] ```  <br> 
 ``` Host `[::cfbc:adce:adee:250.251.250.93%25-]` is invalid : the IP host is malformed ```  |  ``` //[::cfbc:adce:adee:250.251.250.93%25-] ```  <br> 
 ``` Host `[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_]` is invalid : the IP host is malformed ```  |  ``` //[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_] ```  <br> 
 ``` Host `[4eed::fcfe:ecde:edcf:fccc:252.252.250.252%25_]` is invalid : the IP host is malformed ```  |  ``` V://[4eed::fcfe:ecde:edcf:fccc:252.252.250.252%25_] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: j ```  |  ``` J:///%2e ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: i ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[::aebc:cbbb:edbc:250.252.1.252] ```  <br> ``` //[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-] ```  <br> ``` //[::5bde:bfec%25~] ```  <br> ``` //%4a ```  <br> ``` //[ecfd::dbad:aadf:cfde:fdae:eeee:9dbb] ```  <br> ``` //[bbfb::eacc:ccff:cfef:cced:255.250.152.255] ```  <br> ``` //[::eead:dfaa:235.254.255.250%25-] ```  <br> ``` //[::cdad:fdfb:253.250.152.254] ```  <br> ``` //252.253.250.3 ```  <br> ``` //[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.] ```  <br> ``` //[vc.t] ```  <br> ``` //[::cfab:cbcf:eccf:251.250.254.64] ```  <br> ``` //?%f8 ```  <br> ``` //?%be ```  <br> ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::254.250.183.252%25~] ```  <br> ``` //[7ccc:fefb::ffae] ```  <br> ``` //[::252.251.29.254%25_] ```  <br> ``` //[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[va.Z] ```  <br> ``` //[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` //[::253.255.119.250] ```  <br> ``` //%a6@ ```  <br> ``` //[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> ``` //[2cea:dbdf::%25.] ```  <br> ``` //[3fcb:eaea:dadf:eacb:cfcb:ceac:254.252.252.255] ```  <br> ``` //[::250.251.204.253] ```  <br> ``` //48.253.255.252 ```  <br> ``` //?- ```  <br> ``` //[dbca::fcfc:abea:daad:dbfe:255.250.254.1] ```  <br> ``` //[cebd:cfed:dafe:fbff:dbed:aabc:3cdd:dcae] ```  <br> ``` //[::cafd:153.253.252.255] ```  <br> ``` //[ccfb::dfec:bebe:effc:cefc:255.250.250.58] ```  <br> ``` //[::cfbc:adce:adee:250.251.250.93%25-] ```  <br> ``` //[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_] ```  <br> ``` //[ecbf::5eaf:daba:edae:eeaa:251.252.250.254] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` l://[fcbe:ddac:cdcc:cbad:aebc:afda:250.255.250.224%25-] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` f:///+ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R://[::ccce:dcec:4.254.252.250] ```  <br> ``` r://[::ddbf:ebcb:dfef:0.254.250.253%25~] ```  <br> ``` r://[::cbdd:250.89.251.253%25.] ```  <br> ``` R:///l ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` H://[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` w://[::fcee:ebdb:cbec:251.253.191.252%25~] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: m ```  |  ``` M://[bbdb::eeba:bdee:fbde:efdc:250.254.250.219] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: a ```  |  ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` D://[::254.72.251.250] ```  <br> ``` d://[::bafe:aabf:251.250.228.255] ```  <br> ``` d://[::8ceb:cfcd] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: u ```  |  ``` U://[fcaa::aaaa:ebeb:dbfa:aeba:252.5.251.250] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` P://[ceed::cddd:dfbb:ffbb:ddcb:253.254.250.19%25~] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` V://[4eed::fcfe:ecde:edcf:fccc:252.252.250.252%25_] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse : invalid URL escape "%4a" ```  |  ``` //%4a ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> ``` //[::aebc:cbbb:edbc:250.252.1.252] ```  <br> ``` //[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-] ```  <br> ``` //[::5bde:bfec%25~] ```  <br> ``` //%4a ```  <br> ``` l://[fcbe:ddac:cdcc:cbad:aebc:afda:250.255.250.224%25-] ```  <br> ``` //[ecfd::dbad:aadf:cfde:fdae:eeee:9dbb] ```  <br> ``` //[bbfb::eacc:ccff:cfef:cced:255.250.152.255] ```  <br> ``` //[::eead:dfaa:235.254.255.250%25-] ```  <br> ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> ``` H://[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~] ```  <br> ``` w://[::fcee:ebdb:cbec:251.253.191.252%25~] ```  <br> ``` //[::cdad:fdfb:253.250.152.254] ```  <br> ``` //252.253.250.3 ```  <br> ``` //[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.] ```  <br> ``` //[vc.t] ```  <br> ``` //[::cfab:cbcf:eccf:251.250.254.64] ```  <br> ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> ``` //?%f8 ```  <br> ``` //?%be ```  <br> ``` r://[::ddbf:ebcb:dfef:0.254.250.253%25~] ```  <br> ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::254.250.183.252%25~] ```  <br> ``` //[7ccc:fefb::ffae] ```  <br> ``` //[::252.251.29.254%25_] ```  <br> ``` //[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[va.Z] ```  <br> ``` r://[::cbdd:250.89.251.253%25.] ```  <br> ``` //[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` //[::253.255.119.250] ```  <br> ``` //%a6@ ```  <br> ``` //[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> ``` //[2cea:dbdf::%25.] ```  <br> ``` //[3fcb:eaea:dadf:eacb:cfcb:ceac:254.252.252.255] ```  <br> ``` //[::250.251.204.253] ```  <br> ``` //48.253.255.252 ```  <br> ``` //?- ```  <br> ``` //[dbca::fcfc:abea:daad:dbfe:255.250.254.1] ```  <br> ``` //[cebd:cfed:dafe:fbff:dbed:aabc:3cdd:dcae] ```  <br> ``` P://[ceed::cddd:dfbb:ffbb:ddcb:253.254.250.19%25~] ```  <br> ``` //[::cafd:153.253.252.255] ```  <br> ``` //[ccfb::dfec:bebe:effc:cefc:255.250.250.58] ```  <br> ``` //[::cfbc:adce:adee:250.251.250.93%25-] ```  <br> ``` //[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_] ```  <br> ``` //[ecbf::5eaf:daba:edae:eeaa:251.252.250.254] ```  <br> ``` V://[4eed::fcfe:ecde:edcf:fccc:252.252.250.252%25_] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[::aebc:cbbb:edbc:250.252.1.252] ```  <br> ``` //[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-] ```  <br> ``` //[::5bde:bfec%25~] ```  <br> ``` //%4a ```  <br> ``` //[ecfd::dbad:aadf:cfde:fdae:eeee:9dbb] ```  <br> ``` //[bbfb::eacc:ccff:cfef:cced:255.250.152.255] ```  <br> ``` //[::eead:dfaa:235.254.255.250%25-] ```  <br> ``` //[::cdad:fdfb:253.250.152.254] ```  <br> ``` //252.253.250.3 ```  <br> ``` //[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.] ```  <br> ``` //[vc.t] ```  <br> ``` //[::cfab:cbcf:eccf:251.250.254.64] ```  <br> ``` //?%f8 ```  <br> ``` //?%be ```  <br> ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::254.250.183.252%25~] ```  <br> ``` //[7ccc:fefb::ffae] ```  <br> ``` //[::252.251.29.254%25_] ```  <br> ``` //[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[va.Z] ```  <br> ``` //[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` //[::253.255.119.250] ```  <br> ``` //%a6@ ```  <br> ``` //[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> ``` //[2cea:dbdf::%25.] ```  <br> ``` //[3fcb:eaea:dadf:eacb:cfcb:ceac:254.252.252.255] ```  <br> ``` //[::250.251.204.253] ```  <br> ``` //48.253.255.252 ```  <br> ``` //?- ```  <br> ``` //[dbca::fcfc:abea:daad:dbfe:255.250.254.1] ```  <br> ``` //[cebd:cfed:dafe:fbff:dbed:aabc:3cdd:dcae] ```  <br> ``` //[::cafd:153.253.252.255] ```  <br> ``` //[ccfb::dfec:bebe:effc:cefc:255.250.250.58] ```  <br> ``` //[::cfbc:adce:adee:250.251.250.93%25-] ```  <br> ``` //[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_] ```  <br> ``` //[ecbf::5eaf:daba:edae:eeaa:251.252.250.254] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> ``` //[::aebc:cbbb:edbc:250.252.1.252] ```  <br> ``` //[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-] ```  <br> ``` //[::5bde:bfec%25~] ```  <br> ``` l://[fcbe:ddac:cdcc:cbad:aebc:afda:250.255.250.224%25-] ```  <br> ``` //[ecfd::dbad:aadf:cfde:fdae:eeee:9dbb] ```  <br> ``` //[bbfb::eacc:ccff:cfef:cced:255.250.152.255] ```  <br> ``` //[::eead:dfaa:235.254.255.250%25-] ```  <br> ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> ``` H://[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~] ```  <br> ``` w://[::fcee:ebdb:cbec:251.253.191.252%25~] ```  <br> ``` //[::cdad:fdfb:253.250.152.254] ```  <br> ``` //[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.] ```  <br> ``` //[vc.t] ```  <br> ``` //[::cfab:cbcf:eccf:251.250.254.64] ```  <br> ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> ``` r://[::ddbf:ebcb:dfef:0.254.250.253%25~] ```  <br> ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::254.250.183.252%25~] ```  <br> ``` //[7ccc:fefb::ffae] ```  <br> ``` //[::252.251.29.254%25_] ```  <br> ``` //[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[va.Z] ```  <br> ``` r://[::cbdd:250.89.251.253%25.] ```  <br> ``` //[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` //[::253.255.119.250] ```  <br> ``` //[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> ``` //[2cea:dbdf::%25.] ```  <br> ``` //[3fcb:eaea:dadf:eacb:cfcb:ceac:254.252.252.255] ```  <br> ``` //[::250.251.204.253] ```  <br> ``` //[dbca::fcfc:abea:daad:dbfe:255.250.254.1] ```  <br> ``` //[cebd:cfed:dafe:fbff:dbed:aabc:3cdd:dcae] ```  <br> ``` P://[ceed::cddd:dfbb:ffbb:ddcb:253.254.250.19%25~] ```  <br> ``` //[::cafd:153.253.252.255] ```  <br> ``` //[ccfb::dfec:bebe:effc:cefc:255.250.250.58] ```  <br> ``` //[::cfbc:adce:adee:250.251.250.93%25-] ```  <br> ``` //[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_] ```  <br> ``` //[ecbf::5eaf:daba:edae:eeaa:251.252.250.254] ```  <br> ``` V://[4eed::fcfe:ecde:edcf:fccc:252.252.250.252%25_] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` J:///%2e ```  | Java <br>
 ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::aebc:cbbb:edbc:250.252.1.252] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[daba:dcfa:cfca:adad:cacc:eabd:250.205.253.251%25-] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::5bde:bfec%25~] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //%4a ```  | firefox <br>Java <br>Go <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` l://[fcbe:ddac:cdcc:cbad:aebc:afda:250.255.250.224%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` f:///+ ```  | Java <br>
 ``` //[ecfd::dbad:aadf:cfde:fdae:eeee:9dbb] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[bbfb::eacc:ccff:cfef:cced:255.250.152.255] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` R://[::ccce:dcec:4.254.252.250] ```  | Java <br>
 ``` //[::eead:dfaa:235.254.255.250%25-] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` H://[::bfca:caee:cccd:dfaa:ebff:251.251.253.212%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` w://[::fcee:ebdb:cbec:251.253.191.252%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::cdad:fdfb:253.250.152.254] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` M://[bbdb::eeba:bdee:fbde:efdc:250.254.250.219] ```  | Java <br>
 ``` //252.253.250.3 ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` //[ceda:dabe:cced:dfaa:eaff:bbea:31.251.250.253%25.] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[vc.t] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::cfab:cbcf:eccf:251.250.254.64] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //?%f8 ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` //?%be ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` D://[::254.72.251.250] ```  | Java <br>
 ``` r://[::ddbf:ebcb:dfef:0.254.250.253%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::deca:eabe:bbdc:251.252.90.251] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::254.250.183.252%25~] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[7ccc:fefb::ffae] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::252.251.29.254%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::cbae:aaec:caab:eeeb:abfe:251.255.250.204%25.] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::fbec:39.252.254.252] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[va.Z] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` r://[::cbdd:250.89.251.253%25.] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[ebde:baee:debf:deaa:bcdb:bfee:48.253.254.252%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::253.255.119.250] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //%a6@ ```  | firefox <br>JavaScripturijs <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` //[::fcfe:eaaf:acdd:beba:cdeb:209.255.252.254] ```  | firefox <br>C <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` U://[fcaa::aaaa:ebeb:dbfa:aeba:252.5.251.250] ```  | Java <br>
 ``` //[2cea:dbdf::%25.] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` d://[::bafe:aabf:251.250.228.255] ```  | Java <br>
 ``` //[3fcb:eaea:dadf:eacb:cfcb:ceac:254.252.252.255] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::250.251.204.253] ```  | firefox <br>C <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` R:///l ```  | Java <br>
 ``` //48.253.255.252 ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` //?- ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` //[dbca::fcfc:abea:daad:dbfe:255.250.254.1] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[cebd:cfed:dafe:fbff:dbed:aabc:3cdd:dcae] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` P://[ceed::cddd:dfbb:ffbb:ddcb:253.254.250.19%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::cafd:153.253.252.255] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[ccfb::dfec:bebe:effc:cefc:255.250.250.58] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` d://[::8ceb:cfcd] ```  | Java <br>
 ``` //[::cfbc:adce:adee:250.251.250.93%25-] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[edaa::eefd:caeb:feec:ceef:250.250.38.251%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[ecbf::5eaf:daba:edae:eeaa:251.252.250.254] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` V://[4eed::fcfe:ecde:edcf:fccc:252.252.250.252%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 40 | 40 | 0
chromium | 40 | 40 | 0

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

