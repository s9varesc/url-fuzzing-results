# Results 

Total number of URLs: 24

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 18.46% 
Cpp | 0 | 0 | 17.6% 
Go | 0 | 0 | 71.4% 
Python | 0 | 0 | 32.0% 
C | 7 | 1 | 38.9% 
PHP | 8 | 8 | 57.76% 
Ruby | 12 | 1 | 68.91% 
firefox | 13 | 1 | 48.1% 
chromium | 13 | 1 | 13.72% 
JavaScriptwhatwg-url | 17 | 1 | 34.58% 
Java | 24 | 9 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //%d2 ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` //N@ ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` I://[::250.253.200.252%25.] ```  <br> ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  <br> 


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


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //%d2 ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` //N@ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` H://[::dabf:edad:eabc:cbef:aacf:4bbb:afba] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` p://* ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: i ```  |  ``` I://[::250.253.200.252%25.] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  <br> ``` W://= ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` d://255.76.253.254 ```  <br> ``` d://[::bedb:adea:6fdf:bdfa] ```  <br> ``` d://[::deba:cead:dbba:250.255.255.56] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: c ```  |  ``` C:///' ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: y ```  |  ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: b ```  |  ``` B://@/_ ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> ``` I://[::250.253.200.252%25.] ```  <br> ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //%d2 ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  <br> ``` B://@/_ ```  <br> ``` //N@ ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //%d2 ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` //N@ ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` I://[::250.253.200.252%25.] ```  <br> ``` W://[fcbb:dcef:ddab:bfba:cdbb:beef:252.254.77.253%25-] ```  <br> ``` //[::aded:cffa:dcde:252.255.224.254%25_] ```  <br> ``` //[adcc::ceda:ddfb:bdeb:efbf:252.252.232.250] ```  <br> ``` //[::abdd:addc:255.254.1.252%25_] ```  <br> ``` Y://[dbfb:dfcd:caaa:aceb:ecaa:aafa:255.255.2.253%25~] ```  <br> 


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

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 13 | 13 | 0
chromium | 13 | 13 | 0

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

