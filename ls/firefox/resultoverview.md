# Results 

Total number of URLs: 17

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 24.7% 
Cpp | 0 | 0 | 30.2% 
Go | 0 | 0 | 68.3% 
JavaScriptwhatwg-url | 0 | 0 | 50.82% 
chromium | 0 | 0 | 41.54% 
Python | 0 | 0 | 42.0% 
firefox | 1 | 1 | 62.8% 
PHP | 3 | 3 | 38.79% 
Java | 6 | 4 | 39.0% 
C | 8 | 1 | 34.9% 
Ruby | 11 | 11 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` wss://[::] < //*o ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ftp://[::]/￴ ```  <br> ``` file:/// < /?䉷 ```  <br> ``` http://[::]#𕱽 ```  <br> ``` file:/// < /􏔼 ```  <br> ``` http://[::]/󚇜 ```  <br> ``` file:///?﹩ ```  <br> ``` N:/ < ///../] ```  <br> ``` file://[::]/􏘦 ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` The uri `` is invalid for the `file` scheme. ```  |  ``` file:///#= ```  <br> 
 ``` The uri `file:///?%E4%89%B7` is invalid for the `file` scheme. ```  |  ``` file:/// < /?䉷 ```  <br> 
 ``` The uri `file:///?%EF%B9%A9` is invalid for the `file` scheme. ```  |  ``` file:///?﹩ < / ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` n:/ < //[dbc1:bcca::] ```  <br> ``` N:/ < ///../] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://D ```  <br> ``` wss://[::] < //*o ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::] < //[::cdef:bacb:cfc0] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q:/%3f ```  <br> 


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
 ``` URI must be ascii only "ftp://[::]/\uFFF4" ```  |  ``` ftp://[::]/￴ ```  <br> 
 ``` URI must be ascii only "/?\u4277" ```  |  ``` file:/// < /?䉷 ```  <br> 
 ``` bad URI(is not URI?): //[dbc1:bcca::] ```  |  ``` n:/ < //[dbc1:bcca::] ```  <br> 
 ``` URI must be ascii only "http://[::]#\u{15C7D}" ```  |  ``` http://[::]#𕱽 < / ```  <br> 
 ``` URI must be ascii only "/\u{10F53C}" ```  |  ``` file:/// < /􏔼 ```  <br> 
 ``` URI must be ascii only "http://[::]/\u{DA1DC}" ```  |  ``` http://[::]/󚇜 ```  <br> 
 ``` bad URI(is not URI?): //[::ffed:abde:defd:fdc8] ```  |  ``` file:/// < //[::ffed:abde:defd:fdc8] ```  <br> 
 ``` bad URI(is not URI?): //[::cdef:bacb:cfc0] ```  |  ``` ws://[::] < //[::cdef:bacb:cfc0] ```  <br> 
 ``` URI must be ascii only "file:///?\uFE69" ```  |  ``` file:///?﹩ < / ```  <br> 
 ``` bad URI(is not URI?): ///../] ```  |  ``` N:/ < ///../] ```  <br> 
 ``` URI must be ascii only "file://[::]/\u{10F626}" ```  |  ``` file://[::]/􏘦 ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` ftp://[::]/￴ ```  | C <br>Ruby <br>
 ``` file:///#= ```  | PHP <br>
 ``` file:/// < /?䉷 ```  | C <br>PHP <br>Ruby <br>
 ``` n:/ < //[dbc1:bcca::] ```  | Java <br>Ruby <br>
 ``` http://[::]#𕱽 < / ```  | Ruby <br>
 ``` file:/// < /􏔼 ```  | C <br>Ruby <br>
 ``` wss://D ```  | Java <br>
 ``` http://[::]/󚇜 ```  | C <br>Ruby <br>
 ``` file:/// < //[::ffed:abde:defd:fdc8] ```  | Ruby <br>
 ``` ws://[::] < //[::cdef:bacb:cfc0] ```  | Java <br>Ruby <br>
 ``` file:///?﹩ < / ```  | PHP <br>Ruby <br>
 ``` Q:/%3f ```  | Java <br>
 ``` N:/ < ///../] ```  | C <br>Java <br>Ruby <br>
 ``` wss://[::] < //*o ```  | firefox <br>Java <br>
 ``` file://[::]/􏘦 ```  | C <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 7 | 1 | 6
chromium | 2 | 0 | 2

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < /?䉷 ```  | query |  ``` ?%E4%89%B7 ```  |  ``` %E4%89%B7 ``` 
 ``` n:/ < //[dbc1:bcca::] ```  | host |  ``` dbc1:bcca:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[::ffed:abde:defd:fdc8] ```  | host |  ``` ::ffed:abde:defd:fdc8 ```  |  ```  ``` 
 ``` N:/ < ///../] ```  | filePath |  ``` /] ```  |  ``` //../] ``` 
 ``` file://250.251.7.251 ```  | host |  ``` 250.251.7.251 ```  |  ```  ``` 
 ``` file://[::]/􏘦 ```  | host |  ``` :: ```  |  ```  ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` wss://[::] < //*o ```  | host |  ``` *o ```  |  ``` %2Ao ``` 
 ``` N:/ < ///../] ```  | host |  ```  ```  |  ``` .. ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

