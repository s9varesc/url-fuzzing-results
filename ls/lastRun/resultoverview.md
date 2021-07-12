# Results 

Total number of URLs: 96

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScriptwhatwg-url | 0 | 0 | 64.23% 
Python | 0 | 0 | 45.0% 
JavaScripturijs | 1 | 1 | 29.2% 
firefox | 2 | 1 | 72.8% 
Cpp | 2 | 1 | 37.2% 
chromium | 3 | 1 | 50.38% 
Go | 9 | 8 | 77.0% 
PHP | 13 | 10 | 53.45% 
C | 39 | 1 | 48.8% 
Java | 47 | 22 | 39.0% 
Ruby | 60 | 58 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` https://%3d@" ```  <br> ``` ws://鸐@" ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ftp://8š ```  <br> ``` file:/// < /%2e//퟾ ```  <br> ``` file:/// < /񧌊 ```  <br> ``` c:/ < /?ﻟ ```  <br> ``` ws://[::]?⍭ ```  <br> ``` file:///#􇇥 ```  <br> ``` H:/ < / ```  <br> ``` https://%3d@" ```  <br> ``` ws://[::] < /?񢰜 ```  <br> ``` wss://[::]?ﹴ ```  <br> ``` file:/// ```  <br> ``` file:/// < /.%2e/￹ ```  <br> ``` L:/ < //` ```  <br> ``` file://ž2 ```  <br> ``` o:/ < /뤠 ```  <br> ``` S:/ < //` ```  <br> ``` file:///+ ```  <br> ``` https://[::] < //[::]/%7bﺗ ```  <br> ``` ws://鸐@" ```  <br> ``` https://[::] < //﹉@~ ```  <br> ``` file://{ ```  <br> ``` file:///#򃣻 ```  <br> ``` file:/// < /%7d﷎ ```  <br> ``` file:/// < /%2e/琮 ```  <br> ``` wss://[::]?񴰅 ```  <br> ``` file:/// < /.%2e// ```  <br> ``` k:/?擩 ```  <br> ``` file:///#｠ ```  <br> ``` file:/// < %' ```  <br> ``` wss://[::] < [ﴙ ```  <br> ``` m:/ < /?ｷ ```  <br> ``` W:/? ```  <br> ``` O:/ < 𿇰 ```  <br> ``` https://[::abdf:206.250.251.251] ```  <br> ``` y:/ < /#򀑫 ```  <br> ``` http://[::]?﷎ ```  <br> ``` file:/// < /#￸ ```  <br> ``` T:/%﹯ ```  <br> ``` F:/ < //{v ```  <br> 


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
 ``` The uri `file:///#%F4%87%87%A5` is invalid for the `file` scheme. ```  |  ``` file:///#􇇥 ```  <br> 
 ``` Host `"` is invalid : the host is not a valid registered name ```  |  ``` https://%3d@" ```  <br> ``` ws://鸐@" ```  <br> 
 ``` The uri `file:///?/` is invalid for the `file` scheme. ```  |  ``` file:/// < /?/ ```  <br> 
 ```` Host ``` is invalid : the host is not a valid registered name ````  |  ``` L:/ < //` ```  <br> ``` S:/ < //` ```  <br> 
 ``` Host `%ed` is not a valid IDN host : a label or domain name contains disallowed characters. ```  |  ``` O:/ < //%ed ```  <br> 
 ``` Host `{` is invalid : the host is not a valid registered name ```  |  ``` file://{ ```  <br> ``` file://{ < / ```  <br> 
 ``` The uri `file:///#%F2%83%A3%BB` is invalid for the `file` scheme. ```  |  ``` file:///#򃣻 ```  <br> 
 ``` The uri `file:///#%EF%BD%A0` is invalid for the `file` scheme. ```  |  ``` file:///#｠ ```  <br> 
 ``` The uri `file:///#%EF%BF%B8` is invalid for the `file` scheme. ```  |  ``` file:/// < /#￸ ```  <br> 
 ``` Host `{v` is invalid : the host is not a valid registered name ```  |  ``` F:/ < //{v ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://253.53.252.253 ```  <br> ``` wss://[::]?ﹴ < / ```  <br> ``` wss://[::] < //,k ```  <br> ``` wss://[::]?񴰅 ```  <br> ``` wss://[::] < [ﴙ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: c ```  |  ``` c:/ < /?ﻟ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::]?⍭ ```  <br> ``` ws://[::] < //[fdde:acbd:efee:ccea:accf:fdce:242.255.254.251] ```  <br> ``` ws://[::] < //[cce3::fabf:ceba:251.250.253.252] ```  <br> ``` ws://[::dced:ffda:dbea:eebf] ```  <br> ``` ws://[::] < /?񢰜 ```  <br> ``` ws://[::] < //[ba2c:cbdc::fafe:255.254.250.254] ```  <br> ``` ws://[::] < //222.255.255.251 ```  <br> ``` ws://鸐@" ```  <br> ``` ws://[::]:65530 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` H:/ < / ```  <br> ``` H:/ < //[::9bde] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //M~ ```  <br> ``` F:/ < ///!%23 ```  <br> ``` F:/ < //{v ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: b ```  |  ``` B:/ < //[::]:4 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  <br> ``` e:/ < //[::ee0b] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q:/h:/ < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R:/ < /c:/ ```  <br> ``` r:/ < //[ddcd:dabc:ebba:dabc:fcfc:fdfe:faac:ebaa] ```  <br> ``` R:/ < //[::eded] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` L:/ < //` ```  <br> ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: o ```  |  ``` o:/ < /뤠 ```  <br> ``` O:/ < //%ed ```  <br> ``` O:/ < 𿇰 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: s ```  |  ``` S:/ < //` ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` D:/ < //[::ee1d:255.250.250.253] ```  <br> ``` d:/ < //v ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` T:/ < ///W:/ ```  <br> ``` T:/%﹯ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: i ```  |  ``` I:/ < //[::8afa:251.251.250.255] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` N:/ < //+ ```  <br> ``` N:/O:/ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: k ```  |  ``` k:/?擩 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: m ```  |  ``` m:/ < /?ｷ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` W:/? < / ```  <br> ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: mz ```  |  ``` Mz:/ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: y ```  |  ``` y:/ < /#򀑫 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` p:/ < //[9acc:eefa:abbf:daac:ccca:fbed:253.250.251.252] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse //`: invalid character "`" in host name ```  |  ``` L:/ < //` ```  <br> ``` S:/ < //` ```  <br> 
 ``` parse : net/url: invalid userinfo ```  |  ``` ws://鸐@" ```  <br> 
 ``` parse //﹉@~: net/url: invalid userinfo ```  |  ``` https://[::] < //﹉@~ ```  <br> 
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
 ``` invalid URL ```  |  ``` F:/ < //M~ ```  <br> ``` O:/ < //%ed ```  <br> ``` https://[::] < //﹉@~ ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` URI must be ascii only "ftp://8\u0161" ```  |  ``` ftp://8š ```  <br> 
 ``` URI must be ascii only "/%2e//\uD7FE" ```  |  ``` file:/// < /%2e//퟾ ```  <br> 
 ``` URI must be ascii only "/\u{6730A}" ```  |  ``` file:/// < /񧌊 ```  <br> 
 ``` URI must be ascii only "/?\uFEDF" ```  |  ``` c:/ < /?ﻟ ```  <br> 
 ``` URI must be ascii only "ws://[::]?\u236D" ```  |  ``` ws://[::]?⍭ ```  <br> 
 ``` bad URI(is not URI?): //[fdde:acbd:efee:ccea:accf:fdce:242.255.254.251] ```  |  ``` ws://[::] < //[fdde:acbd:efee:ccea:accf:fdce:242.255.254.251] ```  <br> 
 ``` URI must be ascii only "file:///#\u{1071E5}" ```  |  ``` file:///#􇇥 ```  <br> 
 ``` URI must be ascii only "/\uF862" ```  |  ``` H:/ < / ```  <br> 
 ``` bad URI(is not URI?):  ```  |  ``` https://%3d@" ```  <br> ``` file://{ ```  <br> 
 ``` bad URI(is not URI?): //[cce3::fabf:ceba:251.250.253.252] ```  |  ``` ws://[::] < //[cce3::fabf:ceba:251.250.253.252] ```  <br> 
 ``` bad URI(is not URI?): //[::]:4 ```  |  ``` B:/ < //[::]:4 ```  <br> 
 ``` URI must be ascii only "/?\u{62C1C}" ```  |  ``` ws://[::] < /?񢰜 ```  <br> 
 ``` URI must be ascii only "wss://[::]?\uFE74" ```  |  ``` wss://[::]?ﹴ < / ```  <br> 
 ``` bad URI(is not URI?): //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  |  ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  <br> 
 ``` bad URI(is not URI?): //[ba2c:cbdc::fafe:255.254.250.254] ```  |  ``` ws://[::] < //[ba2c:cbdc::fafe:255.254.250.254] ```  <br> 
 ``` URI must be ascii only "file:///\uE498" ```  |  ``` file:/// ```  <br> 
 ``` URI must be ascii only "/.%2e/\uFFF9" ```  |  ``` file:/// < /.%2e/￹ ```  <br> 
 ``` bad URI(is not URI?): //` ```  |  ``` L:/ < //` ```  <br> ``` S:/ < //` ```  <br> 
 ``` URI must be ascii only "file://\u017E2" ```  |  ``` file://ž2 ```  <br> 
 ``` URI must be ascii only "/\uB920" ```  |  ``` o:/ < /뤠 ```  <br> 
 ``` bad URI(is not URI?): //[::9bde] ```  |  ``` H:/ < //[::9bde] ```  <br> 
 ``` bad URI(is not URI?): //[cae2:ebaa::feff:fadc:251.254.253.254] ```  |  ``` file:/// < //[cae2:ebaa::feff:fadc:251.254.253.254] ```  <br> 
 ``` bad URI(is not URI?): //[::ee0b] ```  |  ``` e:/ < //[::ee0b] ```  <br> 
 ``` bad URI(is not URI?): //[::ee1d:255.250.250.253] ```  |  ``` D:/ < //[::ee1d:255.250.250.253] ```  <br> 
 ``` undefined method `typecode' for "//255.253.255.26":String ```  |  ``` ftp://[::] < //255.253.255.26 ```  <br> 
 ``` URI must be ascii only "file:///+\uECD7" ```  |  ``` file:///+ ```  <br> 
 ``` URI must be ascii only "//[::]/%7b\uFE97" ```  |  ``` https://[::] < //[::]/%7bﺗ ```  <br> 
 ``` bad URI(is not URI?): //[d7fd:dbbb::251.254.255.255] ```  |  ``` https://[::] < //[d7fd:dbbb::251.254.255.255] ```  <br> 
 ``` URI must be ascii only "ws://\u9E10@\"" ```  |  ``` ws://鸐@" ```  <br> 
 ``` bad URI(is not URI?): //[ddcd:dabc:ebba:dabc:fcfc:fdfe:faac:ebaa] ```  |  ``` r:/ < //[ddcd:dabc:ebba:dabc:fcfc:fdfe:faac:ebaa] ```  <br> 
 ``` bad URI(is not URI?): //[a5fa:edee::beae:beeb:252.252.254.253] ```  |  ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  <br> 
 ``` bad URI(is not URI?): //[::fbbf:cfae:250.250.250.7] ```  |  ``` ftp://[::] < //[::fbbf:cfae:250.250.250.7] ```  <br> 
 ``` URI must be ascii only "//\uFE49@~" ```  |  ``` https://[::] < //﹉@~ ```  <br> 
 ``` bad URI(is not URI?): //[df9c::254.250.253.255] ```  |  ``` ftp://[::] < //[df9c::254.250.253.255] ```  <br> 
 ``` bad URI(is not URI?): //[ff8d::252.252.253.254] ```  |  ``` ftp://[::] < //[ff8d::252.252.253.254] ```  <br> 
 ``` URI must be ascii only "file:///#\u{838FB}" ```  |  ``` file:///#򃣻 ```  <br> 
 ``` bad URI(is not URI?): //[::eded] ```  |  ``` R:/ < //[::eded] ```  <br> 
 ``` URI must be ascii only "/%7d\uFDCE" ```  |  ``` file:/// < /%7d﷎ ```  <br> 
 ``` bad URI(is not URI?): //[::8afa:251.251.250.255] ```  |  ``` I:/ < //[::8afa:251.251.250.255] ```  <br> 
 ``` bad URI(is not URI?): file://{ ```  |  ``` file://{ < / ```  <br> 
 ``` URI must be ascii only "/%2e/\u742E" ```  |  ``` file:/// < /%2e/琮 ```  <br> 
 ``` URI must be ascii only "wss://[::]?\u{74C05}" ```  |  ``` wss://[::]?񴰅 ```  <br> 
 ``` URI must be ascii only "/.%2e//\uF5B7" ```  |  ``` file:/// < /.%2e// ```  <br> 
 ``` URI must be ascii only "k:/?\u64E9" ```  |  ``` k:/?擩 ```  <br> 
 ``` URI must be ascii only "file:///#\uFF60" ```  |  ``` file:///#｠ ```  <br> 
 ``` bad URI(is not URI?): %' ```  |  ``` file:/// < %' ```  <br> 
 ``` URI must be ascii only "[\uFD19" ```  |  ``` wss://[::] < [ﴙ ```  <br> 
 ``` URI must be ascii only "/?\uFF77" ```  |  ``` m:/ < /?ｷ ```  <br> 
 ``` URI must be ascii only "W:/?\uE8AC" ```  |  ``` W:/? < / ```  <br> 
 ``` URI must be ascii only "\u{3F1F0}" ```  |  ``` O:/ < 𿇰 ```  <br> 
 ``` bad URI(is not URI?): //[7eaf::adfa:bbde:254.253.252.250] ```  |  ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  <br> 
 ``` URI must be ascii only "/#\u{8046B}" ```  |  ``` y:/ < /#򀑫 ```  <br> 
 ``` bad URI(is not URI?): //[::efec:adbc:242.251.253.251] ```  |  ``` http://[::] < //[::efec:adbc:242.251.253.251] ```  <br> 
 ``` URI must be ascii only "http://[::]?\uFDCE" ```  |  ``` http://[::]?﷎ < / ```  <br> 
 ``` bad URI(is not URI?): //[9acc:eefa:abbf:daac:ccca:fbed:253.250.251.252] ```  |  ``` p:/ < //[9acc:eefa:abbf:daac:ccca:fbed:253.250.251.252] ```  <br> 
 ``` URI must be ascii only "/#\uFFF8" ```  |  ``` file:/// < /#￸ ```  <br> 
 ``` URI must be ascii only "T:/%\uFE6F" ```  |  ``` T:/%﹯ ```  <br> 
 ``` bad URI(is not URI?): //{v ```  |  ``` F:/ < //{v ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` ftp://8š ```  | C <br>Ruby <br>
 ``` wss://253.53.252.253 ```  | Java <br>
 ``` file:/// < /%2e//퟾ ```  | C <br>Ruby <br>
 ``` file:/// < /񧌊 ```  | C <br>Ruby <br>
 ``` c:/ < /?ﻟ ```  | C <br>Java <br>Ruby <br>
 ``` ws://[::]?⍭ ```  | C <br>Java <br>Ruby <br>
 ``` ws://[::] < //[fdde:acbd:efee:ccea:accf:fdce:242.255.254.251] ```  | Java <br>Ruby <br>
 ``` file:///#􇇥 ```  | C <br>PHP <br>Ruby <br>
 ``` H:/ < / ```  | C <br>Java <br>Ruby <br>
 ``` F:/ < //M~ ```  | Java <br>chromium <br>
 ``` https://%3d@" ```  | firefox <br>C <br>PHP <br>Ruby <br>
 ``` ws://[::] < //[cce3::fabf:ceba:251.250.253.252] ```  | Java <br>Ruby <br>
 ``` B:/ < //[::]:4 ```  | Java <br>Ruby <br>
 ``` ws://[::dced:ffda:dbea:eebf] ```  | Java <br>
 ``` ws://[::] < /?񢰜 ```  | C <br>Java <br>Ruby <br>
 ``` wss://[::]?ﹴ < / ```  | Java <br>Ruby <br>
 ``` file:/// < /?/ ```  | PHP <br>
 ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  | Java <br>Ruby <br>
 ``` ws://[::] < //[ba2c:cbdc::fafe:255.254.250.254] ```  | Java <br>Ruby <br>
 ``` Q:/h:/ < / ```  | Java <br>
 ``` file:/// ```  | C <br>Ruby <br>
 ``` file:/// < /.%2e/￹ ```  | C <br>Ruby <br>
 ``` R:/ < /c:/ ```  | Java <br>
 ``` L:/ < //` ```  | C <br>PHP <br>Java <br>Go <br>Ruby <br>
 ``` F:/ < ///!%23 ```  | Java <br>
 ``` file://ž2 ```  | C <br>Ruby <br>
 ``` o:/ < /뤠 ```  | C <br>Java <br>Ruby <br>
 ``` H:/ < //[::9bde] ```  | Java <br>Ruby <br>
 ``` O:/ < //%ed ```  | PHP <br>Java <br>chromium <br>
 ``` file:/// < //[cae2:ebaa::feff:fadc:251.254.253.254] ```  | Ruby <br>
 ``` e:/ < //[::ee0b] ```  | Java <br>Ruby <br>
 ``` S:/ < //` ```  | C <br>PHP <br>Java <br>Go <br>Ruby <br>
 ``` ws://[::] < //222.255.255.251 ```  | Java <br>
 ``` D:/ < //[::ee1d:255.250.250.253] ```  | Java <br>Ruby <br>
 ``` ftp://[::] < //255.253.255.26 ```  | Ruby <br>
 ``` file:///+ ```  | C <br>Ruby <br>
 ``` https://[::] < //[::]/%7bﺗ ```  | C <br>Ruby <br>
 ``` wss://[::] < //,k ```  | Java <br>
 ``` https://[::] < //[d7fd:dbbb::251.254.255.255] ```  | Ruby <br>
 ``` d:/ < //v ```  | Java <br>
 ``` ws://鸐@" ```  | firefox <br>C <br>PHP <br>Java <br>Go <br>Ruby <br>
 ``` T:/ < ///W:/ ```  | Java <br>
 ``` r:/ < //[ddcd:dabc:ebba:dabc:fcfc:fdfe:faac:ebaa] ```  | Java <br>Ruby <br>
 ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  | Java <br>Ruby <br>
 ``` ftp://[::] < //[::fbbf:cfae:250.250.250.7] ```  | Ruby <br>
 ``` https://[::] < //﹉@~ ```  | C <br>Go <br>chromium <br>Ruby <br>
 ``` file://{ ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` ftp://[::] < //[df9c::254.250.253.255] ```  | Ruby <br>
 ``` ftp://[::] < //[ff8d::252.252.253.254] ```  | Ruby <br>
 ``` file:///#򃣻 ```  | C <br>PHP <br>Ruby <br>
 ``` R:/ < //[::eded] ```  | Java <br>Ruby <br>
 ``` file:/// < /%7d﷎ ```  | C <br>Ruby <br>
 ``` I:/ < //[::8afa:251.251.250.255] ```  | Java <br>Ruby <br>
 ``` file://{ < / ```  | PHP <br>Go <br>Ruby <br>
 ``` N:/ < //+ ```  | Java <br>
 ``` file:/// < /%2e/琮 ```  | C <br>Ruby <br>
 ``` N:/O:/ ```  | Java <br>
 ``` wss://[::]?񴰅 ```  | C <br>Java <br>Ruby <br>
 ``` file:/// < /.%2e// ```  | C <br>Ruby <br>
 ``` k:/?擩 ```  | C <br>Java <br>Ruby <br>
 ``` file:///#｠ ```  | C <br>PHP <br>Ruby <br>
 ``` file:/// < %' ```  | C <br>JavaScripturijs <br>Cpp <br>Go <br>Ruby <br>
 ``` wss://[::] < [ﴙ ```  | C <br>Java <br>Ruby <br>
 ``` m:/ < /?ｷ ```  | C <br>Java <br>Ruby <br>
 ``` W:/? < / ```  | Java <br>Ruby <br>
 ``` Mz:/ ```  | Java <br>
 ``` O:/ < 𿇰 ```  | C <br>Java <br>Ruby <br>
 ``` https://[::abdf:206.250.251.251] ```  | C <br>
 ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  | Java <br>Ruby <br>
 ``` y:/ < /#򀑫 ```  | C <br>Java <br>Ruby <br>
 ``` ws://[::]:65530 ```  | Java <br>
 ``` http://[::] < //[::efec:adbc:242.251.253.251] ```  | Ruby <br>
 ``` http://[::]?﷎ < / ```  | Ruby <br>
 ``` p:/ < //[9acc:eefa:abbf:daac:ccca:fbed:253.250.251.252] ```  | Java <br>Ruby <br>
 ``` file:/// < /#￸ ```  | C <br>PHP <br>Ruby <br>
 ``` T:/%﹯ ```  | C <br>Cpp <br>Java <br>Go <br>Ruby <br>
 ``` F:/ < //{v ```  | C <br>PHP <br>Java <br>Go <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 39 | 2 | 37
chromium | 16 | 3 | 13

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < /?/ ```  | query |  ``` ?/ ```  |  ``` / ``` 
 ``` file:/// < /%2e///%2e ```  | filePath |  ``` /// ```  |  ``` ///%2e ``` 
 ``` file:/// < //250.253.252.6 ```  | host |  ``` 250.253.252.6 ```  |  ```  ``` 
 ``` file://250.253.251.250 < / ```  | host |  ``` 250.253.251.250 ```  |  ```  ``` 
 ``` file://[cfaa::fcdd:254.250.253.252] ```  | host |  ``` cfaa::fcdd:fefa:fdfc ```  |  ```  ``` 
 ``` F:/ < //{v ```  | host |  ``` {v ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` B:/ < //[::]:4 ```  | host |  ``` :: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` ws://[::]?⍭ ```  | query |  ``` ?%E2%8D%AD ```  |  ``` %E2%8D%AD ``` 
 ``` file://ck ```  | host |  ``` ck ```  |  ```  ``` 
 ``` k:/?擩 ```  | query |  ``` ?%E6%93%A9 ```  |  ``` %E6%93%A9 ``` 
 ``` O:/ < //%ed ```  | host |  ``` %ed ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://{ < / ```  | host |  ``` { ```  |  ```  ``` 
 ``` D:/ < //[::ee1d:255.250.250.253] ```  | host |  ``` ::ee1d:fffa:fafd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://{ ```  | host |  ``` { ```  |  ```  ``` 
 ``` file:/// < //[cae2:ebaa::feff:fadc:251.254.253.254] ```  | host |  ``` cae2:ebaa::feff:fadc:fbfe:fdfe ```  |  ```  ``` 
 ``` L:/ < //` ```  | host |  ``` ` ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` W:/ < //[7eaf::adfa:bbde:254.253.252.250] ```  | host |  ``` 7eaf::adfa:bbde:fefd:fcfa ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` e:/ < //[eada:fffc:eede:fdeb:adbc:edce:96.254.250.254] ```  | host |  ``` eada:fffc:eede:fdeb:adbc:edce:60fe:fafe ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://ž2 ```  | host |  ``` xn--2-soa ```  |  ```  ``` 
 ``` ws://[::] < /?񢰜 ```  | query |  ``` ?%F1%A2%B0%9C ```  |  ``` %F1%A2%B0%9C ``` 
 ``` T:/ < ///W:/ ```  | filePath |  ``` /W:/ ```  |  ``` //W/ ``` 
 ``` L:/ < //[a5fa:edee::beae:beeb:252.252.254.253] ```  | host |  ``` a5fa:edee::beae:beeb:fcfc:fefd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` R:/ < //[::eded] ```  | host |  ``` ::eded ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` N:/ < //+ ```  | host |  ``` + ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` S:/ < //` ```  | host |  ``` ` ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` p:/ < //[9acc:eefa:abbf:daac:ccca:fbed:253.250.251.252] ```  | host |  ``` 9acc:eefa:abbf:daac:ccca:fbed:fdfa:fbfc ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` F:/ < ///!%23 ```  | filePath |  ``` /!%23 ```  |  ``` //!%23/ ``` 
 ``` I:/ < //[::8afa:251.251.250.255] ```  | host |  ``` ::8afa:fbfb:faff ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` c:/ < /?ﻟ ```  | query |  ``` ?%EF%BB%9F ```  |  ``` %EF%BB%9F ``` 
 ``` r:/ < //[ddcd:dabc:ebba:dabc:fcfc:fdfe:faac:ebaa] ```  | host |  ``` ddcd:dabc:ebba:dabc:fcfc:fdfe:faac:ebaa ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` wss://[::]?񴰅 ```  | query |  ``` ?%F1%B4%B0%85 ```  |  ``` %F1%B4%B0%85 ``` 
 ``` H:/ < //[::9bde] ```  | host |  ``` ::9bde ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` e:/ < //[::ee0b] ```  | host |  ``` ::ee0b ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` d:/ < //v ```  | host |  ``` v ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` F:/ < //M~ ```  | host |  ``` m~ ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://253.254.253.89 < / ```  | host |  ``` 253.254.253.89 ```  |  ```  ``` 
 ``` m:/ < /?ｷ ```  | query |  ``` ?%EF%BD%B7 ```  |  ``` %EF%BD%B7 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` https://[::] < //_$ ```  | host |  ``` _$ ```  |  ``` _%24 ``` 
 ``` file://{ < / ```  | host |  ``` { ```  |  ```  ``` 
 ``` file://{ ```  | host |  ``` { ```  |  ``` %7B ``` 
 ``` https://%3d@" ```  | host |  ``` " ```  |  ``` %22 ``` 
 ``` S:/ < //` ```  | host |  ``` ` ```  |  ``` %60 ``` 
 ``` L:/ < //` ```  | host |  ``` ` ```  |  ``` %60 ``` 
 ``` wss://[::] < //,k ```  | host |  ``` ,k ```  |  ``` %2Ck ``` 
 ``` file://250.253.251.250 < / ```  | host |  ``` 250.253.251.250 ```  |  ```  ``` 
 ``` F:/ < ///!%23 ```  | host |  ```  ```  |  ``` %21%23 ``` 
 ``` T:/ < ///W:/ ```  | host |  ```  ```  |  ``` w ``` 
 ``` file://253.254.253.89 < / ```  | host |  ``` 253.254.253.89 ```  |  ```  ``` 
 ``` F:/ < //{v ```  | host |  ``` {v ```  |  ``` %7Bv ``` 
 ``` ws://鸐@" ```  | host |  ``` " ```  |  ``` %22 ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

