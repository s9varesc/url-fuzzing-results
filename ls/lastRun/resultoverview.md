# Results 

Total number of URLs: 51

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 29.12% 
Cpp | 0 | 0 | 35.2% 
Go | 0 | 0 | 68.3% 
JavaScriptwhatwg-url | 0 | 0 | 62.3% 
Python | 0 | 0 | 44.0% 
firefox | 1 | 1 | 63.4% 
chromium | 1 | 1 | 47.18% 
PHP | 5 | 5 | 45.69% 
C | 15 | 1 | 46.8% 
Java | 20 | 14 | 39.0% 
Ruby | 24 | 24 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` wss://[::] < //*o ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ftp://[::]/￴ ```  <br> ``` file:/// < /?䉷 ```  <br> ``` http://[::]#𕱽 ```  <br> ``` file:/// < /􏔼 ```  <br> ``` http://[::]/󚇜 ```  <br> ``` file:///?﹩ ```  <br> ``` N:/ < ///../] ```  <br> ``` file://[::]/􏘦 ```  <br> ``` P:/ < /?􏔲 ```  <br> ``` M:/ < /嫭 ```  <br> ``` file:/// < /%2e./􏲉 ```  <br> ``` file:///?} ```  <br> ``` file://ġ-Ł ```  <br> ``` file:/// < /툨 ```  <br> ``` file:///?ｦ ```  <br> 


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
 ``` The uri `file:///?%EF%BD%A6` is invalid for the `file` scheme. ```  |  ``` file:///?ｦ ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` n:/ < //[dbc1:bcca::] ```  <br> ``` N:/ < ///../] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://D ```  <br> ``` wss://[::] < //*o ```  <br> ``` wss://251.255.214.253 ```  <br> ``` wss://Z! ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::] < //[::cdef:bacb:cfc0] ```  <br> ``` ws://[eebd::efbe] < / ```  <br> ``` ws://[::] < /_ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q:/%3f ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` P:/ < /?􏔲 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: m ```  |  ``` M:/ < /嫭 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: k ```  |  ``` K:/ < //[::252.251.253.49] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` h:/ < //[::fadb:aae1:acce] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` D://_ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R:/ < //[::]:64305 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: u ```  |  ``` U:/ < //[::bffa:eecf:180.253.255.252] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` V:/ < //[::cdbe:8.251.254.254] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: c ```  |  ``` C:/ < //[::ffd3:bada] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: g ```  |  ``` g:/ < %2e/* ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` file://;, ```  <br> 


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
 ``` bad URI(is not URI?): //[::]:64305 ```  |  ``` R:/ < //[::]:64305 ```  <br> 
 ``` bad URI(is not URI?): //[::dcfd:dcef] ```  |  ``` file:/// < //[::dcfd:dcef] ```  <br> 
 ``` bad URI(is not URI?): //[::bffa:eecf:180.253.255.252] ```  |  ``` U:/ < //[::bffa:eecf:180.253.255.252] ```  <br> 
 ``` bad URI(is not URI?): //[::cdbe:8.251.254.254] ```  |  ``` V:/ < //[::cdbe:8.251.254.254] ```  <br> 
 ``` URI must be ascii only "file://\u0121-\u0141" ```  |  ``` file://ġ-Ł < / ```  <br> 
 ``` bad URI(is not URI?): //[::ffd3:bada] ```  |  ``` C:/ < //[::ffd3:bada] ```  <br> 
 ``` URI must be ascii only "/\uD228" ```  |  ``` file:/// < /툨 ```  <br> 
 ``` URI must be ascii only "file:///?\uFF66" ```  |  ``` file:///?ｦ ```  <br> 


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
 ``` wss://Z! ```  | Java <br>
 ``` file://;, ```  | chromium <br>
 ``` R:/ < //[::]:64305 ```  | Java <br>Ruby <br>
 ``` file:/// < //[::dcfd:dcef] ```  | Ruby <br>
 ``` U:/ < //[::bffa:eecf:180.253.255.252] ```  | Java <br>Ruby <br>
 ``` V:/ < //[::cdbe:8.251.254.254] ```  | Java <br>Ruby <br>
 ``` file://ġ-Ł < / ```  | Ruby <br>
 ``` C:/ < //[::ffd3:bada] ```  | Java <br>Ruby <br>
 ``` file:/// < /툨 ```  | C <br>Ruby <br>
 ``` file:///?ｦ ```  | C <br>PHP <br>Ruby <br>
 ``` ws://[::] < /_ ```  | Java <br>
 ``` g:/ < %2e/* ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 25 | 1 | 24
chromium | 8 | 1 | 7

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://[::cdfb:bafe:39.254.250.250] < / ```  | host |  ``` ::cdfb:bafe:27fe:fafa ```  |  ```  ``` 
 ``` P:/ < /?􏔲 ```  | query |  ``` ?%F4%8F%94%B2 ```  |  ``` %F4%8F%94%B2 ``` 
 ``` file:/// < //253.252.255.220 ```  | host |  ``` 253.252.255.220 ```  |  ```  ``` 
 ``` file://[bee7:bddb::abec] ```  | host |  ``` bee7:bddb::abec ```  |  ```  ``` 
 ``` h:/ < //[::fadb:aae1:acce] ```  | host |  ``` ::fadb:aae1:acce ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < /?䉷 ```  | query |  ``` ?%E4%89%B7 ```  |  ``` %E4%89%B7 ``` 
 ``` https://[::] < /?g ```  | query |  ``` ?g ```  |  ``` g ``` 
 ``` file://;, ```  | host |  ``` ;, ```  |  ```  ``` 
 ``` http://[::] < %2e%2e//%2e. ```  | filePath |  ``` / ```  |  ``` //%2e. ``` 
 ``` U:/ < //[::bffa:eecf:180.253.255.252] ```  | host |  ``` ::bffa:eecf:b4fd:fffc ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` n:/ < //[dbc1:bcca::] ```  | host |  ``` dbc1:bcca:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://ġ-Ł < / ```  | host |  ``` xn----hja4h ```  |  ```  ``` 
 ``` file:///?ｦ ```  | query |  ``` ?%EF%BD%A6 ```  |  ``` %EF%BD%A6 ``` 
 ``` file:/// < //[::dcfd:dcef] ```  | host |  ``` ::dcfd:dcef ```  |  ```  ``` 
 ``` file://207.254.251.254 ```  | host |  ``` 207.254.251.254 ```  |  ```  ``` 
 ``` file:/// < //[::ffed:abde:defd:fdc8] ```  | host |  ``` ::ffed:abde:defd:fdc8 ```  |  ```  ``` 
 ``` C:/ < //[::ffd3:bada] ```  | host |  ``` ::ffd3:bada ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` N:/ < ///../] ```  | filePath |  ``` /] ```  |  ``` //../] ``` 
 ``` file://250.251.7.251 ```  | host |  ``` 250.251.7.251 ```  |  ```  ``` 
 ``` R:/ < //[::]:64305 ```  | host |  ``` :: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` V:/ < //[::cdbe:8.251.254.254] ```  | host |  ``` ::cdbe:8fb:fefe ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::]/􏘦 ```  | host |  ``` :: ```  |  ```  ``` 
 ``` D://_ ```  | host |  ``` _ ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` K:/ < //[::252.251.253.49] ```  | host |  ``` ::fcfb:fd31 ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` https://F, ```  | host |  ``` f, ```  |  ``` f%2C ``` 
 ``` wss://Z! ```  | host |  ``` z! ```  |  ``` z%21 ``` 
 ``` file://[::cdfb:bafe:39.254.250.250] < / ```  | host |  ``` [::cdfb:bafe:27fe:fafa] ```  |  ```  ``` 
 ``` wss://[::] < //*o ```  | host |  ``` *o ```  |  ``` %2Ao ``` 
 ``` N:/ < ///../] ```  | host |  ```  ```  |  ``` .. ``` 
 ``` D://_ ```  | host |  ``` _ ```  |  ```  ``` 
 ``` file://ġ-Ł < / ```  | host |  ``` xn----hja4h ```  |  ```  ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

