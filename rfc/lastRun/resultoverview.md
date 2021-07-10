# Results 

Total number of URLs: 6

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 17.33% 
Cpp | 0 | 0 | 8.8% 
Go | 0 | 0 | 68.5% 
Python | 0 | 0 | 31.0% 
PHP | 1 | 1 | 45.69% 
C | 2 | 1 | 25.6% 
Ruby | 5 | 1 | 65.8% 
firefox | 6 | 1 | 48.1% 
Java | 6 | 1 | 23.0% 
JavaScriptwhatwg-url | 6 | 1 | 11.92% 
chromium | 6 | 1 | 13.72% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> 


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


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //253.8.251.252 ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  <br> ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  <br> ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  <br> ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[bfbe:abea:aabd:bafe:eeeb:ecfb:252.250.109.255] ```  | firefox <br>C <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //253.8.251.252 ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` //[bacd::dcdb:eaeb:aeed:ecca:251.254.41.251] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[dfab::feee:dafb:bcaa:ecef:251.52.253.255] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::ecda:ccfe:adba:affb:edbc:255.252.253.105%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 6 | 6 | 0
chromium | 6 | 6 | 0

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

