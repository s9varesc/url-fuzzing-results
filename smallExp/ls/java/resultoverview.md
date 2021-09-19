# Results 

Total number of URLs: 11

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 60.9% 
JavaScripturijs | 0 | 0 | 23.4% 
Cpp | 0 | 0 | 29.4% 
JavaScriptwhatwg-url | 0 | 0 | 49.33% 
Python | 0 | 0 | 42.0% 
Go | 1 | 1 | 69.5% 
chromium | 1 | 1 | 39.47% 
PHP | 2 | 2 | 43.1% 
C | 4 | 1 | 36.6% 
Java | 5 | 5 | 39.0% 
Ruby | 5 | 5 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` http://[::]/%2e%2e//﷎ ```  <br> ``` K:/ < /// ```  <br> ``` file://Ćm ```  <br> ``` file:/// < //{n ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` The uri `` is invalid for the `file` scheme. ```  |  ``` file:///#6 ```  <br> 
 ``` Host `{n` is invalid : the host is not a valid registered name ```  |  ``` file:/// < //{n ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` p:/ < /%7b~ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` w:/J:/ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: k ```  |  ``` K:/ < /// ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: g ```  |  ``` g:/ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://[f0ca::bafe:251.253.250.251] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse //{n: invalid character "{" in host name ```  |  ``` file:/// < //{n ```  <br> 


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
 ``` URI must be ascii only "file://\u0106m" ```  |  ``` file://Ćm ```  <br> 
 ``` bad URI(is not URI?): //{n ```  |  ``` file:/// < //{n ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` file:/// < //[::]/%2e%2e/%2e. ```  | Ruby <br>
 ``` http://[::]/%2e%2e//﷎ ```  | C <br>Ruby <br>
 ``` p:/ < /%7b~ ```  | Java <br>
 ``` w:/J:/ ```  | Java <br>
 ``` K:/ < /// ```  | C <br>Java <br>chromium <br>Ruby <br>
 ``` file:///#6 ```  | PHP <br>
 ``` file://Ćm ```  | C <br>Ruby <br>
 ``` file:/// < //{n ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` g:/ ```  | Java <br>
 ``` wss://[f0ca::bafe:251.253.250.251] ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 4 | 0 | 4
chromium | 2 | 1 | 1

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < //{n ```  | host |  ``` {n ```  |  ```  ``` 
 ``` file://Ćm ```  | host |  ``` xn--m-zha ```  |  ```  ``` 
 ``` K:/ < /// ```  | filePath |  ``` /%EF%95%BD ```  |  ``` //%EF%95%BD/ ``` 
 ``` file:/// < //[::]/%2e%2e/%2e. ```  | host |  ``` :: ```  |  ```  ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < //{n ```  | host |  ``` {n ```  |  ``` %7Bn ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

