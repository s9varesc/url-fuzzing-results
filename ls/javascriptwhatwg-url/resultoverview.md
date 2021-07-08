# Results 

Total number of URLs: 30

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 24.7% 
Cpp | 0 | 0 | 30.2% 
Go | 0 | 0 | 68.3% 
JavaScriptwhatwg-url | 0 | 0 | 54.69% 
chromium | 0 | 0 | 41.54% 
Python | 0 | 0 | 42.0% 
firefox | 1 | 1 | 62.8% 
PHP | 4 | 4 | 38.79% 
C | 12 | 1 | 41.9% 
Java | 13 | 9 | 39.0% 
Ruby | 16 | 16 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` wss://[::] < //*o ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ftp://[::]/￴ ```  <br> ``` file:/// < /?䉷 ```  <br> ``` http://[::]#𕱽 ```  <br> ``` file:/// < /􏔼 ```  <br> ``` http://[::]/󚇜 ```  <br> ``` file:///?﹩ ```  <br> ``` N:/ < ///../] ```  <br> ``` file://[::]/􏘦 ```  <br> ``` P:/ < /?􏔲 ```  <br> ``` M:/ < /嫭 ```  <br> ``` file:/// < /%2e./􏲉 ```  <br> ``` file:///?} ```  <br> 


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
 ``` The uri `file:///?%7D` is invalid for the `file` scheme. ```  |  ``` file:///?} < / ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` n:/ < //[dbc1:bcca::] ```  <br> ``` N:/ < ///../] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://D ```  <br> ``` wss://[::] < //*o ```  <br> ``` wss://251.255.214.253 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::] < //[::cdef:bacb:cfc0] ```  <br> ``` ws://[eebd::efbe] < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q:/%3f ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` P:/ < /?􏔲 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: m ```  |  ``` M:/ < /嫭 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: k ```  |  ``` K:/ < //[::252.251.253.49] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` h:/ < //[::fadb:aae1:acce] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` D://_ ```  <br> 


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
 ``` URI must be ascii only "/?\u{10F532}" ```  |  ``` P:/ < /?􏔲 ```  <br> 
 ``` URI must be ascii only "/\u5AED" ```  |  ``` M:/ < /嫭 ```  <br> 
 ``` URI must be ascii only "/%2e./\u{10FC89}" ```  |  ``` file:/// < /%2e./􏲉 ```  <br> 
 ``` bad URI(is not URI?): //[::252.251.253.49] ```  |  ``` K:/ < //[::252.251.253.49] ```  <br> 
 ``` bad URI(is not URI?): //[::fadb:aae1:acce] ```  |  ``` h:/ < //[::fadb:aae1:acce] ```  <br> 


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
 ``` P:/ < /?􏔲 ```  | C <br>Java <br>Ruby <br>
 ``` M:/ < /嫭 ```  | C <br>Java <br>Ruby <br>
 ``` wss://251.255.214.253 ```  | Java <br>
 ``` file:/// < /%2e./􏲉 ```  | C <br>Ruby <br>
 ``` K:/ < //[::252.251.253.49] ```  | Java <br>Ruby <br>
 ``` ws://[eebd::efbe] < / ```  | Java <br>
 ``` file:///?} < / ```  | PHP <br>
 ``` h:/ < //[::fadb:aae1:acce] ```  | Java <br>Ruby <br>
 ``` D://_ ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 13 | 1 | 12
chromium | 4 | 0 | 4

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` P:/ < /?􏔲 ```  | query |  ``` ?%F4%8F%94%B2 ```  |  ``` %F4%8F%94%B2 ``` 
 ``` file:/// < //253.252.255.220 ```  | host |  ``` 253.252.255.220 ```  |  ```  ``` 
 ``` h:/ < //[::fadb:aae1:acce] ```  | host |  ``` ::fadb:aae1:acce ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < /?䉷 ```  | query |  ``` ?%E4%89%B7 ```  |  ``` %E4%89%B7 ``` 
 ``` n:/ < //[dbc1:bcca::] ```  | host |  ``` dbc1:bcca:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://207.254.251.254 ```  | host |  ``` 207.254.251.254 ```  |  ```  ``` 
 ``` file:/// < //[::ffed:abde:defd:fdc8] ```  | host |  ``` ::ffed:abde:defd:fdc8 ```  |  ```  ``` 
 ``` N:/ < ///../] ```  | filePath |  ``` /] ```  |  ``` //../] ``` 
 ``` file://250.251.7.251 ```  | host |  ``` 250.251.7.251 ```  |  ```  ``` 
 ``` file://[::]/􏘦 ```  | host |  ``` :: ```  |  ```  ``` 
 ``` D://_ ```  | host |  ``` _ ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` K:/ < //[::252.251.253.49] ```  | host |  ``` ::fcfb:fd31 ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` https://F, ```  | host |  ``` f, ```  |  ``` f%2C ``` 
 ``` wss://[::] < //*o ```  | host |  ``` *o ```  |  ``` %2Ao ``` 
 ``` N:/ < ///../] ```  | host |  ```  ```  |  ``` .. ``` 
 ``` D://_ ```  | host |  ``` _ ```  |  ```  ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

