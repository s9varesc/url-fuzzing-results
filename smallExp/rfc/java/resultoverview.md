# Results 

Total number of URLs: 1

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 48.1% 
JavaScripturijs | 0 | 0 | 17.07% 
Cpp | 0 | 0 | 10.6% 
Go | 0 | 0 | 68.5% 
chromium | 0 | 0 | 13.53% 
Python | 0 | 0 | 32.0% 
C | 1 | 1 | 19.2% 
PHP | 1 | 1 | 34.48% 
Java | 1 | 1 | 36.0% 
JavaScriptwhatwg-url | 1 | 1 | 25.78% 
Ruby | 1 | 1 | 63.21% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `[::dbca:eafc:acca:255.255.254.243%25_]` is invalid : the IP host is malformed ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 0 | 0 | 0
chromium | 0 | 0 | 0

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

