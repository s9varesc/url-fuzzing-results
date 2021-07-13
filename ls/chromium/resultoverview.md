# Results 

Total number of URLs: 150

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 74.4% 
JavaScriptwhatwg-url | 0 | 0 | 64.98% 
Python | 0 | 0 | 44.0% 
JavaScripturijs | 1 | 1 | 29.29% 
Cpp | 1 | 1 | 37.0% 
Go | 5 | 5 | 77.7% 
chromium | 8 | 1 | 50.94% 
PHP | 12 | 12 | 43.1% 
C | 43 | 1 | 54.1% 
Java | 64 | 25 | 39.0% 
Ruby | 68 | 65 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` http://[::] < @𸻾 ```  <br> ``` file:/// < /#Ｓ ```  <br> ``` B://[::deee:202.255.253.255] ```  <br> ``` file:///? ```  <br> ``` wss://[::]/./ ```  <br> ``` file:/// < //{y ```  <br> ``` N:/ < /&￠ ```  <br> ``` file:///%7b￧ ```  <br> ``` file://[::]/ꪸ ```  <br> ``` file:///#󥓈 ```  <br> ``` file:/// < /? ```  <br> ``` file://`$ ```  <br> ``` file:///鍕 ```  <br> ``` file:/// < ︢ ```  <br> ``` ftp://[::] < / ```  <br> ``` ws://[::] < //[::acef:deac:203.253.252.251] ```  <br> ``` file:/// < %7dＥ ```  <br> ``` d:/ < ///􏾐 ```  <br> ``` file://[::]/%2e%2e/󬱰 ```  <br> ``` file:/// < 햐 ```  <br> ``` file:/// < /.///ᶓ ```  <br> ``` file://" ```  <br> ``` http://[::] < ퟺ ```  <br> ``` A:/#隤 ```  <br> ``` S:/(ﻴ ```  <br> ``` ftp://[::eecc:255.252.255.207] ```  <br> ``` https://[::] < //%@) ```  <br> ``` Y:/ < %7b￸ ```  <br> ``` M:/ < /+ ```  <br> ``` file:///^ ```  <br> ``` https://[::] < 􌧄 ```  <br> ``` V:///]! ```  <br> ``` http://[::] < //󢯼@= ```  <br> ``` https://[::] < //M@` ```  <br> ``` http://[::]?ퟻ ```  <br> ``` http://[::]/%60𓜎 ```  <br> ``` ftp://[::] < ﹐ ```  <br> ``` http://[::]?沫 ```  <br> ``` ws://[::] < /[풂 ```  <br> ``` file:///#⮃ ```  <br> ``` p:/?ﺖ ```  <br> ``` file:///'＿ ```  <br> ``` file://[::]/酜 ```  <br> 


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
 ``` The uri `file:///#%EF%BC%B3` is invalid for the `file` scheme. ```  |  ``` file:/// < /#Ｓ ```  <br> 
 ``` The uri `file:///?%EE%89%88` is invalid for the `file` scheme. ```  |  ``` file:///? < / ```  <br> 
 ``` Host `{y` is invalid : the host is not a valid registered name ```  |  ``` file:/// < //{y ```  <br> 
 ``` The uri `file:///#%F3%A5%93%88` is invalid for the `file` scheme. ```  |  ``` file:///#󥓈 < / ```  <br> 
 ``` The uri `file:///?%EE%BA%87` is invalid for the `file` scheme. ```  |  ``` file:/// < /? ```  <br> 
 ``` Host ``$` is invalid : the host is not a valid registered name ```  |  ``` file://`$ ```  <br> 
 ``` The uri `` is invalid for the `file` scheme. ```  |  ``` file:///#@ ```  <br> 
 ``` If there is no authority the path `///%E1%B6%93` can not start with a `//`. ```  |  ``` file:/// < /.///ᶓ ```  <br> 
 ``` Host `"` is invalid : the host is not a valid registered name ```  |  ``` file://" ```  <br> 
 ```` Host ``` is invalid : the host is not a valid registered name ````  |  ``` https://[::] < //M@` ```  <br> 
 ``` The uri `file:///#%E2%AE%83` is invalid for the `file` scheme. ```  |  ``` file:///#⮃ < / ```  <br> 
 ``` If there is no authority the path `/////%2e%2e` can not start with a `//`. ```  |  ``` file:/// < /./////%2e%2e ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: b ```  |  ``` B://[::deee:202.255.253.255] < / ```  <br> ``` b:/ < 3 ```  <br> ``` b:/ < ///) ```  <br> ``` b:/ < //[fcbf:cbfa::eceb:252.251.253.251] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://[::]/./ ```  <br> ``` wss://$ < / ```  <br> ``` wss://250.104.255.254 ```  <br> ``` wss://[c6fe::252.251.250.250] ```  <br> ``` wss://[::7cbc:253.250.252.255] < / ```  <br> ``` wss://[::] < //254.255.177.255 ```  <br> ``` wss://[::]:65341 ```  <br> ``` wss://[::] < /B:/ ```  <br> ``` wss://[::]/%2e/%3e ```  <br> ``` wss://[::] < //[::255.252.223.251] ```  <br> ``` wss://:@+ < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` n://[::255.250.241.250] ```  <br> ``` N:/ < /&￠ ```  <br> ``` N:/ < //*& ```  <br> ``` n:/ < //,p ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: x ```  |  ``` X://[d1db:aace::] ```  <br> ``` X://[e5da:febd::fcad:252.251.252.254] ```  <br> ``` x:/ < //C ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: j ```  |  ``` J:/ < //; ```  <br> ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: u ```  |  ``` U:/ < //[::dbae:acfd:251.254.8.252] ```  <br> ``` U:/ < //[::badd:255.251.255.138] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` t:/ < //T ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //~! ```  <br> ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` P:/. ```  <br> ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  <br> ``` p:/?ﺖ < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` V://[::afab:bc8d:bbdc] ```  <br> ``` V:/%23 < / ```  <br> ``` V:///]! ```  <br> ``` v://[ceda:eaab:cafc:afbb:bfac:fdaf:254.253.253.253] < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: i ```  |  ``` i:/ < //[::f7fa:dafa] ```  <br> ``` I:/ < /%60* ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::] < //[::acef:deac:203.253.252.251] ```  <br> ``` ws://[::] < //[::babe:dcfb:ed7d:abbd] ```  <br> ``` ws://[::fdca:251.251.254.83] < / ```  <br> ``` ws://[::cfed:254.251.89.255] ```  <br> ``` ws://[::] < /[풂 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: e ```  |  ``` e:/ < %2e////= ```  <br> ``` E:/%60( ```  <br> ``` E:/N:/ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: s ```  |  ``` s:/ < //D ```  <br> ``` s:/a:/ < / ```  <br> ``` S:/(ﻴ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: o ```  |  ``` o://[::5bde] < / ```  <br> ``` o://[dcbb:ddbb::ddbb] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` d:/ < ///􏾐 ```  <br> ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R:/ < //[::b2ca:cdfa] ```  <br> ``` R://[dfaa::] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: a ```  |  ``` A:/#隤 < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: k ```  |  ``` K:/ < //U ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: m ```  |  ``` M:/ < ///h:/ ```  <br> ``` M:/ < /+ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` H:/ < //[::7afa:254.250.252.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: y ```  |  ``` Y:/ < %7b￸ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: g ```  |  ``` g:/ < //[::acbe:bece:252.99.251.254] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: z ```  |  ``` z://[abce::] < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: w ```  |  ``` w:/ < //[::aeae:fcae:86.253.250.253] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse //{y: invalid character "{" in host name ```  |  ``` file:/// < //{y ```  <br> 
 ``` parse : invalid character "`" in host name ```  |  ``` file://`$ ```  <br> 
 ``` parse //%@): invalid URL escape "%" ```  |  ``` https://[::] < //%@) ```  <br> 
 ``` parse //󢯼@=: net/url: invalid userinfo ```  |  ``` http://[::] < //󢯼@= ```  <br> 
 ``` parse //M@`: invalid character "`" in host name ```  |  ``` https://[::] < //M@` ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` F:/ < //~! ```  <br> ``` J:/ < //; ```  <br> ``` v://[ceda:eaab:cafc:afbb:bfac:fdaf:254.253.253.253] < / ```  <br> ``` B://[::deee:202.255.253.255] < / ```  <br> ``` d:/ < ///􏾐 ```  <br> ``` https://;~ ```  <br> ``` z://[abce::] < / ```  <br> ``` o://[::5bde] < / ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` URI must be ascii only "@\u{38EFE}" ```  |  ``` http://[::] < @𸻾 ```  <br> 
 ``` URI must be ascii only "/#\uFF33" ```  |  ``` file:/// < /#Ｓ ```  <br> 
 ``` URI must be ascii only "file:///?\uE248" ```  |  ``` file:///? < / ```  <br> 
 ``` URI must be ascii only "wss://[::]/./\uEB09" ```  |  ``` wss://[::]/./ ```  <br> 
 ``` bad URI(is not URI?): //{y ```  |  ``` file:/// < //{y ```  <br> 
 ``` URI must be ascii only "/&\uFFE0" ```  |  ``` N:/ < /&￠ ```  <br> 
 ``` undefined method `typecode' for "/%7d~":String ```  |  ``` ftp://[::] < /%7d~ ```  <br> 
 ``` bad URI(is not URI?): //[::dbae:acfd:251.254.8.252] ```  |  ``` U:/ < //[::dbae:acfd:251.254.8.252] ```  <br> 
 ``` URI must be ascii only "file:///%7b\uFFE7" ```  |  ``` file:///%7b￧ ```  <br> 
 ``` URI must be ascii only "file://[::]/\uAAB8" ```  |  ``` file://[::]/ꪸ ```  <br> 
 ``` URI must be ascii only "file:///#\u{E54C8}" ```  |  ``` file:///#󥓈 < / ```  <br> 
 ``` URI must be ascii only "/?\uEE87" ```  |  ``` file:/// < /? ```  <br> 
 ``` bad URI(is not URI?):  ```  |  ``` file://`$ ```  <br> ``` file://" ```  <br> ``` file:///^ ```  <br> ``` V:///]! ```  <br> 
 ``` URI must be ascii only "file:///\u9355" ```  |  ``` file:///鍕 ```  <br> 
 ``` bad URI(is not URI?): //[::3eae:befd:250.255.253.253] ```  |  ``` file:/// < //[::3eae:befd:250.255.253.253] ```  <br> 
 ``` bad URI(is not URI?): //[::feeb] ```  |  ``` file:/// < //[::feeb] ```  <br> 
 ``` URI must be ascii only "\uFE22" ```  |  ``` file:/// < ︢ ```  <br> 
 ``` bad URI(is not URI?): //[::fbaa:ceec:250.254.149.251] ```  |  ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  <br> 
 ``` URI must be ascii only "/\uF70E" ```  |  ``` ftp://[::] < / ```  <br> 
 ``` bad URI(is not URI?): //[::f7fa:dafa] ```  |  ``` i:/ < //[::f7fa:dafa] ```  <br> 
 ``` bad URI(is not URI?): //[::acef:deac:203.253.252.251] ```  |  ``` ws://[::] < //[::acef:deac:203.253.252.251] ```  <br> 
 ``` bad URI(is not URI?): //[::babe:dcfb:ed7d:abbd] ```  |  ``` ws://[::] < //[::babe:dcfb:ed7d:abbd] ```  <br> 
 ``` URI must be ascii only "%7d\uFF25" ```  |  ``` file:/// < %7dＥ ```  <br> 
 ``` bad URI(is not URI?): //[9eed:bafe:dada:cecd:abca:fbec:250.252.255.253] ```  |  ``` file:/// < //[9eed:bafe:dada:cecd:abca:fbec:250.252.255.253] ```  <br> 
 ``` bad URI(is not URI?): //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  |  ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  <br> 
 ``` undefined method `typecode' for "/":String ```  |  ``` ftp://[::]/%3c < / ```  <br> 
 ``` URI must be ascii only "///\u{10FF90}" ```  |  ``` d:/ < ///􏾐 ```  <br> 
 ``` URI must be ascii only "file://[::]/%2e%2e/\u{ECC70}" ```  |  ``` file://[::]/%2e%2e/󬱰 ```  <br> 
 ``` URI must be ascii only "\uD590" ```  |  ``` file:/// < 햐 ```  <br> 
 ``` bad URI(is not URI?): //[::badd:255.251.255.138] ```  |  ``` U:/ < //[::badd:255.251.255.138] ```  <br> 
 ``` bad URI(is not URI?): //[::fccf:edda:cceb:a2ff] ```  |  ``` http://[::] < //[::fccf:edda:cceb:a2ff] ```  <br> 
 ``` URI must be ascii only "/.///\u1D93" ```  |  ``` file:/// < /.///ᶓ ```  <br> 
 ``` bad URI(is not URI?): //[::b2ca:cdfa] ```  |  ``` R:/ < //[::b2ca:cdfa] ```  <br> 
 ``` URI must be ascii only "\uD7FA" ```  |  ``` http://[::] < ퟺ ```  <br> 
 ``` URI must be ascii only "A:/#\u96A4" ```  |  ``` A:/#隤 < / ```  <br> 
 ``` bad URI(is not URI?): //[fcbf:cbfa::eceb:252.251.253.251] ```  |  ``` b:/ < //[fcbf:cbfa::eceb:252.251.253.251] ```  <br> 
 ``` bad URI(is not URI?): //[::165.255.253.255] ```  |  ``` https://[::] < //[::165.255.253.255] ```  <br> 
 ``` URI must be ascii only "S:/(\uFEF4" ```  |  ``` S:/(ﻴ ```  <br> 
 ``` bad URI(is not URI?): //%@) ```  |  ``` https://[::] < //%@) ```  <br> 
 ``` undefined method `typecode' for "//252.250.90.251":String ```  |  ``` ftp://[::] < //252.250.90.251 ```  <br> 
 ``` bad URI(is not URI?): //[::7afa:254.250.252.253] ```  |  ``` H:/ < //[::7afa:254.250.252.253] ```  <br> 
 ``` bad URI(is not URI?): //[::d8cd] ```  |  ``` ftp://[::] < //[::d8cd] ```  <br> 
 ``` bad URI(is not URI?): //[cff9:beab::ddad:250.254.254.255] ```  |  ``` ftp://[::] < //[cff9:beab::ddad:250.254.254.255] ```  <br> 
 ``` URI must be ascii only "%7b\uFFF8" ```  |  ``` Y:/ < %7b￸ ```  <br> 
 ``` URI must be ascii only "/+\uE749" ```  |  ``` M:/ < /+ ```  <br> 
 ``` bad URI(is not URI?): //[::250.56.254.253] ```  |  ``` file:/// < //[::250.56.254.253] ```  <br> 
 ``` bad URI(is not URI?): //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  |  ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  <br> 
 ``` bad URI(is not URI?): //[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf] ```  |  ``` https://[::] < //[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf] ```  <br> 
 ``` URI must be ascii only "\u{10C9C4}" ```  |  ``` https://[::] < 􌧄 ```  <br> 
 ``` bad URI(is not URI?): //[::acbe:bece:252.99.251.254] ```  |  ``` g:/ < //[::acbe:bece:252.99.251.254] ```  <br> 
 ``` URI must be ascii only "//\u{E2BFC}@=" ```  |  ``` http://[::] < //󢯼@= ```  <br> 
 ``` bad URI(is not URI?): //M@` ```  |  ``` https://[::] < //M@` ```  <br> 
 ``` URI must be ascii only "http://[::]?\uD7FB" ```  |  ``` http://[::]?ퟻ < / ```  <br> 
 ``` bad URI(is not URI?): //[::255.252.223.251] ```  |  ``` wss://[::] < //[::255.252.223.251] ```  <br> 
 ``` URI must be ascii only "http://[::]/%60\u{1370E}" ```  |  ``` http://[::]/%60𓜎 ```  <br> 
 ``` URI must be ascii only "\uFE50" ```  |  ``` ftp://[::] < ﹐ ```  <br> 
 ``` bad URI(is not URI?): //[::ffff:bafd:cafd:db8f] ```  |  ``` ftp://[::] < //[::ffff:bafd:cafd:db8f] ```  <br> 
 ``` URI must be ascii only "http://[::]?\u6CAB" ```  |  ``` http://[::]?沫 < / ```  <br> 
 ``` URI must be ascii only "/[\uD482" ```  |  ``` ws://[::] < /[풂 ```  <br> 
 ``` bad URI(is not URI?): //[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac] ```  |  ``` http://[::] < //[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac] ```  <br> 
 ``` URI must be ascii only "file:///#\u2B83" ```  |  ``` file:///#⮃ < / ```  <br> 
 ``` URI must be ascii only "p:/?\uFE96" ```  |  ``` p:/?ﺖ < / ```  <br> 
 ``` bad URI(is not URI?): //[::aeae:fcae:86.253.250.253] ```  |  ``` w:/ < //[::aeae:fcae:86.253.250.253] ```  <br> 
 ``` URI must be ascii only "file:///'\uFF3F" ```  |  ``` file:///'＿ < / ```  <br> 
 ``` URI must be ascii only "file://[::]/\u915C" ```  |  ``` file://[::]/酜 < / ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` http://[::] < @𸻾 ```  | C <br>Ruby <br>
 ``` file:/// < /#Ｓ ```  | C <br>PHP <br>Ruby <br>
 ``` B://[::deee:202.255.253.255] < / ```  | Java <br>chromium <br>
 ``` file:///? < / ```  | PHP <br>Ruby <br>
 ``` wss://[::]/./ ```  | C <br>Java <br>Ruby <br>
 ``` file:/// < //{y ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` wss://$ < / ```  | Java <br>
 ``` n://[::255.250.241.250] ```  | Java <br>
 ``` X://[d1db:aace::] ```  | Java <br>
 ``` N:/ < /&￠ ```  | C <br>Java <br>Ruby <br>
 ``` wss://250.104.255.254 ```  | Java <br>
 ``` J:/ < //; ```  | Java <br>chromium <br>
 ``` ftp://[::] < /%7d~ ```  | Ruby <br>
 ``` U:/ < //[::dbae:acfd:251.254.8.252] ```  | Java <br>Ruby <br>
 ``` file:///%7b￧ ```  | C <br>Ruby <br>
 ``` file://[::]/ꪸ ```  | C <br>Ruby <br>
 ``` file:///#󥓈 < / ```  | PHP <br>Ruby <br>
 ``` t:/ < //T ```  | Java <br>
 ``` file:/// < /? ```  | C <br>PHP <br>Ruby <br>
 ``` file://`$ ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` N:/ < //*& ```  | Java <br>
 ``` wss://[c6fe::252.251.250.250] ```  | Java <br>
 ``` F:/ < //~! ```  | Java <br>chromium <br>
 ``` file:///鍕 ```  | C <br>Ruby <br>
 ``` file:/// < //[::3eae:befd:250.255.253.253] ```  | Ruby <br>
 ``` file:/// < //[::feeb] ```  | Ruby <br>
 ``` P:/. ```  | Java <br>
 ``` file:/// < ︢ ```  | C <br>Ruby <br>
 ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  | Java <br>Ruby <br>
 ``` ftp://[::] < / ```  | C <br>Ruby <br>
 ``` V://[::afab:bc8d:bbdc] ```  | Java <br>
 ``` X://[e5da:febd::fcad:252.251.252.254] ```  | Java <br>
 ``` i:/ < //[::f7fa:dafa] ```  | Java <br>Ruby <br>
 ``` ws://[::] < //[::acef:deac:203.253.252.251] ```  | C <br>Java <br>Ruby <br>
 ``` e:/ < %2e////= ```  | Java <br>
 ``` ws://[::] < //[::babe:dcfb:ed7d:abbd] ```  | Java <br>Ruby <br>
 ``` V:/%23 < / ```  | Java <br>
 ``` file:/// < %7dＥ ```  | C <br>Ruby <br>
 ``` file:/// < //[9eed:bafe:dada:cecd:abca:fbec:250.252.255.253] ```  | Ruby <br>
 ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  | Java <br>Ruby <br>
 ``` s:/ < //D ```  | Java <br>
 ``` file:///#@ ```  | PHP <br>
 ``` o://[::5bde] < / ```  | Java <br>chromium <br>
 ``` ftp://[::]/%3c < / ```  | Ruby <br>
 ``` wss://[::7cbc:253.250.252.255] < / ```  | Java <br>
 ``` d:/ < ///􏾐 ```  | C <br>Java <br>chromium <br>Ruby <br>
 ``` file://[::]/%2e%2e/󬱰 ```  | C <br>Ruby <br>
 ``` file:/// < 햐 ```  | C <br>Ruby <br>
 ``` U:/ < //[::badd:255.251.255.138] ```  | Java <br>Ruby <br>
 ``` http://[::] < //[::fccf:edda:cceb:a2ff] ```  | Ruby <br>
 ``` file:/// < /.///ᶓ ```  | C <br>PHP <br>Ruby <br>
 ``` file://" ```  | C <br>PHP <br>Ruby <br>
 ``` E:/%60( ```  | Java <br>
 ``` R:/ < //[::b2ca:cdfa] ```  | Java <br>Ruby <br>
 ``` http://[::] < ퟺ ```  | C <br>Ruby <br>
 ``` b:/ < 3 ```  | Java <br>
 ``` https://;~ ```  | chromium <br>
 ``` A:/#隤 < / ```  | Java <br>Ruby <br>
 ``` s:/a:/ < / ```  | Java <br>
 ``` b:/ < ///) ```  | Java <br>
 ``` b:/ < //[fcbf:cbfa::eceb:252.251.253.251] ```  | Java <br>Ruby <br>
 ``` n:/ < //,p ```  | Java <br>
 ``` E:/N:/ ```  | Java <br>
 ``` https://[::] < //[::165.255.253.255] ```  | Ruby <br>
 ``` wss://[::] < //254.255.177.255 ```  | Java <br>
 ``` S:/(ﻴ ```  | C <br>Java <br>Ruby <br>
 ``` ws://[::fdca:251.251.254.83] < / ```  | Java <br>
 ``` ftp://[::eecc:255.252.255.207] ```  | C <br>
 ``` K:/ < //U ```  | Java <br>
 ``` https://[::] < //%@) ```  | C <br>JavaScripturijs <br>Cpp <br>Go <br>Ruby <br>
 ``` I:/ < /%60* ```  | Java <br>
 ``` ftp://[::] < //252.250.90.251 ```  | Ruby <br>
 ``` wss://[::]:65341 ```  | Java <br>
 ``` M:/ < ///h:/ ```  | Java <br>
 ``` ws://[::cfed:254.251.89.255] ```  | Java <br>
 ``` H:/ < //[::7afa:254.250.252.253] ```  | Java <br>Ruby <br>
 ``` ftp://[::] < //[::d8cd] ```  | Ruby <br>
 ``` ftp://[::] < //[cff9:beab::ddad:250.254.254.255] ```  | Ruby <br>
 ``` Y:/ < %7b￸ ```  | C <br>Java <br>Ruby <br>
 ``` wss://[::] < /B:/ ```  | Java <br>
 ``` M:/ < /+ ```  | C <br>Java <br>Ruby <br>
 ``` file:/// < //[::250.56.254.253] ```  | Ruby <br>
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | Java <br>Ruby <br>
 ``` file:///^ ```  | C <br>Ruby <br>
 ``` https://[::] < //[aefa:abfb:bebc:fbbd:cffc:dedb:6bfe:acbf] ```  | Ruby <br>
 ``` x:/ < //C ```  | Java <br>
 ``` o://[dcbb:ddbb::ddbb] ```  | Java <br>
 ``` https://[::] < 􌧄 ```  | C <br>Ruby <br>
 ``` V:///]! ```  | C <br>Java <br>Ruby <br>
 ``` v://[ceda:eaab:cafc:afbb:bfac:fdaf:254.253.253.253] < / ```  | Java <br>chromium <br>
 ``` wss://[::]/%2e/%3e ```  | Java <br>
 ``` g:/ < //[::acbe:bece:252.99.251.254] ```  | Java <br>Ruby <br>
 ``` http://[::] < //󢯼@= ```  | C <br>Go <br>Ruby <br>
 ``` https://[::] < //M@` ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` http://[::]?ퟻ < / ```  | Ruby <br>
 ``` wss://[::] < //[::255.252.223.251] ```  | Java <br>Ruby <br>
 ``` http://[::]/%60𓜎 ```  | C <br>Ruby <br>
 ``` ftp://[::] < ﹐ ```  | C <br>Ruby <br>
 ``` ftp://[::] < //[::ffff:bafd:cafd:db8f] ```  | Ruby <br>
 ``` z://[abce::] < / ```  | Java <br>chromium <br>
 ``` http://[::]?沫 < / ```  | Ruby <br>
 ``` ws://[::] < /[풂 ```  | C <br>Java <br>Ruby <br>
 ``` http://[::] < //[bfda:cbbc:ffcf:fbdb:caaf:fbce:9ffb:abac] ```  | Ruby <br>
 ``` file:///#⮃ < / ```  | PHP <br>Ruby <br>
 ``` p:/?ﺖ < / ```  | Java <br>Ruby <br>
 ``` wss://:@+ < / ```  | Java <br>
 ``` file:/// < /./////%2e%2e ```  | PHP <br>
 ``` w:/ < //[::aeae:fcae:86.253.250.253] ```  | Java <br>Ruby <br>
 ``` file:///'＿ < / ```  | Ruby <br>
 ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  | Java <br>
 ``` file://[::]/酜 < / ```  | Ruby <br>
 ``` R://[dfaa::] ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 69 | 0 | 69
chromium | 34 | 8 | 26

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://U ```  | host |  ``` u ```  |  ```  ``` 
 ``` g:/ < //[::acbe:bece:252.99.251.254] ```  | host |  ``` ::acbe:bece:fc63:fbfe ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` o://[dcbb:ddbb::ddbb] ```  | host |  ``` dcbb:ddbb::ddbb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://" ```  | host |  ``` " ```  |  ```  ``` 
 ``` file://[::]/ꪸ ```  | host |  ``` :: ```  |  ```  ``` 
 ``` v://[ceda:eaab:cafc:afbb:bfac:fdaf:254.253.253.253] < / ```  | host |  ``` ceda:eaab:cafc:afbb:bfac:fdaf:fefd:fdfd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::fede:dcaf:251.251.9.254] ```  | host |  ``` ::fede:dcaf:fbfb:9fe ```  |  ```  ``` 
 ``` N:/ < //*& ```  | host |  ``` *& ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::dbed:aebe:fdfe:ea7b] ```  | host |  ``` ::dbed:aebe:fdfe:ea7b ```  |  ```  ``` 
 ``` j:/ < //[efbb:efbc:eaff:cbaa:aebf:cada:254.67.255.251] ```  | host |  ``` efbb:efbc:eaff:cbaa:aebf:cada:fe43:fffb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::dcee:250.250.254.232] ```  | host |  ``` ::dcee:fafa:fee8 ```  |  ```  ``` 
 ``` file:/// < //{y ```  | host |  ``` {y ```  |  ```  ``` 
 ``` s:/ < //D ```  | host |  ``` d ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::]/, ```  | host |  ``` :: ```  |  ```  ``` 
 ``` x:/ < //C ```  | host |  ``` c ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[::250.56.254.253] ```  | host |  ``` ::fa38:fefd ```  |  ```  ``` 
 ``` R://[dfaa::] ```  | host |  ``` dfaa:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://)5 ```  | host |  ``` )5 ```  |  ```  ``` 
 ``` t:/ < //T ```  | host |  ``` t ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` R:/ < //[::b2ca:cdfa] ```  | host |  ``` ::b2ca:cdfa ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::220.250.251.253] ```  | host |  ``` ::dcfa:fbfd ```  |  ```  ``` 
 ``` file://[::bbfe:251.252.122.251] ```  | host |  ``` ::bbfe:fbfc:7afb ```  |  ```  ``` 
 ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  | host |  ``` fdbe:ccab::acdf:daef:fdfb:fbff ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` V://[::afab:bc8d:bbdc] ```  | host |  ``` ::afab:bc8d:bbdc ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[bf9b::beca:cadd:250.251.254.251] ```  | host |  ``` bf9b::beca:cadd:fafb:fefb ```  |  ```  ``` 
 ``` B://[::deee:202.255.253.255] < / ```  | host |  ``` ::deee:caff:fdff ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` U:/ < //[::dbae:acfd:251.254.8.252] ```  | host |  ``` ::dbae:acfd:fbfe:8fc ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:///^ ```  | filePath |  ``` /^ ```  |  ``` /%5E ``` 
 ``` X://[e5da:febd::fcad:252.251.252.254] ```  | host |  ``` e5da:febd::fcad:fcfb:fcfe ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::]/%2e./%3f ```  | host |  ``` :: ```  |  ```  ``` 
 ``` file://[cd7e::bbfa:beaf:253.251.255.255] ```  | host |  ``` cd7e::bbfa:beaf:fdfb:ffff ```  |  ```  ``` 
 ``` file://B ```  | host |  ``` b ```  |  ```  ``` 
 ``` i:/ < //[::f7fa:dafa] ```  | host |  ``` ::f7fa:dafa ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` b:/ < //[fcbf:cbfa::eceb:252.251.253.251] ```  | host |  ``` fcbf:cbfa::eceb:fcfb:fdfb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` o://[::5bde] < / ```  | host |  ``` ::5bde ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` n://[::255.250.241.250] ```  | host |  ``` ::fffa:f1fa ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` d:/ < ///􏾐 ```  | filePath |  ``` /%F4%8F%BE%90 ```  |  ``` //%F4%8F%BE%90/ ``` 
 ``` w:/ < //[::aeae:fcae:86.253.250.253] ```  | host |  ``` ::aeae:fcae:56fd:fafd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[::feeb] ```  | host |  ``` ::feeb ```  |  ```  ``` 
 ``` https://[::]/./%2e%2e ```  | filePath |  ``` / ```  |  ``` /%2e%2e ``` 
 ``` file://[::bdbc:223.254.255.254] < / ```  | host |  ``` ::bdbc:dffe:fffe ```  |  ```  ``` 
 ``` K:/ < //U ```  | host |  ``` u ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < /./////%2e%2e ```  | filePath |  ``` //// ```  |  ``` /////%2e%2e ``` 
 ``` F:/ < //~! ```  | host |  ``` ~! ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://,= < / ```  | host |  ``` ,= ```  |  ```  ``` 
 ``` H:/ < //[::7afa:254.250.252.253] ```  | host |  ``` ::7afa:fefa:fcfd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` J:/ < //; ```  | host |  ``` ; ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[9eed:bafe:dada:cecd:abca:fbec:250.252.255.253] ```  | host |  ``` 9eed:bafe:dada:cecd:abca:fbec:fafc:fffd ```  |  ```  ``` 
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | host |  ``` acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` z://[abce::] < / ```  | host |  ``` abce:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` M:/ < ///h:/ ```  | filePath |  ``` /h:/ ```  |  ``` //h/ ``` 
 ``` file://[::]/酜 < / ```  | host |  ``` :: ```  |  ```  ``` 
 ``` file://[bece:bdfa:acff:ffef:acdb:cbbf:250.253.251.6] ```  | host |  ``` bece:bdfa:acff:ffef:acdb:cbbf:fafd:fb06 ```  |  ```  ``` 
 ``` file:/// < //251.250.253.57 ```  | host |  ``` 251.250.253.57 ```  |  ```  ``` 
 ``` file://`$ ```  | host |  ``` `$ ```  |  ```  ``` 
 ``` file://[ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5] ```  | host |  ``` ffef:bfbd:ebfa:dcba:fcae:afff:befe:bdc5 ```  |  ```  ``` 
 ``` file:/// < //[::3eae:befd:250.255.253.253] ```  | host |  ``` ::3eae:befd:faff:fdfd ```  |  ```  ``` 
 ``` file://[::]/%2e%2e/󬱰 ```  | host |  ``` :: ```  |  ```  ``` 
 ``` file:/// < /? ```  | query |  ``` ?%EE%BA%87 ```  |  ``` %EE%BA%87 ``` 
 ``` P:/ < //[::fbaa:ceec:250.254.149.251] ```  | host |  ``` ::fbaa:ceec:fafe:95fb ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` n:/ < //,p ```  | host |  ``` ,p ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[3eec:bdec::252.250.255.252] < / ```  | host |  ``` 3eec:bdec::fcfa:fffc ```  |  ```  ``` 
 ``` https://.@, ```  | username |  ``` . ```  |  ``` %2E ``` 
 ``` X://[d1db:aace::] ```  | host |  ``` d1db:aace:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::eeaa:acfe:eada:d7bc] ```  | host |  ``` ::eeaa:acfe:eada:d7bc ```  |  ```  ``` 
 ``` U:/ < //[::badd:255.251.255.138] ```  | host |  ``` ::badd:fffb:ff8a ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://z ```  | host |  ``` z ```  |  ```  ``` 
 ``` b:/ < ///) ```  | filePath |  ``` /) ```  |  ``` //)/ ``` 
 ``` file://178.254.253.250 ```  | host |  ``` 178.254.253.250 ```  |  ```  ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://,= < / ```  | host |  ``` ,= ```  |  ```  ``` 
 ``` file:///^ ```  | path |  ``` /^ ```  |  ``` /%5E ``` 
 ``` V://[::afab:bc8d:bbdc] ```  | host |  ``` [::afab:bc8d:bbdc] ```  |  ```  ``` 
 ``` N:/ < //*& ```  | host |  ``` *& ```  |  ``` %2A%26 ``` 
 ``` file://[::]/酜 < / ```  | host |  ``` [::] ```  |  ```  ``` 
 ``` R://[dfaa::] ```  | host |  ``` [dfaa::] ```  |  ```  ``` 
 ``` n://[::255.250.241.250] ```  | host |  ``` [::fffa:f1fa] ```  |  ```  ``` 
 ``` file://[::bdbc:223.254.255.254] < / ```  | host |  ``` [::bdbc:dffe:fffe] ```  |  ```  ``` 
 ``` d://[fdbe:ccab::acdf:daef:253.251.251.255] ```  | host |  ``` [fdbe:ccab::acdf:daef:fdfb:fbff] ```  |  ```  ``` 
 ``` b:/ < ///) ```  | host |  ```  ```  |  ``` %29 ``` 
 ``` file:/// < //{y ```  | host |  ``` {y ```  |  ``` %7By ``` 
 ``` file://[3eec:bdec::252.250.255.252] < / ```  | host |  ``` [3eec:bdec::fcfa:fffc] ```  |  ```  ``` 
 ``` n:/ < //,p ```  | host |  ``` ,p ```  |  ``` %2Cp ``` 
 ``` wss://$ < / ```  | host |  ``` $ ```  |  ``` %24 ``` 
 ``` file://)5 ```  | host |  ``` )5 ```  |  ``` %295 ``` 
 ``` X://[e5da:febd::fcad:252.251.252.254] ```  | host |  ``` [e5da:febd::fcad:fcfb:fcfe] ```  |  ```  ``` 
 ``` M:/ < ///h:/ ```  | host |  ```  ```  |  ``` h ``` 
 ``` https://.@, ```  | host |  ``` , ```  |  ``` %2C ``` 
 ``` file://" ```  | host |  ``` " ```  |  ``` %22 ``` 
 ``` https://[::] < //%@) ```  | host |  ``` ) ```  |  ``` %29 ``` 
 ``` https://[::] < //M@` ```  | host |  ``` ` ```  |  ``` %60 ``` 
 ``` file://`$ ```  | host |  ``` `$ ```  |  ``` %60%24 ``` 
 ``` X://[d1db:aace::] ```  | host |  ``` [d1db:aace::] ```  |  ```  ``` 
 ``` http://[::] < //󢯼@= ```  | host |  ``` = ```  |  ``` %3D ``` 
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

