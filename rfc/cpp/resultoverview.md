# Results 

Total number of URLs: 10

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 17.94% 
Cpp | 0 | 0 | 17.2% 
Go | 0 | 0 | 68.5% 
Python | 0 | 0 | 32.0% 
C | 2 | 1 | 34.2% 
PHP | 2 | 2 | 46.55% 
Ruby | 6 | 1 | 68.91% 
firefox | 8 | 1 | 48.1% 
JavaScriptwhatwg-url | 8 | 1 | 26.83% 
chromium | 8 | 1 | 13.72% 
Java | 10 | 3 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> 


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


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` H://[::dabf:edad:eabc:cbef:aacf:4bbb:afba] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` p://* ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` ///@/%1d ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> ``` ///@/%e7 ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[fbdd:bbfb:bdfe:cafd:efbe:cddd:2aae:fddc%25-] ```  <br> ``` //[::dbac:edbe:2.253.250.254] ```  <br> ``` //[::254.9.252.252] ```  <br> ``` //[adcf:dffc:ebfa:cbbc:beea:afcc:62.251.255.255] ```  <br> ``` //[::abab:afdf:efbe:ddda:fcac:aadb:afea%25-] ```  <br> ``` //[6bef::bbbc:255.252.251.255] ```  <br> 


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

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 8 | 8 | 0
chromium | 8 | 8 | 0

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

