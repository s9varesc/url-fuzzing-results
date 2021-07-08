# Results 

Total number of URLs: 96

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 29.55% 
Cpp | 0 | 0 | 36.1% 
JavaScriptwhatwg-url | 0 | 0 | 64.53% 
Python | 0 | 0 | 44.0% 
chromium | 2 | 1 | 50.94% 
firefox | 3 | 1 | 70.3% 
Go | 4 | 4 | 75.3% 
PHP | 12 | 10 | 47.41% 
C | 27 | 1 | 52.9% 
Java | 44 | 21 | 39.0% 
Ruby | 51 | 51 | 72.02% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` wss://[::] < //*o ```  <br> ``` wss://:@* ```  <br> ``` http://+" ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ftp://[::]/￴ ```  <br> ``` file:/// < /?䉷 ```  <br> ``` http://[::]#𕱽 ```  <br> ``` file:/// < /􏔼 ```  <br> ``` http://[::]/󚇜 ```  <br> ``` file:///?﹩ ```  <br> ``` N:/ < ///../] ```  <br> ``` file://[::]/􏘦 ```  <br> ``` P:/ < /?􏔲 ```  <br> ``` M:/ < /嫭 ```  <br> ``` file:/// < /%2e./􏲉 ```  <br> ``` file:///?} ```  <br> ``` file://ġ-Ł ```  <br> ``` file:/// < /툨 ```  <br> ``` file:///?ｦ ```  <br> ``` ftp://[::] < ＆ ```  <br> ``` ftp://[::] < //[::]/)򢮯 ```  <br> ``` v:/ ```  <br> ``` ftp://[::] < //@+ ```  <br> ``` F:/ < /./蔚 ```  <br> ``` file:/// < /?𿅢 ```  <br> ``` file:/// < /.%2e/ ```  <br> ``` wss://:@* ```  <br> ``` file:/// < /􏹺 ```  <br> ``` http://+" ```  <br> ``` file:///#ﾢ ```  <br> ``` file://`{ ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` The uri `` is invalid for the `file` scheme. ```  |  ``` file:///#= ```  <br> ``` file:///#! ```  <br> ``` file:///?%23 ```  <br> 
 ``` The uri `file:///?%E4%89%B7` is invalid for the `file` scheme. ```  |  ``` file:/// < /?䉷 ```  <br> 
 ``` The uri `file:///?%EF%B9%A9` is invalid for the `file` scheme. ```  |  ``` file:///?﹩ < / ```  <br> 
 ``` The uri `file:///?%7D` is invalid for the `file` scheme. ```  |  ``` file:///?} < / ```  <br> 
 ``` The uri `file:///?%EF%BD%A6` is invalid for the `file` scheme. ```  |  ``` file:///?ｦ ```  <br> 
 ``` The uri `file:///?%F0%BF%85%A2` is invalid for the `file` scheme. ```  |  ``` file:/// < /?𿅢 ```  <br> 
 ``` Host `+"` is invalid : the host is not a valid registered name ```  |  ``` http://+" ```  <br> 
 ``` The uri `file:///#%EF%BE%A2` is invalid for the `file` scheme. ```  |  ``` file:///#ﾢ < / ```  <br> 
 ``` The uri `ws://[::]#@` is invalid for the `ws` scheme. ```  |  ``` ws://[::]#@ < / ```  <br> 
 ``` Host ``{` is invalid : the host is not a valid registered name ```  |  ``` file://`{ < / ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` n:/ < //[dbc1:bcca::] ```  <br> ``` N:/ < ///../] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://D ```  <br> ``` wss://[::] < //*o ```  <br> ``` wss://251.255.214.253 ```  <br> ``` wss://Z! ```  <br> ``` wss://[::] < //[cecc:aecb:bbdb:ebff:fecf:babe:ab0c:dbde] ```  <br> ``` wss://:@* ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: ws ```  |  ``` ws://[::] < //[::cdef:bacb:cfc0] ```  <br> ``` ws://[eebd::efbe] < / ```  <br> ``` ws://[::] < /_ ```  <br> ``` ws://[::] < //[fffc:beac:feff:bebc:beea:fbad:250.81.251.251] ```  <br> ``` ws://[::] < //[cab2::dedc:255.250.251.251] ```  <br> ``` ws://R ```  <br> ``` ws://[::]#@ < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` Q:/%3f ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: p ```  |  ``` P:/ < /?􏔲 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: m ```  |  ``` M:/ < /嫭 ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: k ```  |  ``` K:/ < //[::252.251.253.49] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` h:/ < //[::fadb:aae1:acce] ```  <br> ``` H:/ < //[::245.252.254.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` D://_ ```  <br> ``` D:/ < //[::dcef:caec:c3ef] ```  <br> ``` D:/ < //[eade:afdd:cade:bcff:fbca:adce:adca:aaed] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R:/ < //[::]:64305 ```  <br> ``` r:/ < //%6f ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: u ```  |  ``` U:/ < //[::bffa:eecf:180.253.255.252] ```  <br> ``` u:/ < //[d1ef::eeef:253.255.255.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` V:/ < //[::cdbe:8.251.254.254] ```  <br> ``` v:/ < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: c ```  |  ``` C:/ < //[::ffd3:bada] ```  <br> ``` C:/ < //[da4d:daef::] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: g ```  |  ``` g:/ < %2e/* ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: a ```  |  ``` a:///d:/ < / ```  <br> ``` A:/ < %2e//.. ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: j ```  |  ``` J:/ < ///& ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: rc ```  |  ``` rC:/ < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: i ```  |  ``` i:/K:/ ```  <br> ``` I:/ < //Z ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < /./蔚 ```  <br> ``` f:/ < //f ```  <br> ``` f:/ < //'b ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: t ```  |  ``` T://N ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: o ```  |  ``` O:/ < //[e5bf:aeaa::] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse //@+: net/url: invalid userinfo ```  |  ``` ftp://[::] < //@+ ```  <br> 
 ``` parse //%6f: invalid URL escape "%6f" ```  |  ``` r:/ < //%6f ```  <br> 
 ``` parse : net/url: invalid userinfo ```  |  ``` wss://:@* ```  <br> 
 ``` parse file://`{: invalid character "`" in host name ```  |  ``` file://`{ < / ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` file://;, ```  <br> ``` http://[::] < //9@; ```  <br> 


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
 ``` bad URI(is not URI?): //[dd8c::cbee:bdee:251.252.254.252] ```  |  ``` file:/// < //[dd8c::cbee:bdee:251.252.254.252] ```  <br> 
 ``` URI must be ascii only "\uFF06" ```  |  ``` ftp://[::] < ＆ ```  <br> 
 ``` bad URI(is not URI?): //[::dcef:caec:c3ef] ```  |  ``` D:/ < //[::dcef:caec:c3ef] ```  <br> 
 ``` URI must be ascii only "//[::]/)\u{A2BAF}" ```  |  ``` ftp://[::] < //[::]/)򢮯 ```  <br> 
 ``` URI must be ascii only "v:/\uF0A6" ```  |  ``` v:/ < / ```  <br> 
 ``` bad URI(is not URI?): //[fffc:beac:feff:bebc:beea:fbad:250.81.251.251] ```  |  ``` ws://[::] < //[fffc:beac:feff:bebc:beea:fbad:250.81.251.251] ```  <br> 
 ``` URI must be ascii only "//\uF0DE@+" ```  |  ``` ftp://[::] < //@+ ```  <br> 
 ``` bad URI(is not URI?): //[cab2::dedc:255.250.251.251] ```  |  ``` ws://[::] < //[cab2::dedc:255.250.251.251] ```  <br> 
 ``` URI must be ascii only "/./\u851A" ```  |  ``` F:/ < /./蔚 ```  <br> 
 ``` bad URI(is not URI?): //[eade:afdd:cade:bcff:fbca:adce:adca:aaed] ```  |  ``` D:/ < //[eade:afdd:cade:bcff:fbca:adce:adca:aaed] ```  <br> 
 ``` URI must be ascii only "/?\u{3F162}" ```  |  ``` file:/// < /?𿅢 ```  <br> 
 ``` bad URI(is not URI?): //[::]/../%2e. ```  |  ``` file:/// < //[::]/../%2e. ```  <br> 
 ``` URI must be ascii only "/.%2e/\uF860" ```  |  ``` file:/// < /.%2e/ ```  <br> 
 ``` bad URI(is not URI?): //[cecc:aecb:bbdb:ebff:fecf:babe:ab0c:dbde] ```  |  ``` wss://[::] < //[cecc:aecb:bbdb:ebff:fecf:babe:ab0c:dbde] ```  <br> 
 ``` URI must be ascii only "wss://:\uF116@*" ```  |  ``` wss://:@* ```  <br> 
 ``` bad URI(is not URI?): //[e5bf:aeaa::] ```  |  ``` O:/ < //[e5bf:aeaa::] ```  <br> 
 ``` bad URI(is not URI?): //[fd3e:fdda::254.250.255.252] ```  |  ``` http://[::] < //[fd3e:fdda::254.250.255.252] ```  <br> 
 ``` bad URI(is not URI?): //[::bdbb:faab:ccd9] ```  |  ``` https://[::] < //[::bdbb:faab:ccd9] ```  <br> 
 ``` bad URI(is not URI?): //[d1ef::eeef:253.255.255.253] ```  |  ``` u:/ < //[d1ef::eeef:253.255.255.253] ```  <br> 
 ``` bad URI(is not URI?): //[ebfe:abdd:caff:cadf:aeeb:fcaf:78.254.252.250] ```  |  ``` file:/// < //[ebfe:abdd:caff:cadf:aeeb:fcaf:78.254.252.250] ```  <br> 
 ``` bad URI(is not URI?): //[da4d:daef::] ```  |  ``` C:/ < //[da4d:daef::] ```  <br> 
 ``` URI must be ascii only "/\u{10FE7A}" ```  |  ``` file:/// < /􏹺 ```  <br> 
 ``` bad URI(is not URI?):  ```  |  ``` http://+" ```  <br> 
 ``` URI must be ascii only "file:///#\uFFA2" ```  |  ``` file:///#ﾢ < / ```  <br> 
 ``` bad URI(is not URI?): //[::245.252.254.253] ```  |  ``` H:/ < //[::245.252.254.253] ```  <br> 
 ``` bad URI(is not URI?): file://`{ ```  |  ``` file://`{ < / ```  <br> 
 ``` bad URI(is not URI?): //[ebc9:dced::] ```  |  ``` file:/// < //[ebc9:dced::] ```  <br> 


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
 ``` file:/// < //[dd8c::cbee:bdee:251.252.254.252] ```  | Ruby <br>
 ``` a:///d:/ < / ```  | Java <br>
 ``` J:/ < ///& ```  | Java <br>
 ``` ftp://[::] < ＆ ```  | C <br>Ruby <br>
 ``` D:/ < //[::dcef:caec:c3ef] ```  | Java <br>Ruby <br>
 ``` ftp://[::] < //[::]/)򢮯 ```  | C <br>Ruby <br>
 ``` v:/ < / ```  | Java <br>Ruby <br>
 ``` rC:/ < / ```  | Java <br>
 ``` ws://[::] < //[fffc:beac:feff:bebc:beea:fbad:250.81.251.251] ```  | Java <br>Ruby <br>
 ``` i:/K:/ ```  | Java <br>
 ``` ftp://[::] < //@+ ```  | C <br>Go <br>Ruby <br>
 ``` ws://[::] < //[cab2::dedc:255.250.251.251] ```  | Java <br>Ruby <br>
 ``` F:/ < /./蔚 ```  | C <br>Java <br>Ruby <br>
 ``` D:/ < //[eade:afdd:cade:bcff:fbca:adce:adca:aaed] ```  | Java <br>Ruby <br>
 ``` file:/// < /?𿅢 ```  | C <br>PHP <br>Ruby <br>
 ``` file:///#! ```  | PHP <br>
 ``` r:/ < //%6f ```  | Java <br>Go <br>
 ``` T://N ```  | Java <br>
 ``` file:/// < //[::]/../%2e. ```  | Ruby <br>
 ``` f:/ < //f ```  | Java <br>
 ``` file:/// < /.%2e/ ```  | C <br>Ruby <br>
 ``` wss://[::] < //[cecc:aecb:bbdb:ebff:fecf:babe:ab0c:dbde] ```  | Java <br>Ruby <br>
 ``` wss://:@* ```  | firefox <br>C <br>Java <br>Go <br>Ruby <br>
 ``` O:/ < //[e5bf:aeaa::] ```  | Java <br>Ruby <br>
 ``` http://[::] < //[fd3e:fdda::254.250.255.252] ```  | Ruby <br>
 ``` https://[::] < //[::bdbb:faab:ccd9] ```  | Ruby <br>
 ``` file:///?%23 ```  | PHP <br>
 ``` u:/ < //[d1ef::eeef:253.255.255.253] ```  | Java <br>Ruby <br>
 ``` file:/// < //[ebfe:abdd:caff:cadf:aeeb:fcaf:78.254.252.250] ```  | Ruby <br>
 ``` f:/ < //'b ```  | Java <br>
 ``` C:/ < //[da4d:daef::] ```  | Java <br>Ruby <br>
 ``` A:/ < %2e//.. ```  | Java <br>
 ``` file:/// < /􏹺 ```  | C <br>Ruby <br>
 ``` http://+" ```  | firefox <br>C <br>PHP <br>Ruby <br>
 ``` ws://R ```  | Java <br>
 ``` I:/ < //Z ```  | Java <br>
 ``` http://[::] < //9@; ```  | chromium <br>
 ``` file:///#ﾢ < / ```  | PHP <br>Ruby <br>
 ``` H:/ < //[::245.252.254.253] ```  | Java <br>Ruby <br>
 ``` ws://[::]#@ < / ```  | PHP <br>Java <br>
 ``` file://`{ < / ```  | PHP <br>Go <br>Ruby <br>
 ``` file:/// < //[ebc9:dced::] ```  | Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 48 | 3 | 45
chromium | 17 | 2 | 15

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file://[::cdfb:bafe:39.254.250.250] < / ```  | host |  ``` ::cdfb:bafe:27fe:fafa ```  |  ```  ``` 
 ``` P:/ < /?􏔲 ```  | query |  ``` ?%F4%8F%94%B2 ```  |  ``` %F4%8F%94%B2 ``` 
 ``` file:/// < //253.252.255.220 ```  | host |  ``` 253.252.255.220 ```  |  ```  ``` 
 ``` D:/ < //[::dcef:caec:c3ef] ```  | host |  ``` ::dcef:caec:c3ef ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[bee7:bddb::abec] ```  | host |  ``` bee7:bddb::abec ```  |  ```  ``` 
 ``` J:/ < ///& ```  | filePath |  ``` /& ```  |  ``` //&/ ``` 
 ``` file:/// < //[::]/../%2e. ```  | host |  ``` :: ```  |  ```  ``` 
 ``` h:/ < //[::fadb:aae1:acce] ```  | host |  ``` ::fadb:aae1:acce ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[ebc9:dced::] ```  | host |  ``` ebc9:dced:: ```  |  ```  ``` 
 ``` file:/// < //[ebfe:abdd:caff:cadf:aeeb:fcaf:78.254.252.250] ```  | host |  ``` ebfe:abdd:caff:cadf:aeeb:fcaf:4efe:fcfa ```  |  ```  ``` 
 ``` f:/ < //'b ```  | host |  ``` 'b ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` O:/ < //[e5bf:aeaa::] ```  | host |  ``` e5bf:aeaa:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < /?䉷 ```  | query |  ``` ?%E4%89%B7 ```  |  ``` %E4%89%B7 ``` 
 ``` https://[::] < /?g ```  | query |  ``` ?g ```  |  ``` g ``` 
 ``` file://;, ```  | host |  ``` ;, ```  |  ```  ``` 
 ``` http://[::] < %2e%2e//%2e. ```  | filePath |  ``` / ```  |  ``` //%2e. ``` 
 ``` a:///d:/ < / ```  | filePath |  ``` / ```  |  ``` /// ``` 
 ``` U:/ < //[::bffa:eecf:180.253.255.252] ```  | host |  ``` ::bffa:eecf:b4fd:fffc ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` I:/ < //Z ```  | host |  ``` z ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` n:/ < //[dbc1:bcca::] ```  | host |  ``` dbc1:bcca:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://ġ-Ł < / ```  | host |  ``` xn----hja4h ```  |  ```  ``` 
 ``` H:/ < //[::245.252.254.253] ```  | host |  ``` ::f5fc:fefd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[dd8c::cbee:bdee:251.252.254.252] ```  | host |  ``` dd8c::cbee:bdee:fbfc:fefc ```  |  ```  ``` 
 ``` f:/ < //f ```  | host |  ``` f ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://`{ < / ```  | host |  ``` `{ ```  |  ```  ``` 
 ``` file:///?ｦ ```  | query |  ``` ?%EF%BD%A6 ```  |  ``` %EF%BD%A6 ``` 
 ``` C:/ < //[da4d:daef::] ```  | host |  ``` da4d:daef:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:/// < //[::dcfd:dcef] ```  | host |  ``` ::dcfd:dcef ```  |  ```  ``` 
 ``` file://207.254.251.254 ```  | host |  ``` 207.254.251.254 ```  |  ```  ``` 
 ``` file:/// < /?𿅢 ```  | query |  ``` ?%F0%BF%85%A2 ```  |  ``` %F0%BF%85%A2 ``` 
 ``` file:/// < //[::ffed:abde:defd:fdc8] ```  | host |  ``` ::ffed:abde:defd:fdc8 ```  |  ```  ``` 
 ``` C:/ < //[::ffd3:bada] ```  | host |  ``` ::ffd3:bada ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` N:/ < ///../] ```  | filePath |  ``` /] ```  |  ``` //../] ``` 
 ``` file://250.251.7.251 ```  | host |  ``` 250.251.7.251 ```  |  ```  ``` 
 ``` file://-+ ```  | host |  ``` -+ ```  |  ```  ``` 
 ``` r:/ < //%6f ```  | host |  ``` %6f ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` T://N ```  | host |  ``` n ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file:///?%23 ```  | query |  ``` ?%23 ```  |  ``` %23 ``` 
 ``` u:/ < //[d1ef::eeef:253.255.255.253] ```  | host |  ``` d1ef::eeef:fdff:fffd ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` R:/ < //[::]:64305 ```  | host |  ``` :: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` D:/ < //[eade:afdd:cade:bcff:fbca:adce:adca:aaed] ```  | host |  ``` eade:afdd:cade:bcff:fbca:adce:adca:aaed ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` V:/ < //[::cdbe:8.251.254.254] ```  | host |  ``` ::cdbe:8fb:fefe ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` file://[::]/􏘦 ```  | host |  ``` :: ```  |  ```  ``` 
 ``` D://_ ```  | host |  ``` _ ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` K:/ < //[::252.251.253.49] ```  | host |  ``` ::fcfb:fd31 ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` wss://:@* ```  | host |  ``` * ```  |  ``` %2A ``` 
 ``` https://F, ```  | host |  ``` f, ```  |  ``` f%2C ``` 
 ``` J:/ < ///& ```  | host |  ```  ```  |  ``` %26 ``` 
 ``` r:/ < //%6f ```  | host |  ``` %6f ```  |  ``` o ``` 
 ``` file://`{ < / ```  | host |  ``` `{ ```  |  ```  ``` 
 ``` f:/ < //'b ```  | host |  ``` 'b ```  |  ``` %27b ``` 
 ``` wss://Z! ```  | host |  ``` z! ```  |  ``` z%21 ``` 
 ``` T://N ```  | host |  ``` n ```  |  ```  ``` 
 ``` file://[::cdfb:bafe:39.254.250.250] < / ```  | host |  ``` [::cdfb:bafe:27fe:fafa] ```  |  ```  ``` 
 ``` wss://[::] < //*o ```  | host |  ``` *o ```  |  ``` %2Ao ``` 
 ``` N:/ < ///../] ```  | host |  ```  ```  |  ``` .. ``` 
 ``` D://_ ```  | host |  ``` _ ```  |  ```  ``` 
 ``` http://+" ```  | host |  ``` +" ```  |  ``` +%22 ``` 
 ``` file://ġ-Ł < / ```  | host |  ``` xn----hja4h ```  |  ```  ``` 
 ``` a:///d:/ < / ```  | path |  ``` / ```  |  ``` ///d:/ ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

