# Results 

Total number of URLs: 26

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 28.42% 
Cpp | 0 | 0 | 34.3% 
JavaScriptwhatwg-url | 0 | 0 | 59.46% 
Python | 0 | 0 | 43.0% 
firefox | 1 | 1 | 70.6% 
chromium | 1 | 1 | 47.37% 
Go | 3 | 3 | 73.8% 
PHP | 4 | 3 | 47.41% 
C | 11 | 1 | 45.6% 
Java | 13 | 9 | 38.0% 
Ruby | 18 | 17 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` https://%3d@" ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ws://[::]?⍭ ```  <br> ``` https://%3d@" ```  <br> ``` file://ž2 ```  <br> ``` file:///+ ```  <br> ``` file://{ ```  <br> ``` file:/// < /%2e/琮 ```  <br> ``` m:/ < /?ｷ ```  <br> ``` W:/? ```  <br> ``` O:/ < 𿇰 ```  <br> ``` http://[::]?﷎ ```  <br> ``` F:/ < //{v ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `"` is invalid : the host is not a valid registered name ```  |  ``` https://%3d@" ```  <br> 
 ``` Host `{` is invalid : the host is not a valid registered name ```  |  ``` file://{ ```  <br> ``` file://{ < / ```  <br> 
 ``` Host `{v` is invalid : the host is not a valid registered name ```  |  ``` F:/ < //{v ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::]?⍭ ```  <br> ``` ws://[::dced:ffda:dbea:eebf] ```  <br> ``` ws://[::]:65530 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //M~ ```  <br> ``` F:/ < //{v ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q:/h:/ < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R:/ < //[::eded] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: m ```  |  ``` m:/ < /?ｷ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` W:/? < / ```  <br> ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: o ```  |  ``` O:/ < 𿇰 ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse : invalid character "{" in host name ```  |  ``` file://{ ```  <br> 
 ``` parse file://{: invalid character "{" in host name ```  |  ``` file://{ < / ```  <br> 
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
 ``` URI must be ascii only "file:///+\uECD7" ```  |  ``` file:///+ ```  <br> 
 ``` bad URI(is not URI?): //[d7fd:dbbb::251.254.255.255] ```  |  ``` https://[::] < //[d7fd:dbbb::251.254.255.255] ```  <br> 
 ``` bad URI(is not URI?): //[a5fa:edee::beae:beeb:252.252.254.253] ```  |  ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  <br> 
 ``` bad URI(is not URI?): //[::eded] ```  |  ``` R:/ < //[::eded] ```  <br> 
 ``` bad URI(is not URI?): file://{ ```  |  ``` file://{ < / ```  <br> 
 ``` URI must be ascii only "/%2e/\u742E" ```  |  ``` file:/// < /%2e/琮 ```  <br> 
 ``` URI must be ascii only "/?\uFF77" ```  |  ``` m:/ < /?ｷ ```  <br> 
 ``` URI must be ascii only "W:/?\uE8AC" ```  |  ``` W:/? < / ```  <br> 
 ``` URI must be ascii only "\u{3F1F0}" ```  |  ``` O:/ < 𿇰 ```  <br> 
 ``` bad URI(is not URI?): //[7eaf::adfa:bbde:254.253.252.250] ```  |  ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  <br> 
 ``` URI must be ascii only "http://[::]?\uFDCE" ```  |  ``` http://[::]?﷎ < / ```  <br> 
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
 ``` file://ž2 ```  | C <br>Ruby <br>
 ``` file:/// < //[cae2:ebaa::feff:fadc:251.254.253.254] ```  | Ruby <br>
 ``` file:///+ ```  | C <br>Ruby <br>
 ``` https://[::] < //[d7fd:dbbb::251.254.255.255] ```  | Ruby <br>
 ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  | Java <br>Ruby <br>
 ``` file://{ ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` R:/ < //[::eded] ```  | Java <br>Ruby <br>
 ``` file://{ < / ```  | PHP <br>Go <br>Ruby <br>
 ``` file:/// < /%2e/琮 ```  | C <br>Ruby <br>
 ``` m:/ < /?ｷ ```  | C <br>Java <br>Ruby <br>
 ``` W:/? < / ```  | Java <br>Ruby <br>
 ``` O:/ < 𿇰 ```  | C <br>Java <br>Ruby <br>
 ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  | Java <br>Ruby <br>
 ``` ws://[::]:65530 ```  | Java <br>
 ``` http://[::]?﷎ < / ```  | Ruby <br>
 ``` F:/ < //{v ```  | C <br>PHP <br>Java <br>Go <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 14 | 1 | 13
chromium | 5 | 1 | 4

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < //250.253.252.6 ```  | host |  ``` 250.253.252.6 ```  |  ```  ``` 
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
 ``` F:/ < //M~ ```  | host |  ``` m~ ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` m:/ < /?ｷ ```  | query |  ``` ?%EF%BD%B7 ```  |  ``` %EF%BD%B7 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://{ < / ```  | host |  ``` { ```  |  ```  ``` 
 ``` file://{ ```  | host |  ``` { ```  |  ``` %7B ``` 
 ``` https://%3d@" ```  | host |  ``` " ```  |  ``` %22 ``` 
 ``` F:/ < //{v ```  | host |  ``` {v ```  |  ``` %7Bv ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

