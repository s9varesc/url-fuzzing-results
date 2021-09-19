# Results 

Total number of URLs: 81

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 68.8% 
JavaScripturijs | 0 | 0 | 28.86% 
JavaScriptwhatwg-url | 0 | 0 | 61.7% 
Python | 0 | 0 | 43.0% 
Cpp | 1 | 1 | 35.4% 
Go | 3 | 3 | 75.3% 
PHP | 7 | 6 | 45.69% 
chromium | 7 | 1 | 45.86% 
C | 23 | 1 | 50.7% 
Java | 34 | 21 | 39.0% 
Ruby | 39 | 39 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` N:/𾟽 ```  <br> ``` r:/ < /?􏰜 ```  <br> ``` ftp://[::] < /? ```  <br> ``` file:/// < .%2e/ ```  <br> ``` file:/// < //[::]/%2e%2e//ꮎ ```  <br> ``` V:/%2e./ ```  <br> ``` file:/// < /%60ᦀ ```  <br> ``` http://[::] < /?ﻃ ```  <br> ``` file:/// < 򰌩 ```  <br> ``` file:/// < 򰠧 ```  <br> ``` ws://[::] < /?ﻶ ```  <br> ``` http://[::]/%2e%2e//﷎ ```  <br> ``` K:/ < /// ```  <br> ``` file:/// < ///%2e//񓀯 ```  <br> ``` I:/ < ///﷎ ```  <br> ``` file:/// < ///[] ```  <br> ``` file:/// < ///%2e.//򃗸 ```  <br> ``` a:///'ﺩ ```  <br> ``` file://Ćm ```  <br> ``` c:/ < /=% ```  <br> ``` file:/// < //{n ```  <br> ``` file:///#񅏼 ```  <br> ``` G://` ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 
 ``` Bad URI syntax ```  |  ``` c:/ < /=% ```  <br> 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` The uri `ftp://[::]/?%EE%93%BB` is invalid for the `ftp` scheme. ```  |  ``` ftp://[::] < /? ```  <br> 
 ``` The host `-U` is invalid : a label starts with a hyphen-minus ("-"). ```  |  ``` wss://-U ```  <br> 
 ``` The uri `` is invalid for the `file` scheme. ```  |  ``` file:///#U ```  <br> ``` file:///#6 ```  <br> 
 ``` Host `{n` is invalid : the host is not a valid registered name ```  |  ``` file:/// < //{n ```  <br> 
 ``` The uri `file:///#%F1%85%8F%BC` is invalid for the `file` scheme. ```  |  ``` file:///#񅏼 ```  <br> 
 ```` Host ``` is invalid : the host is not a valid registered name ````  |  ``` G://` < / ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` N:/𾟽 < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://254.57.253.254 ```  <br> ``` wss://[::fe8d:252.250.253.255] < / ```  <br> ``` wss://-U ```  <br> ``` wss://[::] < //[::cbcc:dabe:254.251.21.255] ```  <br> ``` wss://[::254.255.251.61] < / ```  <br> ``` wss://[f0ca::bafe:251.253.250.251] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` r:/ < /?􏰜 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: a ```  |  ``` A://!n ```  <br> ``` A:/ < //[::afab:254.139.250.253] ```  <br> ``` A:/ < //[cab7::ebfe] ```  <br> ``` a:///'ﺩ < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::7.250.250.251] ```  <br> ``` ws://[::] < /?ﻶ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` V:/%2e./ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: s ```  |  ``` S://[6fec::cbbc:ebca:255.251.254.253] < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: y ```  |  ``` Y:/8 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ml ```  |  ``` mL:/ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` h:/ < %2e%2e/x ```  <br> ``` H://[adbb:eaaf:dbbe:faea:efbc:fdaf:255.65.254.251] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` f:/ < //[cc7e:dfbd::253.255.255.255] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` q:/ < //[::252.250.249.250] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` p:/ < /%7b~ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` L:/ < //[::3bcd:ffdf] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` w:/J:/ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: k ```  |  ``` K:/ < /// ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: g ```  |  ``` G:/ < //[::253.250.31.250] ```  <br> ``` g:/ ```  <br> ``` G://` < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: i ```  |  ``` I:/ < ///﷎ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: c ```  |  ``` c:/ < ///j:/ ```  <br> ``` c:/ < /=% ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: m ```  |  ``` m:/ < //[cfb2::dbce:251.250.253.252] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` T://[dd2a:beca::ebfb:caaf:250.254.251.252] < / ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse /=%: invalid URL escape "%" ```  |  ``` c:/ < /=% ```  <br> 
 ``` parse //{n: invalid character "{" in host name ```  |  ``` file:/// < //{n ```  <br> 
 ``` parse G://`: invalid character "`" in host name ```  |  ``` G://` < / ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` I:/ < ///﷎ ```  <br> ``` T://[dd2a:beca::ebfb:caaf:250.254.251.252] < / ```  <br> ``` K:/ < /// ```  <br> ``` file:/// < //;v ```  <br> ``` G://` < / ```  <br> ``` a:///'ﺩ < / ```  <br> ``` S://[6fec::cbbc:ebca:255.251.254.253] < / ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` URI must be ascii only "N:/\u{3E7FD}" ```  |  ``` N:/𾟽 < / ```  <br> 
 ``` bad URI(is not URI?): //[fafa:edaa:aeaf:abaf:baab:bfac:eadb:cf6c] ```  |  ``` file:/// < //[fafa:edaa:aeaf:abaf:baab:bfac:eadb:cf6c] ```  <br> 
 ``` bad URI(is not URI?): //[::]/, ```  |  ``` file:/// < //[::]/, ```  <br> 
 ``` URI must be ascii only "/?\u{10FC1C}" ```  |  ``` r:/ < /?􏰜 ```  <br> 
 ``` URI must be ascii only "/?\uE4FB" ```  |  ``` ftp://[::] < /? ```  <br> 
 ``` URI must be ascii only ".%2e/\uE5A3" ```  |  ``` file:/// < .%2e/ ```  <br> 
 ``` URI must be ascii only "//[::]/%2e%2e//\uAB8E" ```  |  ``` file:/// < //[::]/%2e%2e//ꮎ ```  <br> 
 ``` URI must be ascii only "V:/%2e./\uF288" ```  |  ``` V:/%2e./ ```  <br> 
 ``` bad URI(is not URI?): //[::]/%2e%2e/%2e. ```  |  ``` file:/// < //[::]/%2e%2e/%2e. ```  <br> 
 ``` URI must be ascii only "/%60\u1980" ```  |  ``` file:/// < /%60ᦀ ```  <br> 
 ``` bad URI(is not URI?): //[::eaec:254.2.253.255] ```  |  ``` http://[::] < //[::eaec:254.2.253.255] ```  <br> 
 ``` URI must be ascii only "/?\uFEC3" ```  |  ``` http://[::] < /?ﻃ ```  <br> 
 ``` bad URI(is not URI?): //[::debd:facc:deff] ```  |  ``` file:/// < //[::debd:facc:deff] ```  <br> 
 ``` URI must be ascii only "\u{B0329}" ```  |  ``` file:/// < 򰌩 ```  <br> 
 ``` bad URI(is not URI?): //[cc7e:dfbd::253.255.255.255] ```  |  ``` f:/ < //[cc7e:dfbd::253.255.255.255] ```  <br> 
 ``` bad URI(is not URI?): //[::252.250.249.250] ```  |  ``` q:/ < //[::252.250.249.250] ```  <br> 
 ``` URI must be ascii only "\u{B0827}" ```  |  ``` file:/// < 򰠧 ```  <br> 
 ``` URI must be ascii only "/?\uFEF6" ```  |  ``` ws://[::] < /?ﻶ ```  <br> 
 ``` URI must be ascii only "http://[::]/%2e%2e//\uFDCE" ```  |  ``` http://[::]/%2e%2e//﷎ ```  <br> 
 ``` bad URI(is not URI?): //[::3bcd:ffdf] ```  |  ``` L:/ < //[::3bcd:ffdf] ```  <br> 
 ``` bad URI(is not URI?): //[::afab:254.139.250.253] ```  |  ``` A:/ < //[::afab:254.139.250.253] ```  <br> 
 ``` URI must be ascii only "///\uF57D" ```  |  ``` K:/ < /// ```  <br> 
 ``` bad URI(is not URI?): //[1daf::ddac:250.250.251.252] ```  |  ``` ftp://[::] < //[1daf::ddac:250.250.251.252] ```  <br> 
 ``` bad URI(is not URI?): //[cab7::ebfe] ```  |  ``` A:/ < //[cab7::ebfe] ```  <br> 
 ``` bad URI(is not URI?): //[::253.250.31.250] ```  |  ``` G:/ < //[::253.250.31.250] ```  <br> 
 ``` URI must be ascii only "///%2e//\u{5302F}" ```  |  ``` file:/// < ///%2e//񓀯 ```  <br> 
 ``` bad URI(is not URI?): //[5bcc:ccca::] ```  |  ``` https://[::] < //[5bcc:ccca::] ```  <br> 
 ``` URI must be ascii only "///\uFDCE" ```  |  ``` I:/ < ///﷎ ```  <br> 
 ``` bad URI(is not URI?): ///[] ```  |  ``` file:/// < ///[] ```  <br> 
 ``` URI must be ascii only "///%2e.//\u{835F8}" ```  |  ``` file:/// < ///%2e.//򃗸 ```  <br> 
 ``` bad URI(is not URI?): //[::cbcc:dabe:254.251.21.255] ```  |  ``` wss://[::] < //[::cbcc:dabe:254.251.21.255] ```  <br> 
 ``` bad URI(is not URI?): //[cfb2::dbce:251.250.253.252] ```  |  ``` m:/ < //[cfb2::dbce:251.250.253.252] ```  <br> 
 ``` undefined method `typecode' for "//:X@-":String ```  |  ``` ftp://[::] < //:X@- ```  <br> 
 ``` URI must be ascii only "a:///'\uFEA9" ```  |  ``` a:///'ﺩ < / ```  <br> 
 ``` URI must be ascii only "file://\u0106m" ```  |  ``` file://Ćm ```  <br> 
 ``` bad URI(is not URI?): /=% ```  |  ``` c:/ < /=% ```  <br> 
 ``` bad URI(is not URI?): //{n ```  |  ``` file:/// < //{n ```  <br> 
 ``` URI must be ascii only "file:///#\u{453FC}" ```  |  ``` file:///#񅏼 ```  <br> 
 ``` bad URI(is not URI?): G://` ```  |  ``` G://` < / ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` N:/𾟽 < / ```  | Java <br>Ruby <br>
 ``` wss://254.57.253.254 ```  | Java <br>
 ``` file:/// < //[fafa:edaa:aeaf:abaf:baab:bfac:eadb:cf6c] ```  | Ruby <br>
 ``` file:/// < //[::]/, ```  | Ruby <br>
 ``` r:/ < /?􏰜 ```  | C <br>Java <br>Ruby <br>
 ``` ftp://[::] < /? ```  | C <br>PHP <br>Ruby <br>
 ``` file:/// < .%2e/ ```  | C <br>Ruby <br>
 ``` A://!n ```  | Java <br>
 ``` ws://[::7.250.250.251] ```  | Java <br>
 ``` file:/// < //[::]/%2e%2e//ꮎ ```  | C <br>Ruby <br>
 ``` V:/%2e./ ```  | C <br>Java <br>Ruby <br>
 ``` file:/// < //[::]/%2e%2e/%2e. ```  | Ruby <br>
 ``` S://[6fec::cbbc:ebca:255.251.254.253] < / ```  | Java <br>chromium <br>
 ``` file:/// < /%60ᦀ ```  | C <br>Ruby <br>
 ``` wss://[::fe8d:252.250.253.255] < / ```  | Java <br>
 ``` http://[::] < //[::eaec:254.2.253.255] ```  | Ruby <br>
 ``` http://[::] < /?ﻃ ```  | C <br>Ruby <br>
 ``` file:/// < //;v ```  | chromium <br>
 ``` Y:/8 ```  | Java <br>
 ``` mL:/ ```  | Java <br>
 ``` file:/// < //[::debd:facc:deff] ```  | Ruby <br>
 ``` h:/ < %2e%2e/x ```  | Java <br>
 ``` file:/// < 򰌩 ```  | C <br>Ruby <br>
 ``` f:/ < //[cc7e:dfbd::253.255.255.255] ```  | Java <br>Ruby <br>
 ``` q:/ < //[::252.250.249.250] ```  | Java <br>Ruby <br>
 ``` file:/// < 򰠧 ```  | C <br>Ruby <br>
 ``` ws://[::] < /?ﻶ ```  | C <br>Java <br>Ruby <br>
 ``` http://[::]/%2e%2e//﷎ ```  | C <br>Ruby <br>
 ``` p:/ < /%7b~ ```  | Java <br>
 ``` L:/ < //[::3bcd:ffdf] ```  | Java <br>Ruby <br>
 ``` wss://-U ```  | PHP <br>Java <br>
 ``` w:/J:/ ```  | Java <br>
 ``` A:/ < //[::afab:254.139.250.253] ```  | Java <br>Ruby <br>
 ``` file:///#U ```  | PHP <br>
 ``` K:/ < /// ```  | C <br>Java <br>chromium <br>Ruby <br>
 ``` ftp://[::] < //[1daf::ddac:250.250.251.252] ```  | Ruby <br>
 ``` A:/ < //[cab7::ebfe] ```  | Java <br>Ruby <br>
 ``` G:/ < //[::253.250.31.250] ```  | Java <br>Ruby <br>
 ``` file:/// < ///%2e//񓀯 ```  | C <br>Ruby <br>
 ``` https://[::] < //[5bcc:ccca::] ```  | Ruby <br>
 ``` file:///#6 ```  | PHP <br>
 ``` I:/ < ///﷎ ```  | C <br>Java <br>chromium <br>Ruby <br>
 ``` c:/ < ///j:/ ```  | Java <br>
 ``` file:/// < ///[] ```  | C <br>Ruby <br>
 ``` file:/// < ///%2e.//򃗸 ```  | C <br>Ruby <br>
 ``` wss://[::] < //[::cbcc:dabe:254.251.21.255] ```  | Java <br>Ruby <br>
 ``` m:/ < //[cfb2::dbce:251.250.253.252] ```  | Java <br>Ruby <br>
 ``` H://[adbb:eaaf:dbbe:faea:efbc:fdaf:255.65.254.251] ```  | Java <br>
 ``` ftp://[::] < //:X@- ```  | Ruby <br>
 ``` wss://[::254.255.251.61] < / ```  | Java <br>
 ``` a:///'ﺩ < / ```  | Java <br>chromium <br>Ruby <br>
 ``` file://Ćm ```  | C <br>Ruby <br>
 ``` T://[dd2a:beca::ebfb:caaf:250.254.251.252] < / ```  | Java <br>chromium <br>
 ``` c:/ < /=% ```  | C <br>Cpp <br>Java <br>Go <br>Ruby <br>
 ``` file:/// < //{n ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` g:/ ```  | Java <br>
 ``` wss://[f0ca::bafe:251.253.250.251] ```  | Java <br>
 ``` file:///#񅏼 ```  | C <br>PHP <br>Ruby <br>
 ``` G://` < / ```  | PHP <br>Java <br>Go <br>chromium <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 32 | 0 | 32
chromium | 13 | 7 | 6

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` H://[adbb:eaaf:dbbe:faea:efbc:fdaf:255.65.254.251] ```  | host |  ``` adbb:eaaf:dbbe:faea:efbc:fdaf:ff41:fefb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[daee:cafa::255.254.255.250] ```  | host |  ``` daee:cafa::fffe:fffa ```  |  ```  ``` 
 ``` G://` < / ```  | host |  ``` ` ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //{n ```  | host |  ``` {n ```  |  ```  ``` 
 ``` L:/ < //[::3bcd:ffdf] ```  | host |  ``` ::3bcd:ffdf ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //185.253.253.252 ```  | host |  ``` 185.253.253.252 ```  |  ```  ``` 
 ``` q:/ < //[::252.250.249.250] ```  | host |  ``` ::fcfa:f9fa ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` A:/ < //[cab7::ebfe] ```  | host |  ``` cab7::ebfe ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:///%2e/%2e ```  | filePath |  ``` / ```  |  ``` /%2e ``` 
 ``` file://[::cebf:eedc:254.191.250.251] ```  | host |  ``` ::cebf:eedc:febf:fafb ```  |  ```  ``` 
 ``` S://[6fec::cbbc:ebca:255.251.254.253] < / ```  | host |  ``` 6fec::cbbc:ebca:fffb:fefd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://b ```  | host |  ``` b ```  |  ```  ``` 
 ``` file://[d2ef::dafa:ddfb:250.255.253.253] ```  | host |  ``` d2ef::dafa:ddfb:faff:fdfd ```  |  ```  ``` 
 ``` file://Ćm ```  | host |  ``` xn--m-zha ```  |  ```  ``` 
 ``` K:/ < /// ```  | filePath |  ``` /%EF%95%BD ```  |  ``` //%EF%95%BD/ ``` 
 ``` G:/ < //[::253.250.31.250] ```  | host |  ``` ::fdfa:1ffa ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://63.255.251.255 < / ```  | host |  ``` 63.255.251.255 ```  |  ```  ``` 
 ``` T://[dd2a:beca::ebfb:caaf:250.254.251.252] < / ```  | host |  ``` dd2a:beca::ebfb:caaf:fafe:fbfc ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` I:/ < ///﷎ ```  | filePath |  ``` /%EF%B7%8E ```  |  ``` //%EF%B7%8E/ ``` 
 ``` a:///'ﺩ < / ```  | filePath |  ``` / ```  |  ``` /// ``` 
 ``` file:/// < //[::]/%2e%2e//ꮎ ```  | host |  ``` :: ```  |  ```  ``` 
 ``` file:/// < //[::]/%2e%2e/%2e. ```  | host |  ``` :: ```  |  ```  ``` 
 ``` file:/// < //[::]/, ```  | host |  ``` :: ```  |  ```  ``` 
 ``` file:/// < //[::debd:facc:deff] ```  | host |  ``` ::debd:facc:deff ```  |  ```  ``` 
 ``` m:/ < //[cfb2::dbce:251.250.253.252] ```  | host |  ``` cfb2::dbce:fbfa:fdfc ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` f:/ < //[cc7e:dfbd::253.255.255.255] ```  | host |  ``` cc7e:dfbd::fdff:ffff ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` A:/ < //[::afab:254.139.250.253] ```  | host |  ``` ::afab:fe8b:fafd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[aa7e:adae::caed] ```  | host |  ``` aa7e:adae::caed ```  |  ```  ``` 
 ``` c:/ < ///j:/ ```  | filePath |  ``` /j:/ ```  |  ``` //j/ ``` 
 ``` file:/// < //;v ```  | host |  ``` ;v ```  |  ```  ``` 
 ``` file:/// < //[fafa:edaa:aeaf:abaf:baab:bfac:eadb:cf6c] ```  | host |  ``` fafa:edaa:aeaf:abaf:baab:bfac:eadb:cf6c ```  |  ```  ``` 
 ``` A://!n ```  | host |  ``` !n ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` ftp://8) < / ```  | host |  ``` 8) ```  |  ``` 8%29 ``` 
 ``` A://!n ```  | host |  ``` !n ```  |  ```  ``` 
 ``` H://[adbb:eaaf:dbbe:faea:efbc:fdaf:255.65.254.251] ```  | host |  ``` [adbb:eaaf:dbbe:faea:efbc:fdaf:ff41:fefb] ```  |  ```  ``` 
 ``` c:/ < ///j:/ ```  | host |  ```  ```  |  ``` j ``` 
 ``` file://63.255.251.255 < / ```  | host |  ``` 63.255.251.255 ```  |  ```  ``` 
 ``` file:/// < //{n ```  | host |  ``` {n ```  |  ``` %7Bn ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

