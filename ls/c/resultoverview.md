# Results 

Total number of URLs: 10

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 62.5% 
JavaScripturijs | 0 | 0 | 24.7% 
Cpp | 0 | 0 | 27.5% 
Go | 0 | 0 | 68.3% 
JavaScriptwhatwg-url | 0 | 0 | 48.88% 
chromium | 0 | 0 | 40.98% 
Python | 0 | 0 | 41.0% 
PHP | 2 | 2 | 38.79% 
Java | 2 | 2 | 39.0% 
C | 5 | 1 | 31.5% 
Ruby | 7 | 7 | 70.47% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ftp://[::]/￴ ```  <br> ``` file:/// < /?䉷 ```  <br> ``` http://[::]#𕱽 ```  <br> ``` file:/// < /􏔼 ```  <br> ``` http://[::]/󚇜 ```  <br> 


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


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` n:/ < //[dbc1:bcca::] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://D ```  <br> 


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

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 4 | 0 | 4
chromium | 0 | 0 | 0

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < /?䉷 ```  | query |  ``` ?%E4%89%B7 ```  |  ``` %E4%89%B7 ``` 
 ``` n:/ < //[dbc1:bcca::] ```  | host |  ``` dbc1:bcca:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[::ffed:abde:defd:fdc8] ```  | host |  ``` ::ffed:abde:defd:fdc8 ```  |  ```  ``` 
 ``` file://250.251.7.251 ```  | host |  ``` 250.251.7.251 ```  |  ```  ``` 

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

