# Results 

Total number of URLs: 4

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 23.05% 
Cpp | 0 | 0 | 24.8% 
JavaScriptwhatwg-url | 0 | 0 | 41.28% 
chromium | 0 | 0 | 37.41% 
Python | 0 | 0 | 33.0% 
firefox | 1 | 1 | 66.6% 
Go | 1 | 1 | 71.9% 
PHP | 2 | 2 | 38.79% 
Java | 2 | 2 | 38.0% 
C | 3 | 1 | 31.9% 
Ruby | 3 | 2 | 71.5% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` https://%3d@" ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ws://[::]?⍭ ```  <br> ``` https://%3d@" ```  <br> ``` file://{ ```  <br> 


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
 ``` Host `{` is invalid : the host is not a valid registered name ```  |  ``` file://{ ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::]?⍭ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q:/h:/ < / ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse : invalid character "{" in host name ```  |  ``` file://{ ```  <br> 


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
 ``` URI must be ascii only "ws://[::]?\u236D" ```  |  ``` ws://[::]?⍭ ```  <br> 
 ``` bad URI(is not URI?):  ```  |  ``` https://%3d@" ```  <br> ``` file://{ ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` ws://[::]?⍭ ```  | C <br>Java <br>Ruby <br>
 ``` https://%3d@" ```  | firefox <br>C <br>PHP <br>Ruby <br>
 ``` Q:/h:/ < / ```  | Java <br>
 ``` file://{ ```  | C <br>PHP <br>Go <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 3 | 1 | 2
chromium | 2 | 0 | 2

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` ws://[::]?⍭ ```  | query |  ``` ?%E2%8D%AD ```  |  ``` %E2%8D%AD ``` 
 ``` file://{ ```  | host |  ``` { ```  |  ```  ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://{ ```  | host |  ``` { ```  |  ``` %7B ``` 
 ``` https://%3d@" ```  | host |  ``` " ```  |  ``` %22 ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

