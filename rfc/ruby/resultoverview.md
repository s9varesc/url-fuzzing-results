# Results 

Total number of URLs: 4

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 17.33% 
Cpp | 0 | 0 | 16.0% 
Go | 0 | 0 | 68.5% 
Python | 0 | 0 | 32.0% 
firefox | 2 | 1 | 48.1% 
C | 2 | 1 | 24.7% 
PHP | 2 | 2 | 41.38% 
chromium | 2 | 1 | 13.53% 
JavaScriptwhatwg-url | 3 | 1 | 29.66% 
Ruby | 3 | 1 | 67.88% 
Java | 4 | 3 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_]` is invalid : the IP host is malformed ```  |  ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> 
 ``` Host `[::dbca:eafc:acca:255.255.254.243%25_]` is invalid : the IP host is malformed ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` d://[::8ceb:cfcd] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` //[::deca:eabe:bbdc:251.252.90.251] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` d://[::8ceb:cfcd] ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 2 | 2 | 0
chromium | 2 | 2 | 0

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

