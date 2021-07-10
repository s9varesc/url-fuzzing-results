# Results 

Total number of URLs: 4

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 57.8% 
JavaScripturijs | 0 | 0 | 19.67% 
Cpp | 0 | 0 | 25.0% 
JavaScriptwhatwg-url | 0 | 0 | 44.71% 
chromium | 0 | 0 | 37.22% 
Python | 0 | 0 | 37.0% 
PHP | 1 | 1 | 43.97% 
Go | 1 | 1 | 68.8% 
C | 2 | 1 | 29.3% 
Java | 2 | 2 | 38.0% 
Ruby | 3 | 3 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` file://RĤ ```  <br> ``` g:/ < //{' ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `{'` is invalid : the host is not a valid registered name ```  |  ``` g:/ < //{' ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: g ```  |  ``` g:/ < //{' ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` V:/ < //- ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse //{': invalid character "{" in host name ```  |  ``` g:/ < //{' ```  <br> 


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
 ``` URI must be ascii only "file://R\u0124" ```  |  ``` file://RĤ ```  <br> 
 ``` bad URI(is not URI?): //{' ```  |  ``` g:/ < //{' ```  <br> 
 ``` bad URI(is not URI?): //[::dcce:251.255.185.255] ```  |  ``` https://[::] < //[::dcce:251.255.185.255] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` file://RĤ ```  | C <br>Ruby <br>
 ``` g:/ < //{' ```  | C <br>PHP <br>Java <br>Go <br>Ruby <br>
 ``` https://[::] < //[::dcce:251.255.185.255] ```  | Ruby <br>
 ``` V:/ < //- ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 3 | 0 | 3
chromium | 1 | 0 | 1

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://RĤ ```  | host |  ``` xn--r-qja ```  |  ```  ``` 
 ``` g:/ < //{' ```  | host |  ``` {' ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` V:/ < //- ```  | host |  ``` - ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` g:/ < //{' ```  | host |  ``` {' ```  |  ``` %7B%27 ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

