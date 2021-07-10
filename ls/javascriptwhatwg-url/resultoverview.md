# Results 

Total number of URLs: 29

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 70.9% 
JavaScripturijs | 0 | 0 | 25.65% 
Cpp | 0 | 0 | 31.6% 
JavaScriptwhatwg-url | 0 | 0 | 59.91% 
Python | 0 | 0 | 43.0% 
Go | 2 | 2 | 72.4% 
PHP | 3 | 3 | 47.41% 
chromium | 3 | 1 | 49.25% 
C | 11 | 1 | 46.3% 
Java | 15 | 14 | 38.0% 
Ruby | 16 | 16 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` file://RĤ ```  <br> ``` g:/ < //{' ```  <br> ``` D:/ < /? ```  <br> ``` file:///? ```  <br> ``` file:/// < /?漭 ```  <br> ``` N:/?񶫕 ```  <br> ``` file:/// < /%2e./򤋣 ```  <br> ``` A:/#秴 ```  <br> ``` http://[::dace:efee:250.250.253.202] ```  <br> ``` http://[::] < //:𺈟@, ```  <br> ``` l:/]%60 ```  <br> 


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
 ``` java.net.MalformedURLException: unknown protocol: b ```  |  ``` B:/ < //[::]:4 ```  <br> ``` b://[::]:62556 < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::]:60132 < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: a ```  |  ``` A:/#秴 < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` W:/ < //[::]:6 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: x ```  |  ``` X://[::]:65502 < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` l:/]%60 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` p:/ < //[::e8ed] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: i ```  |  ``` I:///! < / ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse //{': invalid character "{" in host name ```  |  ``` g:/ < //{' ```  <br> 
 ``` parse //:𺈟@,: net/url: invalid userinfo ```  |  ``` http://[::] < //:𺈟@, ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` X://[::]:65502 < / ```  <br> ``` b://[::]:62556 < / ```  <br> ``` I:///! < / ```  <br> 


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
 ``` bad URI(is not URI?): //[::]:6 ```  |  ``` W:/ < //[::]:6 ```  <br> 
 ``` bad URI(is not URI?): //[8bae::ceae] ```  |  ``` ftp://[::] < //[8bae::ceae] ```  <br> 
 ``` URI must be ascii only "//:\u{3A21F}@," ```  |  ``` http://[::] < //:𺈟@, ```  <br> 
 ``` bad URI(is not URI?):  ```  |  ``` l:/]%60 ```  <br> 
 ``` bad URI(is not URI?): //[::e8ed] ```  |  ``` p:/ < //[::e8ed] ```  <br> 


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
 ``` http://[::dace:efee:250.250.253.202] ```  | C <br>
 ``` W:/ < //[::]:6 ```  | Java <br>Ruby <br>
 ``` ftp://[::] < //[8bae::ceae] ```  | Ruby <br>
 ``` http://[::] < //:𺈟@, ```  | C <br>Go <br>Ruby <br>
 ``` b://[::]:62556 < / ```  | Java <br>chromium <br>
 ``` X://[::]:65502 < / ```  | Java <br>chromium <br>
 ``` l:/]%60 ```  | C <br>Java <br>Ruby <br>
 ``` p:/ < //[::e8ed] ```  | Java <br>Ruby <br>
 ``` I:///! < / ```  | Java <br>chromium <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 18 | 0 | 18
chromium | 5 | 3 | 2

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` B:/ < //[::]:4 ```  | host |  ``` :: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` X://[::]:65502 < / ```  | host |  ``` :: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:///? ```  | query |  ``` ?%EE%BF%82 ```  |  ``` %EE%BF%82 ``` 
 ``` W:/ < //[::]:6 ```  | host |  ``` :: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` I:///! < / ```  | filePath |  ``` / ```  |  ``` /// ``` 
 ``` N:/?񶫕 ```  | query |  ``` ?%F1%B6%AB%95 ```  |  ``` %F1%B6%AB%95 ``` 
 ``` F:/ < //[dffb:adba:dfbb:effe:adad:caac:252.16.254.252] ```  | host |  ``` dffb:adba:dfbb:effe:adad:caac:fc10:fefc ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://RĤ ```  | host |  ``` xn--r-qja ```  |  ```  ``` 
 ``` b://[::]:62556 < / ```  | host |  ``` :: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < /?漭 ```  | query |  ``` ?%E6%BC%AD ```  |  ``` %E6%BC%AD ``` 
 ``` g:/ < //{' ```  | host |  ``` {' ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` V:/ < //- ```  | host |  ``` - ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //c ```  | host |  ``` c ```  |  ```  ``` 
 ``` p:/ < //[::e8ed] ```  | host |  ``` ::e8ed ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < /.%2e ```  | filePath |  ``` / ```  |  ``` /.%2e ``` 
 ``` D:/ < /? ```  | query |  ``` ?%EF%A0%88 ```  |  ``` %EF%A0%88 ``` 
 ``` file://[dd7b::250.251.254.252] ```  | host |  ``` dd7b::fafb:fefc ```  |  ```  ``` 
 ``` file:/// < //252.251.253.205 ```  | host |  ``` 252.251.253.205 ```  |  ```  ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` g:/ < //{' ```  | host |  ``` {' ```  |  ``` %7B%27 ``` 
 ``` http://[::] < //:𺈟@, ```  | host |  ``` , ```  |  ``` %2C ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

