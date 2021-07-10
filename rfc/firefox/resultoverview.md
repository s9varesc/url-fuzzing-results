# Results 

Total number of URLs: 1

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
C | 0 | 0 | 20.2% 
JavaScripturijs | 0 | 0 | 16.72% 
Cpp | 0 | 0 | 7.2% 
PHP | 0 | 0 | 33.62% 
Go | 0 | 0 | 66.3% 
Python | 0 | 0 | 31.0% 
firefox | 1 | 1 | 48.1% 
Java | 1 | 1 | 23.0% 
JavaScriptwhatwg-url | 1 | 1 | 11.92% 
chromium | 1 | 1 | 13.53% 
Ruby | 1 | 1 | 63.21% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 


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
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` //[::eebf:fbed:decc:badc:fbde:255.50.253.250] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 1 | 1 | 0
chromium | 1 | 1 | 0

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

