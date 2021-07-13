# Results 

Total number of URLs: 20

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 66.6% 
JavaScripturijs | 0 | 0 | 27.3% 
Cpp | 0 | 0 | 33.4% 
JavaScriptwhatwg-url | 0 | 0 | 56.78% 
Python | 0 | 0 | 42.0% 
Go | 1 | 1 | 70.0% 
chromium | 1 | 1 | 42.86% 
C | 4 | 1 | 45.2% 
PHP | 4 | 4 | 41.38% 
Java | 8 | 5 | 39.0% 
Ruby | 9 | 9 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` wss://[::]/./ ```  <br> ``` file:///#󥓈 ```  <br> ``` file:/// < 햐 ```  <br> ``` https://[::] < //M@` ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` The uri `file:///#%F3%A5%93%88` is invalid for the `file` scheme. ```  |  ``` file:///#󥓈 < / ```  <br> 
 ``` The uri `` is invalid for the `file` scheme. ```  |  ``` file:///#@ ```  <br> 
 ```` Host ``` is invalid : the host is not a valid registered name ````  |  ``` https://[::] < //M@` ```  <br> 
 ``` If there is no authority the path `/////%2e%2e` can not start with a `//`. ```  |  ``` file:/// < /./////%2e%2e ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://[::]/./ ```  <br> ``` wss://[c6fe::252.251.250.250] ```  <br> ``` wss://[::7cbc:253.250.252.255] < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: x ```  |  ``` X://[d1db:aace::] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //~! ```  <br> ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` e:/ < %2e////= ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R://[dfaa::] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse //M@`: invalid character "`" in host name ```  |  ``` https://[::] < //M@` ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` F:/ < //~! ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` URI must be ascii only "wss://[::]/./\uEB09" ```  |  ``` wss://[::]/./ ```  <br> 
 ``` URI must be ascii only "file:///#\u{E54C8}" ```  |  ``` file:///#󥓈 < / ```  <br> 
 ``` bad URI(is not URI?): //[::3eae:befd:250.255.253.253] ```  |  ``` file:/// < //[::3eae:befd:250.255.253.253] ```  <br> 
 ``` bad URI(is not URI?): //[::feeb] ```  |  ``` file:/// < //[::feeb] ```  <br> 
 ``` URI must be ascii only "\uD590" ```  |  ``` file:/// < 햐 ```  <br> 
 ``` bad URI(is not URI?): //[::fccf:edda:cceb:a2ff] ```  |  ``` http://[::] < //[::fccf:edda:cceb:a2ff] ```  <br> 
 ``` bad URI(is not URI?): //[::165.255.253.255] ```  |  ``` https://[::] < //[::165.255.253.255] ```  <br> 
 ``` bad URI(is not URI?): //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  |  ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  <br> 
 ``` bad URI(is not URI?): //M@` ```  |  ``` https://[::] < //M@` ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` wss://[::]/./ ```  | C <br>Java <br>Ruby <br>
 ``` X://[d1db:aace::] ```  | Java <br>
 ``` file:///#󥓈 < / ```  | PHP <br>Ruby <br>
 ``` wss://[c6fe::252.251.250.250] ```  | Java <br>
 ``` F:/ < //~! ```  | Java <br>chromium <br>
 ``` file:/// < //[::3eae:befd:250.255.253.253] ```  | Ruby <br>
 ``` file:/// < //[::feeb] ```  | Ruby <br>
 ``` e:/ < %2e////= ```  | Java <br>
 ``` file:///#@ ```  | PHP <br>
 ``` wss://[::7cbc:253.250.252.255] < / ```  | Java <br>
 ``` file:/// < 햐 ```  | C <br>Ruby <br>
 ``` http://[::] < //[::fccf:edda:cceb:a2ff] ```  | Ruby <br>
 ``` https://[::] < //[::165.255.253.255] ```  | Ruby <br>
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | Java <br>Ruby <br>
 ``` https://[::] < //M@` ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` file:/// < /./////%2e%2e ```  | PHP <br>
 ``` R://[dfaa::] ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 8 | 0 | 8
chromium | 5 | 1 | 4

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < //[::feeb] ```  | host |  ``` ::feeb ```  |  ```  ``` 
 ``` file:/// < /./////%2e%2e ```  | filePath |  ``` //// ```  |  ``` /////%2e%2e ``` 
 ``` F:/ < //~! ```  | host |  ``` ~! ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://,= < / ```  | host |  ``` ,= ```  |  ```  ``` 
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | host |  ``` acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[::3eae:befd:250.255.253.253] ```  | host |  ``` ::3eae:befd:faff:fdfd ```  |  ```  ``` 
 ``` X://[d1db:aace::] ```  | host |  ``` d1db:aace:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` R://[dfaa::] ```  | host |  ``` dfaa:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://,= < / ```  | host |  ``` ,= ```  |  ```  ``` 
 ``` R://[dfaa::] ```  | host |  ``` [dfaa::] ```  |  ```  ``` 
 ``` https://[::] < //M@` ```  | host |  ``` ` ```  |  ``` %60 ``` 
 ``` X://[d1db:aace::] ```  | host |  ``` [d1db:aace::] ```  |  ```  ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

