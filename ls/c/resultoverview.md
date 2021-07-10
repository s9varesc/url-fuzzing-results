# Results 

Total number of URLs: 16

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 64.7% 
JavaScripturijs | 0 | 0 | 25.22% 
Cpp | 0 | 0 | 31.4% 
JavaScriptwhatwg-url | 0 | 0 | 54.84% 
chromium | 0 | 0 | 45.86% 
Python | 0 | 0 | 43.0% 
Go | 1 | 1 | 69.7% 
PHP | 3 | 3 | 46.55% 
C | 8 | 1 | 42.5% 
Java | 9 | 9 | 38.0% 
Ruby | 11 | 11 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` file://RĤ ```  <br> ``` g:/ < //{' ```  <br> ``` D:/ < /? ```  <br> ``` file:///? ```  <br> ``` file:/// < /?漭 ```  <br> ``` N:/?񶫕 ```  <br> ``` file:/// < /%2e./򤋣 ```  <br> ``` A:/#秴 ```  <br> 


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
 ``` The uri `file:///?%EE%BF%82` is invalid for the `file` scheme. ```  |  ``` file:///? ```  <br> 
 ``` The uri `file:///?%E6%BC%AD` is invalid for the `file` scheme. ```  |  ``` file:/// < /?漭 ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: g ```  |  ``` g:/ < //{' ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` V:/ < //- ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` h:/a:/ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` D:/ < /? ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //[dffb:adba:dfbb:effe:adad:caac:252.16.254.252] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` N:/?񶫕 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: b ```  |  ``` B:/ < //[::]:4 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::]:60132 < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: a ```  |  ``` A:/#秴 < / ```  <br> 


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
 ``` URI must be ascii only "/?\uF808" ```  |  ``` D:/ < /? ```  <br> 
 ``` bad URI(is not URI?): //[dffb:adba:dfbb:effe:adad:caac:252.16.254.252] ```  |  ``` F:/ < //[dffb:adba:dfbb:effe:adad:caac:252.16.254.252] ```  <br> 
 ``` URI must be ascii only "file:///?\uEFC2" ```  |  ``` file:///? ```  <br> 
 ``` URI must be ascii only "/?\u6F2D" ```  |  ``` file:/// < /?漭 ```  <br> 
 ``` URI must be ascii only "N:/?\u{76AD5}" ```  |  ``` N:/?񶫕 ```  <br> 
 ``` bad URI(is not URI?): //[::]:4 ```  |  ``` B:/ < //[::]:4 ```  <br> 
 ``` URI must be ascii only "/%2e./\u{A42E3}" ```  |  ``` file:/// < /%2e./򤋣 ```  <br> 
 ``` URI must be ascii only "A:/#\u79F4" ```  |  ``` A:/#秴 < / ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` file://RĤ ```  | C <br>Ruby <br>
 ``` g:/ < //{' ```  | C <br>PHP <br>Java <br>Go <br>Ruby <br>
 ``` https://[::] < //[::dcce:251.255.185.255] ```  | Ruby <br>
 ``` V:/ < //- ```  | Java <br>
 ``` h:/a:/ ```  | Java <br>
 ``` D:/ < /? ```  | C <br>Java <br>Ruby <br>
 ``` F:/ < //[dffb:adba:dfbb:effe:adad:caac:252.16.254.252] ```  | Java <br>Ruby <br>
 ``` file:///? ```  | C <br>PHP <br>Ruby <br>
 ``` file:/// < /?漭 ```  | C <br>PHP <br>Ruby <br>
 ``` N:/?񶫕 ```  | C <br>Java <br>Ruby <br>
 ``` B:/ < //[::]:4 ```  | Java <br>Ruby <br>
 ``` ws://[::]:60132 < / ```  | Java <br>
 ``` file:/// < /%2e./򤋣 ```  | C <br>Ruby <br>
 ``` A:/#秴 < / ```  | Java <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 10 | 0 | 10
chromium | 1 | 0 | 1

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` B:/ < //[::]:4 ```  | host |  ``` :: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:///? ```  | query |  ``` ?%EE%BF%82 ```  |  ``` %EE%BF%82 ``` 
 ``` N:/?񶫕 ```  | query |  ``` ?%F1%B6%AB%95 ```  |  ``` %F1%B6%AB%95 ``` 
 ``` F:/ < //[dffb:adba:dfbb:effe:adad:caac:252.16.254.252] ```  | host |  ``` dffb:adba:dfbb:effe:adad:caac:fc10:fefc ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://RĤ ```  | host |  ``` xn--r-qja ```  |  ```  ``` 
 ``` file:/// < /?漭 ```  | query |  ``` ?%E6%BC%AD ```  |  ``` %E6%BC%AD ``` 
 ``` g:/ < //{' ```  | host |  ``` {' ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` V:/ < //- ```  | host |  ``` - ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < /.%2e ```  | filePath |  ``` / ```  |  ``` /.%2e ``` 
 ``` D:/ < /? ```  | query |  ``` ?%EF%A0%88 ```  |  ``` %EF%A0%88 ``` 

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

