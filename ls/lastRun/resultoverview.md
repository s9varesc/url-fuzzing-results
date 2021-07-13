# Results 

Total number of URLs: 60

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 73.4% 
JavaScriptwhatwg-url | 0 | 0 | 63.49% 
Python | 0 | 0 | 42.0% 
JavaScripturijs | 1 | 1 | 28.08% 
Cpp | 1 | 1 | 37.0% 
Go | 2 | 2 | 74.6% 
chromium | 3 | 1 | 49.25% 
PHP | 5 | 5 | 43.1% 
C | 11 | 1 | 51.0% 
Ruby | 22 | 22 | 72.02% 
Java | 27 | 17 | 39.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` http://[::] < @𸻾 ```  <br> ``` B://[::deee:202.255.253.255] ```  <br> ``` wss://[::]/./ ```  <br> ``` file:///#󥓈 ```  <br> ``` file://[::]/%2e%2e/󬱰 ```  <br> ``` file:/// < 햐 ```  <br> ``` file://" ```  <br> ``` https://[::] < //%@) ```  <br> ``` https://[::] < //M@` ```  <br> ``` http://[::]?沫 ```  <br> ``` file://[::]/酜 ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 
 ``` URI malformed ```  |  ``` https://[::] < //%@) ```  <br> 


### Cpp

 Exception Type | URLs 
 --- | --- 
 ``` Bad URI syntax ```  |  ``` https://[::] < //%@) ```  <br> 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` The uri `file:///#%F3%A5%93%88` is invalid for the `file` scheme. ```  |  ``` file:///#󥓈 < / ```  <br> 
 ``` The uri `` is invalid for the `file` scheme. ```  |  ``` file:///#@ ```  <br> 
 ``` Host `"` is invalid : the host is not a valid registered name ```  |  ``` file://" ```  <br> 
 ```` Host ``` is invalid : the host is not a valid registered name ````  |  ``` https://[::] < //M@` ```  <br> 
 ``` If there is no authority the path `/////%2e%2e` can not start with a `//`. ```  |  ``` file:/// < /./////%2e%2e ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: b ```  |  ``` B://[::deee:202.255.253.255] < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://[::]/./ ```  <br> ``` wss://$ < / ```  <br> ``` wss://[c6fe::252.251.250.250] ```  <br> ``` wss://[::7cbc:253.250.252.255] < / ```  <br> ``` wss://[::] < //254.255.177.255 ```  <br> ``` wss://[::]:65341 ```  <br> ``` wss://[::] < /B:/ ```  <br> ``` wss://[::]/%2e/%3e ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` n://[::255.250.241.250] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: x ```  |  ``` X://[d1db:aace::] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` t:/ < //T ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //~! ```  <br> ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` e:/ < %2e////= ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::] < //[::babe:dcfb:ed7d:abbd] ```  <br> ``` ws://[::cfed:254.251.89.255] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` V:/%23 < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: j ```  |  ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: s ```  |  ``` s:/ < //D ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: o ```  |  ``` o://[::5bde] < / ```  <br> ``` o://[dcbb:ddbb::ddbb] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` H:/ < //[::7afa:254.250.252.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: g ```  |  ``` g:/ < //[::acbe:bece:252.99.251.254] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R://[dfaa::] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse //%@): invalid URL escape "%" ```  |  ``` https://[::] < //%@) ```  <br> 
 ``` parse //M@`: invalid character "`" in host name ```  |  ``` https://[::] < //M@` ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` F:/ < //~! ```  <br> ``` B://[::deee:202.255.253.255] < / ```  <br> ``` o://[::5bde] < / ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` URI must be ascii only "@\u{38EFE}" ```  |  ``` http://[::] < @𸻾 ```  <br> 
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
 ``` bad URI(is not URI?):  ```  |  ``` file://" ```  <br> 
 ``` bad URI(is not URI?): //[::165.255.253.255] ```  |  ``` https://[::] < //[::165.255.253.255] ```  <br> 
 ``` bad URI(is not URI?): //%@) ```  |  ``` https://[::] < //%@) ```  <br> 
 ``` bad URI(is not URI?): //[::7afa:254.250.252.253] ```  |  ``` H:/ < //[::7afa:254.250.252.253] ```  <br> 
 ``` bad URI(is not URI?): //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  |  ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  <br> 
 ``` bad URI(is not URI?): //[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf] ```  |  ``` https://[::] < //[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf] ```  <br> 
 ``` bad URI(is not URI?): //[::acbe:bece:252.99.251.254] ```  |  ``` g:/ < //[::acbe:bece:252.99.251.254] ```  <br> 
 ``` bad URI(is not URI?): //M@` ```  |  ``` https://[::] < //M@` ```  <br> 
 ``` URI must be ascii only "http://[::]?\u6CAB" ```  |  ``` http://[::]?沫 < / ```  <br> 
 ``` bad URI(is not URI?): //[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac] ```  |  ``` http://[::] < //[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac] ```  <br> 
 ``` URI must be ascii only "file://[::]/\u915C" ```  |  ``` file://[::]/酜 < / ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` http://[::] < @𸻾 ```  | C <br>Ruby <br>
 ``` B://[::deee:202.255.253.255] < / ```  | Java <br>chromium <br>
 ``` wss://[::]/./ ```  | C <br>Java <br>Ruby <br>
 ``` wss://$ < / ```  | Java <br>
 ``` n://[::255.250.241.250] ```  | Java <br>
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
 ``` V:/%23 < / ```  | Java <br>
 ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  | Java <br>Ruby <br>
 ``` s:/ < //D ```  | Java <br>
 ``` file:///#@ ```  | PHP <br>
 ``` o://[::5bde] < / ```  | Java <br>chromium <br>
 ``` wss://[::7cbc:253.250.252.255] < / ```  | Java <br>
 ``` file://[::]/%2e%2e/󬱰 ```  | C <br>Ruby <br>
 ``` file:/// < 햐 ```  | C <br>Ruby <br>
 ``` http://[::] < //[::fccf:edda:cceb:a2ff] ```  | Ruby <br>
 ``` file://" ```  | C <br>PHP <br>Ruby <br>
 ``` https://[::] < //[::165.255.253.255] ```  | Ruby <br>
 ``` wss://[::] < //254.255.177.255 ```  | Java <br>
 ``` https://[::] < //%@) ```  | C <br>JavaScripturijs <br>Cpp <br>Go <br>Ruby <br>
 ``` wss://[::]:65341 ```  | Java <br>
 ``` ws://[::cfed:254.251.89.255] ```  | Java <br>
 ``` H:/ < //[::7afa:254.250.252.253] ```  | Java <br>Ruby <br>
 ``` wss://[::] < /B:/ ```  | Java <br>
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | Java <br>Ruby <br>
 ``` https://[::] < //[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf] ```  | Ruby <br>
 ``` o://[dcbb:ddbb::ddbb] ```  | Java <br>
 ``` wss://[::]/%2e/%3e ```  | Java <br>
 ``` g:/ < //[::acbe:bece:252.99.251.254] ```  | Java <br>Ruby <br>
 ``` https://[::] < //M@` ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` http://[::]?沫 < / ```  | Ruby <br>
 ``` http://[::] < //[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac] ```  | Ruby <br>
 ``` file:/// < /./////%2e%2e ```  | PHP <br>
 ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  | Java <br>
 ``` file://[::]/酜 < / ```  | Ruby <br>
 ``` R://[dfaa::] ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 29 | 0 | 29
chromium | 17 | 3 | 14

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` t:/ < //T ```  | host |  ``` t ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  | host |  ``` fdbe:ccab::acdf:daef:fdfb:fbff ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[bf9b::beca:cadd:250.251.254.251] ```  | host |  ``` bf9b::beca:cadd:fafb:fefb ```  |  ```  ``` 
 ``` B://[::deee:202.255.253.255] < / ```  | host |  ``` ::deee:caff:fdff ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` o://[::5bde] < / ```  | host |  ``` ::5bde ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` n://[::255.250.241.250] ```  | host |  ``` ::fffa:f1fa ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[::feeb] ```  | host |  ``` ::feeb ```  |  ```  ``` 
 ``` file:/// < /./////%2e%2e ```  | filePath |  ``` //// ```  |  ``` /////%2e%2e ``` 
 ``` F:/ < //~! ```  | host |  ``` ~! ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://,= < / ```  | host |  ``` ,= ```  |  ```  ``` 
 ``` H:/ < //[::7afa:254.250.252.253] ```  | host |  ``` ::7afa:fefa:fcfd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | host |  ``` acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::]/酜 < / ```  | host |  ``` :: ```  |  ```  ``` 
 ``` file://[ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5] ```  | host |  ``` ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5 ```  |  ```  ``` 
 ``` file:/// < //[::3eae:befd:250.255.253.253] ```  | host |  ``` ::3eae:befd:faff:fdfd ```  |  ```  ``` 
 ``` file://[::]/%2e%2e/󬱰 ```  | host |  ``` :: ```  |  ```  ``` 
 ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  | host |  ``` ::fbaa:ceec:fafe:95fb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` https://.@, ```  | username |  ``` . ```  |  ``` %2E ``` 
 ``` X://[d1db:aace::] ```  | host |  ``` d1db:aace:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://U ```  | host |  ``` u ```  |  ```  ``` 
 ``` g:/ < //[::acbe:bece:252.99.251.254] ```  | host |  ``` ::acbe:bece:fc63:fbfe ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` o://[dcbb:ddbb::ddbb] ```  | host |  ``` dcbb:ddbb::ddbb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://" ```  | host |  ``` " ```  |  ```  ``` 
 ``` file://[::fede:dcaf:251.251.9.254] ```  | host |  ``` ::fede:dcaf:fbfb:9fe ```  |  ```  ``` 
 ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  | host |  ``` efbb:efbc:eaff:cbaa:aebf:cada:fe43:fffb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::dcee:250.250.254.232] ```  | host |  ``` ::dcee:fafa:fee8 ```  |  ```  ``` 
 ``` s:/ < //D ```  | host |  ``` d ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` R://[dfaa::] ```  | host |  ``` dfaa:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://)5 ```  | host |  ``` )5 ```  |  ```  ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://,= < / ```  | host |  ``` ,= ```  |  ```  ``` 
 ``` file://[::]/酜 < / ```  | host |  ``` [::] ```  |  ```  ``` 
 ``` R://[dfaa::] ```  | host |  ``` [dfaa::] ```  |  ```  ``` 
 ``` n://[::255.250.241.250] ```  | host |  ``` [::fffa:f1fa] ```  |  ```  ``` 
 ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  | host |  ``` [fdbe:ccab::acdf:daef:fdfb:fbff] ```  |  ```  ``` 
 ``` wss://$ < / ```  | host |  ``` $ ```  |  ``` %24 ``` 
 ``` file://)5 ```  | host |  ``` )5 ```  |  ``` %295 ``` 
 ``` https://.@, ```  | host |  ``` , ```  |  ``` %2C ``` 
 ``` file://" ```  | host |  ``` " ```  |  ``` %22 ``` 
 ``` https://[::] < //%@) ```  | host |  ``` ) ```  |  ``` %29 ``` 
 ``` https://[::] < //M@` ```  | host |  ``` ` ```  |  ``` %60 ``` 
 ``` X://[d1db:aace::] ```  | host |  ``` [d1db:aace::] ```  |  ```  ``` 
 ``` http://b$ ```  | host |  ``` b$ ```  |  ``` b%24 ``` 
 ``` o://[dcbb:ddbb::ddbb] ```  | host |  ``` [dcbb:ddbb::ddbb] ```  |  ```  ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

