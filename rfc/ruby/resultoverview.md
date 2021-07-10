# Results 

Total number of URLs: 3

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 17.33% 
Cpp | 0 | 0 | 7.2% 
PHP | 0 | 0 | 37.93% 
Go | 0 | 0 | 66.3% 
Python | 0 | 0 | 31.0% 
C | 1 | 1 | 25.2% 
Ruby | 2 | 1 | 65.8% 
firefox | 3 | 1 | 48.1% 
Java | 3 | 1 | 23.0% 
JavaScriptwhatwg-url | 3 | 1 | 11.92% 
chromium | 3 | 1 | 13.72% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  | firefox <br>C <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //253.8.251.252 ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 3 | 3 | 0
chromium | 3 | 3 | 0

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

