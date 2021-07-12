# Results 

Total number of URLs: 39

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScriptwhatwg-url | 0 | 0 | 63.04% 
Python | 0 | 0 | 44.0% 
firefox | 1 | 1 | 72.2% 
JavaScripturijs | 1 | 1 | 29.12% 
chromium | 1 | 1 | 48.68% 
Cpp | 2 | 1 | 36.1% 
PHP | 6 | 5 | 47.41% 
Go | 6 | 6 | 76.3% 
C | 16 | 1 | 47.5% 
Java | 18 | 13 | 39.0% 
Ruby | 24 | 23 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` https://%3d@" ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ws://[::]?⍭ ```  <br> ``` https://%3d@" ```  <br> ``` file://ž2 ```  <br> ``` S:/ < //` ```  <br> ``` file:///+ ```  <br> ``` file://{ ```  <br> ``` file:/// < /%2e/琮 ```  <br> ``` wss://[::]?񴰅 ```  <br> ``` file:/// < %' ```  <br> ``` m:/ < /?ｷ ```  <br> ``` W:/? ```  <br> ``` O:/ < 𿇰 ```  <br> ``` http://[::]?﷎ ```  <br> ``` file:/// < /#￸ ```  <br> ``` T:/%﹯ ```  <br> ``` F:/ < //{v ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 
 ``` URI malformed ```  |  ``` file:/// < %' ```  <br> 


### Cpp

 Exception Type | URLs 
 --- | --- 
 ``` Bad URI syntax ```  |  ``` file:/// < %' ```  <br> ``` T:/%﹯ ```  <br> 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `"` is invalid : the host is not a valid registered name ```  |  ``` https://%3d@" ```  <br> 
 ```` Host ``` is invalid : the host is not a valid registered name ````  |  ``` S:/ < //` ```  <br> 
 ``` Host `{` is invalid : the host is not a valid registered name ```  |  ``` file://{ ```  <br> ``` file://{ < / ```  <br> 
 ``` The uri `file:///#%EF%BF%B8` is invalid for the `file` scheme. ```  |  ``` file:/// < /#￸ ```  <br> 
 ``` Host `{v` is invalid : the host is not a valid registered name ```  |  ``` F:/ < //{v ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::]?⍭ ```  <br> ``` ws://[::dced:ffda:dbea:eebf] ```  <br> ``` ws://[::]:65530 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //M~ ```  <br> ``` F:/ < //{v ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q:/h:/ < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R:/ < /c:/ ```  <br> ``` R:/ < //[::eded] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: s ```  |  ``` S:/ < //` ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` N:/ < //+ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://[::]?񴰅 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: m ```  |  ``` m:/ < /?ｷ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` W:/? < / ```  <br> ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: o ```  |  ``` O:/ < 𿇰 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` T:/%﹯ ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse //`: invalid character "`" in host name ```  |  ``` S:/ < //` ```  <br> 
 ``` parse : invalid character "{" in host name ```  |  ``` file://{ ```  <br> 
 ``` parse file://{: invalid character "{" in host name ```  |  ``` file://{ < / ```  <br> 
 ``` parse %': invalid URL escape "%'" ```  |  ``` file:/// < %' ```  <br> 
 ``` parse : invalid URL escape "%\xef\xb9" ```  |  ``` T:/%﹯ ```  <br> 
 ``` parse //{v: invalid character "{" in host name ```  |  ``` F:/ < //{v ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` F:/ < //M~ ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` URI must be ascii only "ws://[::]?\u236D" ```  |  ``` ws://[::]?⍭ ```  <br> 
 ``` bad URI(is not URI?):  ```  |  ``` https://%3d@" ```  <br> ``` file://{ ```  <br> 
 ``` bad URI(is not URI?): //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  |  ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  <br> 
 ``` URI must be ascii only "file://\u017E2" ```  |  ``` file://ž2 ```  <br> 
 ``` bad URI(is not URI?): //[cae2:ebaa::feff:fadc:251.254.253.254] ```  |  ``` file:/// < //[cae2:ebaa::feff:fadc:251.254.253.254] ```  <br> 
 ``` bad URI(is not URI?): //` ```  |  ``` S:/ < //` ```  <br> 
 ``` URI must be ascii only "file:///+\uECD7" ```  |  ``` file:///+ ```  <br> 
 ``` bad URI(is not URI?): //[d7fd:dbbb::251.254.255.255] ```  |  ``` https://[::] < //[d7fd:dbbb::251.254.255.255] ```  <br> 
 ``` bad URI(is not URI?): //[a5fa:edee::beae:beeb:252.252.254.253] ```  |  ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  <br> 
 ``` bad URI(is not URI?): //[df9c::254.250.253.255] ```  |  ``` ftp://[::] < //[df9c::254.250.253.255] ```  <br> 
 ``` bad URI(is not URI?): //[::eded] ```  |  ``` R:/ < //[::eded] ```  <br> 
 ``` bad URI(is not URI?): file://{ ```  |  ``` file://{ < / ```  <br> 
 ``` URI must be ascii only "/%2e/\u742E" ```  |  ``` file:/// < /%2e/琮 ```  <br> 
 ``` URI must be ascii only "wss://[::]?\u{74C05}" ```  |  ``` wss://[::]?񴰅 ```  <br> 
 ``` bad URI(is not URI?): %' ```  |  ``` file:/// < %' ```  <br> 
 ``` URI must be ascii only "/?\uFF77" ```  |  ``` m:/ < /?ｷ ```  <br> 
 ``` URI must be ascii only "W:/?\uE8AC" ```  |  ``` W:/? < / ```  <br> 
 ``` URI must be ascii only "\u{3F1F0}" ```  |  ``` O:/ < 𿇰 ```  <br> 
 ``` bad URI(is not URI?): //[7eaf::adfa:bbde:254.253.252.250] ```  |  ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  <br> 
 ``` URI must be ascii only "http://[::]?\uFDCE" ```  |  ``` http://[::]?﷎ < / ```  <br> 
 ``` URI must be ascii only "/#\uFFF8" ```  |  ``` file:/// < /#￸ ```  <br> 
 ``` URI must be ascii only "T:/%\uFE6F" ```  |  ``` T:/%﹯ ```  <br> 
 ``` bad URI(is not URI?): //{v ```  |  ``` F:/ < //{v ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` ws://[::]?⍭ ```  | C <br>Java <br>Ruby <br>
 ``` F:/ < //M~ ```  | Java <br>chromium <br>
 ``` https://%3d@" ```  | firefox <br>C <br>PHP <br>Ruby <br>
 ``` ws://[::dced:ffda:dbea:eebf] ```  | Java <br>
 ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  | Java <br>Ruby <br>
 ``` Q:/h:/ < / ```  | Java <br>
 ``` R:/ < /c:/ ```  | Java <br>
 ``` file://ž2 ```  | C <br>Ruby <br>
 ``` file:/// < //[cae2:ebaa::feff:fadc:251.254.253.254] ```  | Ruby <br>
 ``` S:/ < //` ```  | C <br>PHP <br>Java <br>Go <br>Ruby <br>
 ``` file:///+ ```  | C <br>Ruby <br>
 ``` https://[::] < //[d7fd:dbbb::251.254.255.255] ```  | Ruby <br>
 ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  | Java <br>Ruby <br>
 ``` file://{ ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` ftp://[::] < //[df9c::254.250.253.255] ```  | Ruby <br>
 ``` R:/ < //[::eded] ```  | Java <br>Ruby <br>
 ``` file://{ < / ```  | PHP <br>Go <br>Ruby <br>
 ``` N:/ < //+ ```  | Java <br>
 ``` file:/// < /%2e/琮 ```  | C <br>Ruby <br>
 ``` wss://[::]?񴰅 ```  | C <br>Java <br>Ruby <br>
 ``` file:/// < %' ```  | C <br>JavaScripturijs <br>Cpp <br>Go <br>Ruby <br>
 ``` m:/ < /?ｷ ```  | C <br>Java <br>Ruby <br>
 ``` W:/? < / ```  | Java <br>Ruby <br>
 ``` O:/ < 𿇰 ```  | C <br>Java <br>Ruby <br>
 ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  | Java <br>Ruby <br>
 ``` ws://[::]:65530 ```  | Java <br>
 ``` http://[::]?﷎ < / ```  | Ruby <br>
 ``` file:/// < /#￸ ```  | C <br>PHP <br>Ruby <br>
 ``` T:/%﹯ ```  | C <br>Cpp <br>Java <br>Go <br>Ruby <br>
 ``` F:/ < //{v ```  | C <br>PHP <br>Java <br>Go <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 18 | 1 | 17
chromium | 7 | 1 | 6

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < //250.253.252.6 ```  | host |  ``` 250.253.252.6 ```  |  ```  ``` 
 ``` file://250.253.251.250 < / ```  | host |  ``` 250.253.251.250 ```  |  ```  ``` 
 ``` F:/ < //{v ```  | host |  ``` {v ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` ws://[::]?⍭ ```  | query |  ``` ?%E2%8D%AD ```  |  ``` %E2%8D%AD ``` 
 ``` file://{ < / ```  | host |  ``` { ```  |  ```  ``` 
 ``` file://{ ```  | host |  ``` { ```  |  ```  ``` 
 ``` file:/// < //[cae2:ebaa::feff:fadc:251.254.253.254] ```  | host |  ``` cae2:ebaa::feff:fadc:fbfe:fdfe ```  |  ```  ``` 
 ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  | host |  ``` 7eaf::adfa:bbde:fefd:fcfa ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  | host |  ``` eada:fffc:eede:fdeb:adbc:edce:60fe:fafe ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://ž2 ```  | host |  ``` xn--2-soa ```  |  ```  ``` 
 ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  | host |  ``` a5fa:edee::beae:beeb:fcfc:fefd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` R:/ < //[::eded] ```  | host |  ``` ::eded ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` N:/ < //+ ```  | host |  ``` + ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` S:/ < //` ```  | host |  ``` ` ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` wss://[::]?񴰅 ```  | query |  ``` ?%F1%B4%B0%85 ```  |  ``` %F1%B4%B0%85 ``` 
 ``` F:/ < //M~ ```  | host |  ``` m~ ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` m:/ < /?ｷ ```  | query |  ``` ?%EF%BD%B7 ```  |  ``` %EF%BD%B7 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://{ < / ```  | host |  ``` { ```  |  ```  ``` 
 ``` file://{ ```  | host |  ``` { ```  |  ``` %7B ``` 
 ``` https://%3d@" ```  | host |  ``` " ```  |  ``` %22 ``` 
 ``` S:/ < //` ```  | host |  ``` ` ```  |  ``` %60 ``` 
 ``` file://250.253.251.250 < / ```  | host |  ``` 250.253.251.250 ```  |  ```  ``` 
 ``` F:/ < //{v ```  | host |  ``` {v ```  |  ``` %7Bv ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

