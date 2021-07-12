# Results 

Total number of URLs: 5

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 23.4% 
Cpp | 0 | 0 | 26.6% 
JavaScriptwhatwg-url | 0 | 0 | 47.99% 
chromium | 0 | 0 | 42.29% 
Python | 0 | 0 | 33.0% 
firefox | 1 | 1 | 66.6% 
Go | 1 | 1 | 72.9% 
PHP | 2 | 2 | 38.79% 
C | 3 | 1 | 39.8% 
Java | 3 | 3 | 38.0% 
Ruby | 4 | 3 | 71.5% 


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
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  <br> 
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
 ``` bad URI(is not URI?): //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  |  ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` ws://[::]?⍭ ```  | C <br>Java <br>Ruby <br>
 ``` https://%3d@" ```  | firefox <br>C <br>PHP <br>Ruby <br>
 ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  | Java <br>Ruby <br>
 ``` Q:/h:/ < / ```  | Java <br>
 ``` file://{ ```  | C <br>PHP <br>Go <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 4 | 1 | 3
chromium | 2 | 0 | 2

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` ws://[::]?⍭ ```  | query |  ``` ?%E2%8D%AD ```  |  ``` %E2%8D%AD ``` 
 ``` file://{ ```  | host |  ``` { ```  |  ```  ``` 
 ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  | host |  ``` eada:fffc:eede:fdeb:adbc:edce:60fe:fafe ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 

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

