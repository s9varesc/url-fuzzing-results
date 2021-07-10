# Results 

Total number of URLs: 16

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 17.94% 
Cpp | 0 | 0 | 16.0% 
Go | 0 | 0 | 68.5% 
Python | 0 | 0 | 32.0% 
PHP | 7 | 7 | 45.69% 
C | 8 | 1 | 29.0% 
firefox | 11 | 1 | 48.1% 
chromium | 11 | 1 | 13.72% 
Ruby | 13 | 1 | 68.91% 
JavaScriptwhatwg-url | 14 | 1 | 30.25% 
Java | 16 | 6 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> ``` //[2cae::ecda:acce:fbcd:254.253.254.251%25-] ```  <br> ``` //[::beed:fdbc:ffbf:251.251.1.252%25_] ```  <br> ``` //[5fff::abff] ```  <br> ``` //[6bbb::efba] ```  <br> ``` //[::baca:eece:255.254.164.255%25-] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> ``` //[2cae::ecda:acce:fbcd:254.253.254.251%25-] ```  <br> ``` //[::beed:fdbc:ffbf:251.251.1.252%25_] ```  <br> ``` W://[::250.253.250.246%25-] ```  <br> ``` U://[::aabe:aeeb:eeee:bdbd:dfed:cbee:8adc%25-] ```  <br> ``` //[::baca:eece:255.254.164.255%25-] ```  <br> ``` O://[::fefe:eacd:feea:125.250.254.251%25-] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_]` is invalid : the IP host is malformed ```  |  ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> 
 ``` Host `[2cae::ecda:acce:fbcd:254.253.254.251%25-]` is invalid : the IP host is malformed ```  |  ``` //[2cae::ecda:acce:fbcd:254.253.254.251%25-] ```  <br> 
 ``` Host `[::beed:fdbc:ffbf:251.251.1.252%25_]` is invalid : the IP host is malformed ```  |  ``` //[::beed:fdbc:ffbf:251.251.1.252%25_] ```  <br> 
 ``` Host `[::250.253.250.246%25-]` is invalid : the IP host is malformed ```  |  ``` W://[::250.253.250.246%25-] ```  <br> 
 ``` Host `[::aabe:aeeb:eeee:bdbd:dfed:cbee:8adc%25-]` is invalid : the IP host is malformed ```  |  ``` U://[::aabe:aeeb:eeee:bdbd:dfed:cbee:8adc%25-] ```  <br> 
 ``` Host `[::baca:eece:255.254.164.255%25-]` is invalid : the IP host is malformed ```  |  ``` //[::baca:eece:255.254.164.255%25-] ```  <br> 
 ``` Host `[::fefe:eacd:feea:125.250.254.251%25-]` is invalid : the IP host is malformed ```  |  ``` O://[::fefe:eacd:feea:125.250.254.251%25-] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> ``` //[2cae::ecda:acce:fbcd:254.253.254.251%25-] ```  <br> ``` //[::beed:fdbc:ffbf:251.251.1.252%25_] ```  <br> ``` //[5fff::abff] ```  <br> ``` //[6bbb::efba] ```  <br> ``` //[::baca:eece:255.254.164.255%25-] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: x ```  |  ``` X://[edda:ddcc:fcbe:edfd:bfaa:eaaf:254.250.253.4] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` W://[::250.253.250.246%25-] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: u ```  |  ``` U://[::aabe:aeeb:eeee:bdbd:dfed:cbee:8adc%25-] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` t://[::ebea:ccaf:58.253.252.252] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: o ```  |  ``` O://[::fefe:eacd:feea:125.250.254.251%25-] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> ``` //[2cae::ecda:acce:fbcd:254.253.254.251%25-] ```  <br> ``` //[::beed:fdbc:ffbf:251.251.1.252%25_] ```  <br> ``` //[5fff::abff] ```  <br> ``` W://[::250.253.250.246%25-] ```  <br> ``` U://[::aabe:aeeb:eeee:bdbd:dfed:cbee:8adc%25-] ```  <br> ``` //[6bbb::efba] ```  <br> ``` //[::baca:eece:255.254.164.255%25-] ```  <br> ``` O://[::fefe:eacd:feea:125.250.254.251%25-] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> ``` //[2cae::ecda:acce:fbcd:254.253.254.251%25-] ```  <br> ``` //[::beed:fdbc:ffbf:251.251.1.252%25_] ```  <br> ``` //[5fff::abff] ```  <br> ``` //[6bbb::efba] ```  <br> ``` //[::baca:eece:255.254.164.255%25-] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> ``` //[2cae::ecda:acce:fbcd:254.253.254.251%25-] ```  <br> ``` //[::beed:fdbc:ffbf:251.251.1.252%25_] ```  <br> ``` //[5fff::abff] ```  <br> ``` W://[::250.253.250.246%25-] ```  <br> ``` U://[::aabe:aeeb:eeee:bdbd:dfed:cbee:8adc%25-] ```  <br> ``` //[6bbb::efba] ```  <br> ``` //[::baca:eece:255.254.164.255%25-] ```  <br> ``` O://[::fefe:eacd:feea:125.250.254.251%25-] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  | firefox <br>C <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //253.8.251.252 ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[2cae::ecda:acce:fbcd:254.253.254.251%25-] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::beed:fdbc:ffbf:251.251.1.252%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` X://[edda:ddcc:fcbe:edfd:bfaa:eaaf:254.250.253.4] ```  | Java <br>
 ``` //[5fff::abff] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` W://[::250.253.250.246%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` U://[::aabe:aeeb:eeee:bdbd:dfed:cbee:8adc%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` t://[::ebea:ccaf:58.253.252.252] ```  | Java <br>
 ``` //[6bbb::efba] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::baca:eece:255.254.164.255%25-] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` O://[::fefe:eacd:feea:125.250.254.251%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 11 | 11 | 0
chromium | 11 | 11 | 0

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

