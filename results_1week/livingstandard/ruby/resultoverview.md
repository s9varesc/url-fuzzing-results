# Results 

Total number of URLs: 10

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 64.7% 
JavaScripturijs | 0 | 0 | 26.52% 
PHP | 0 | 0 | 39.66% 
JavaScriptwhatwg-url | 0 | 0 | 52.16% 
chromium | 0 | 0 | 40.04% 
Python | 0 | 0 | 38.0% 
Cpp | 1 | 1 | 32.3% 
Go | 1 | 1 | 73.4% 
C | 2 | 1 | 44.8% 
Java | 5 | 4 | 38.0% 
Ruby | 5 | 5 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` D:///% ```  <br> ``` file://[::]/󢳭 ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 
 ``` Bad URI syntax ```  |  ``` D:///% ```  <br> 


### PHP

 Exception Type | URLs 
 --- | --- 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` D:///% ```  <br> ``` D:/%2e/.. ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //[::3.252.1.2] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` E:/ < ../%3f ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://:+@C ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse : invalid URL escape "%" ```  |  ``` D:///% ```  <br> 


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
 ``` bad URI(is not URI?):  ```  |  ``` D:///% ```  <br> 
 ``` bad URI(is not URI?): //[aacf:eafc::abea:dfdf] ```  |  ``` http://[::] < //[aacf:eafc::abea:dfdf] ```  <br> 
 ``` bad URI(is not URI?): //[::aeba:3.7.40.6] ```  |  ``` ftp://[::] < //[::aeba:3.7.40.6] ```  <br> 
 ``` bad URI(is not URI?): //[::3.252.1.2] ```  |  ``` F:/ < //[::3.252.1.2] ```  <br> 
 ``` URI must be ascii only "file://[::]/\u{E2CED}" ```  |  ``` file://[::]/󢳭 ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` D:///% ```  | C <br>Cpp <br>Java <br>Go <br>Ruby <br>
 ``` http://[::] < //[aacf:eafc::abea:dfdf] ```  | Ruby <br>
 ``` ftp://[::] < //[::aeba:3.7.40.6] ```  | Ruby <br>
 ``` F:/ < //[::3.252.1.2] ```  | Java <br>Ruby <br>
 ``` E:/ < ../%3f ```  | Java <br>
 ``` D:/%2e/.. ```  | Java <br>
 ``` ws://:+@C ```  | Java <br>
 ``` file://[::]/󢳭 ```  | C <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 4 | 0 | 4
chromium | 1 | 0 | 1

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` F:/ < //[::3.252.1.2] ```  | host |  ``` ::3fc:102 ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //* ```  | host |  ``` * ```  |  ```  ``` 
 ``` file://[::]/󢳭 ```  | host |  ``` :: ```  |  ```  ``` 
 ``` file:/// < //T/%2e/%2e. ```  | host |  ``` t ```  |  ```  ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < //* ```  | host |  ``` * ```  |  ``` %2A ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

