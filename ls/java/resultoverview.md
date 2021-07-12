# Results 

Total number of URLs: 2

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 22.36% 
Cpp | 0 | 0 | 23.0% 
Go | 0 | 0 | 70.2% 
JavaScriptwhatwg-url | 0 | 0 | 32.49% 
chromium | 0 | 0 | 33.27% 
Python | 0 | 0 | 33.0% 
firefox | 1 | 1 | 57.8% 
C | 1 | 1 | 23.8% 
PHP | 1 | 1 | 34.48% 
Java | 1 | 1 | 38.0% 
Ruby | 1 | 1 | 71.5% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` https://%3d@" ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` https://%3d@" ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `"` is invalid : the host is not a valid registered name ```  |  ``` https://%3d@" ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q:/h:/ < / ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` https://%3d@" ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` https://%3d@" ```  | firefox <br>C <br>PHP <br>Ruby <br>
 ``` Q:/h:/ < / ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 1 | 1 | 0
chromium | 1 | 0 | 1

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` https://%3d@" ```  | host |  ``` " ```  |  ``` %22 ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

