# Results 

Total number of URLs: 30

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 70.9% 
JavaScripturijs | 0 | 0 | 27.9% 
Cpp | 0 | 0 | 34.6% 
JavaScriptwhatwg-url | 0 | 0 | 61.7% 
Python | 0 | 0 | 42.0% 
Go | 1 | 1 | 70.0% 
chromium | 1 | 1 | 47.74% 
PHP | 4 | 4 | 43.1% 
C | 5 | 1 | 46.8% 
Ruby | 13 | 13 | 72.02% 
Java | 16 | 10 | 39.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` wss://[::]/./ ```  <br> ``` file:///#󥓈 ```  <br> ``` file://[::]/%2e%2e/󬱰 ```  <br> ``` file:/// < 햐 ```  <br> ``` https://[::] < //M@` ```  <br> 


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
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://[::]/./ ```  <br> ``` wss://[c6fe::252.251.250.250] ```  <br> ``` wss://[::7cbc:253.250.252.255] < / ```  <br> ``` wss://[::] < //254.255.177.255 ```  <br> ``` wss://[::]:65341 ```  <br> ``` wss://[::] < /B:/ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: x ```  |  ``` X://[d1db:aace::] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` t:/ < //T ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //~! ```  <br> ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` e:/ < %2e////= ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::] < //[::babe:dcfb:ed7d:abbd] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: j ```  |  ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  <br> 
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
 ``` bad URI(is not URI?): //[::fbaa:ceec:250.254.149.251] ```  |  ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  <br> 
 ``` bad URI(is not URI?): //[::babe:dcfb:ed7d:abbd] ```  |  ``` ws://[::] < //[::babe:dcfb:ed7d:abbd] ```  <br> 
 ``` bad URI(is not URI?): //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  |  ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  <br> 
 ``` URI must be ascii only "file://[::]/%2e%2e/\u{ECC70}" ```  |  ``` file://[::]/%2e%2e/󬱰 ```  <br> 
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
 ``` t:/ < //T ```  | Java <br>
 ``` wss://[c6fe::252.251.250.250] ```  | Java <br>
 ``` F:/ < //~! ```  | Java <br>chromium <br>
 ``` file:/// < //[::3eae:befd:250.255.253.253] ```  | Ruby <br>
 ``` file:/// < //[::feeb] ```  | Ruby <br>
 ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  | Java <br>Ruby <br>
 ``` e:/ < %2e////= ```  | Java <br>
 ``` ws://[::] < //[::babe:dcfb:ed7d:abbd] ```  | Java <br>Ruby <br>
 ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  | Java <br>Ruby <br>
 ``` file:///#@ ```  | PHP <br>
 ``` wss://[::7cbc:253.250.252.255] < / ```  | Java <br>
 ``` file://[::]/%2e%2e/󬱰 ```  | C <br>Ruby <br>
 ``` file:/// < 햐 ```  | C <br>Ruby <br>
 ``` http://[::] < //[::fccf:edda:cceb:a2ff] ```  | Ruby <br>
 ``` https://[::] < //[::165.255.253.255] ```  | Ruby <br>
 ``` wss://[::] < //254.255.177.255 ```  | Java <br>
 ``` wss://[::]:65341 ```  | Java <br>
 ``` wss://[::] < /B:/ ```  | Java <br>
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | Java <br>Ruby <br>
 ``` https://[::] < //M@` ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` file:/// < /./////%2e%2e ```  | PHP <br>
 ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  | Java <br>
 ``` R://[dfaa::] ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 13 | 0 | 13
chromium | 6 | 1 | 5

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` t:/ < //T ```  | host |  ``` t ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  | host |  ``` fdbe:ccab::acdf:daef:fdfb:fbff ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[::feeb] ```  | host |  ``` ::feeb ```  |  ```  ``` 
 ``` file:/// < /./////%2e%2e ```  | filePath |  ``` //// ```  |  ``` /////%2e%2e ``` 
 ``` F:/ < //~! ```  | host |  ``` ~! ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://,= < / ```  | host |  ``` ,= ```  |  ```  ``` 
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | host |  ``` acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[::3eae:befd:250.255.253.253] ```  | host |  ``` ::3eae:befd:faff:fdfd ```  |  ```  ``` 
 ``` file://[::]/%2e%2e/󬱰 ```  | host |  ``` :: ```  |  ```  ``` 
 ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  | host |  ``` ::fbaa:ceec:fafe:95fb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` X://[d1db:aace::] ```  | host |  ``` d1db:aace:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  | host |  ``` efbb:efbc:eaff:cbaa:aebf:cada:fe43:fffb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` R://[dfaa::] ```  | host |  ``` dfaa:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://,= < / ```  | host |  ``` ,= ```  |  ```  ``` 
 ``` R://[dfaa::] ```  | host |  ``` [dfaa::] ```  |  ```  ``` 
 ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  | host |  ``` [fdbe:ccab::acdf:daef:fdfb:fbff] ```  |  ```  ``` 
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

