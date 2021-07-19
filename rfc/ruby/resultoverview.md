# Results 

Total number of URLs: 10

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 18.63% 
Cpp | 0 | 0 | 18.5% 
Python | 0 | 0 | 32.0% 
Go | 1 | 1 | 72.9% 
firefox | 5 | 1 | 48.1% 
C | 5 | 1 | 37.9% 
chromium | 5 | 1 | 13.72% 
PHP | 6 | 6 | 50.0% 
Ruby | 6 | 1 | 68.91% 
JavaScriptwhatwg-url | 9 | 1 | 29.51% 
Java | 10 | 6 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //%2f ```  <br> ``` //[::aada:255.255.255.214%25_] ```  <br> ``` //#m ```  <br> ``` //@/%cd ```  <br> ``` //[cfde::dbbc:beec:ffec:beda:252.251.0.254] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` Q://[::250.251.52.254%25-] ```  <br> ``` F://[::efca:adcf:227.251.252.254%25-] ```  <br> ``` D://[debc::eebc:dadd:defe:adec:255.252.128.250%25~] ```  <br> ``` P://[::175.255.252.251%25~] ```  <br> ``` //[::aada:255.255.255.214%25_] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `[::250.251.52.254%25-]` is invalid : the IP host is malformed ```  |  ``` Q://[::250.251.52.254%25-] ```  <br> 
 ``` Host `[::efca:adcf:227.251.252.254%25-]` is invalid : the IP host is malformed ```  |  ``` F://[::efca:adcf:227.251.252.254%25-] ```  <br> 
 ``` Host `[debc::eebc:dadd:defe:adec:255.252.128.250%25~]` is invalid : the IP host is malformed ```  |  ``` D://[debc::eebc:dadd:defe:adec:255.252.128.250%25~] ```  <br> 
 ``` Host `%2f` is invalid : the host is not a valid registered name ```  |  ``` //%2f ```  <br> 
 ``` Host `[::175.255.252.251%25~]` is invalid : the IP host is malformed ```  |  ``` P://[::175.255.252.251%25~] ```  <br> 
 ``` Host `[::aada:255.255.255.214%25_]` is invalid : the IP host is malformed ```  |  ``` //[::aada:255.255.255.214%25_] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q://[::250.251.52.254%25-] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F://[::efca:adcf:227.251.252.254%25-] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` D://[debc::eebc:dadd:defe:adec:255.252.128.250%25~] ```  <br> 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //%2f ```  <br> ``` //[::aada:255.255.255.214%25_] ```  <br> ``` //#m ```  <br> ``` //@/%cd ```  <br> ``` //[cfde::dbbc:beec:ffec:beda:252.251.0.254] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` P://[::175.255.252.251%25~] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` t://- ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse : invalid URL escape "%2f" ```  |  ``` //%2f ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` Q://[::250.251.52.254%25-] ```  <br> ``` F://[::efca:adcf:227.251.252.254%25-] ```  <br> ``` D://[debc::eebc:dadd:defe:adec:255.252.128.250%25~] ```  <br> ``` //%2f ```  <br> ``` P://[::175.255.252.251%25~] ```  <br> ``` //[::aada:255.255.255.214%25_] ```  <br> ``` //#m ```  <br> ``` //@/%cd ```  <br> ``` //[cfde::dbbc:beec:ffec:beda:252.251.0.254] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //%2f ```  <br> ``` //[::aada:255.255.255.214%25_] ```  <br> ``` //#m ```  <br> ``` //@/%cd ```  <br> ``` //[cfde::dbbc:beec:ffec:beda:252.251.0.254] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` Q://[::250.251.52.254%25-] ```  <br> ``` F://[::efca:adcf:227.251.252.254%25-] ```  <br> ``` D://[debc::eebc:dadd:defe:adec:255.252.128.250%25~] ```  <br> ``` P://[::175.255.252.251%25~] ```  <br> ``` //[::aada:255.255.255.214%25_] ```  <br> ``` //[cfde::dbbc:beec:ffec:beda:252.251.0.254] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` Q://[::250.251.52.254%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` F://[::efca:adcf:227.251.252.254%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` D://[debc::eebc:dadd:defe:adec:255.252.128.250%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //%2f ```  | firefox <br>PHP <br>Java <br>Go <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` P://[::175.255.252.251%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::aada:255.255.255.214%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` t://- ```  | Java <br>
 ``` //#m ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` //@/%cd ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` //[cfde::dbbc:beec:ffec:beda:252.251.0.254] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 5 | 5 | 0
chromium | 5 | 5 | 0

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

