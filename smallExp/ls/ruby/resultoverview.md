# Results 

Total number of URLs: 6

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 59.1% 
JavaScripturijs | 0 | 0 | 23.22% 
Cpp | 0 | 0 | 28.0% 
PHP | 0 | 0 | 34.48% 
Go | 0 | 0 | 67.6% 
JavaScriptwhatwg-url | 0 | 0 | 43.96% 
Python | 0 | 0 | 40.0% 
chromium | 1 | 1 | 38.16% 
C | 2 | 1 | 34.2% 
Java | 3 | 3 | 38.0% 
Ruby | 3 | 3 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` http://[::]/%2e%2e//﷎ ```  <br> ``` K:/ < /// ```  <br> 


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
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` p:/ < /%7b~ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: k ```  |  ``` K:/ < /// ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://[f0ca::bafe:251.253.250.251] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` K:/ < /// ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?): //[::]/%2e%2e/%2e. ```  |  ``` file:/// < //[::]/%2e%2e/%2e. ```  <br> 
 ``` URI must be ascii only "http://[::]/%2e%2e//\uFDCE" ```  |  ``` http://[::]/%2e%2e//﷎ ```  <br> 
 ``` URI must be ascii only "///\uF57D" ```  |  ``` K:/ < /// ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` file:/// < //[::]/%2e%2e/%2e. ```  | Ruby <br>
 ``` http://[::]/%2e%2e//﷎ ```  | C <br>Ruby <br>
 ``` p:/ < /%7b~ ```  | Java <br>
 ``` K:/ < /// ```  | C <br>Java <br>chromium <br>Ruby <br>
 ``` wss://[f0ca::bafe:251.253.250.251] ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 2 | 0 | 2
chromium | 1 | 1 | 0

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` K:/ < /// ```  | filePath |  ``` /%EF%95%BD ```  |  ``` //%EF%95%BD/ ``` 
 ``` file:/// < //[::]/%2e%2e/%2e. ```  | host |  ``` :: ```  |  ```  ``` 

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

