# Results 

Total number of URLs: 10

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 66.6% 
JavaScripturijs | 0 | 0 | 23.74% 
Cpp | 0 | 0 | 28.9% 
JavaScriptwhatwg-url | 0 | 0 | 52.76% 
Python | 0 | 0 | 41.0% 
C | 1 | 1 | 42.9% 
Go | 1 | 1 | 69.5% 
chromium | 1 | 1 | 42.29% 
PHP | 3 | 3 | 41.38% 
Ruby | 4 | 4 | 72.02% 
Java | 5 | 3 | 39.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` https://[::] < //M@` ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` The uri `` is invalid for the `file` scheme. ```  |  ``` file:///#@ ```  <br> 
 ```` Host ``` is invalid : the host is not a valid registered name ````  |  ``` https://[::] < //M@` ```  <br> 
 ``` If there is no authority the path `/////%2e%2e` can not start with a `//`. ```  |  ``` file:/// < /./////%2e%2e ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: wss ```  |  ``` wss://[c6fe::252.251.250.250] ```  <br> ``` wss://[::7cbc:253.250.252.255] < / ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F:/ < //~! ```  <br> ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  <br> 
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
 ``` bad URI(is not URI?): //[::feeb] ```  |  ``` file:/// < //[::feeb] ```  <br> 
 ``` bad URI(is not URI?): //[::fccf:edda:cceb:a2ff] ```  |  ``` http://[::] < //[::fccf:edda:cceb:a2ff] ```  <br> 
 ``` bad URI(is not URI?): //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  |  ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  <br> 
 ``` bad URI(is not URI?): //M@` ```  |  ``` https://[::] < //M@` ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` wss://[c6fe::252.251.250.250] ```  | Java <br>
 ``` F:/ < //~! ```  | Java <br>chromium <br>
 ``` file:/// < //[::feeb] ```  | Ruby <br>
 ``` file:///#@ ```  | PHP <br>
 ``` wss://[::7cbc:253.250.252.255] < / ```  | Java <br>
 ``` http://[::] < //[::fccf:edda:cceb:a2ff] ```  | Ruby <br>
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | Java <br>Ruby <br>
 ``` https://[::] < //M@` ```  | C <br>PHP <br>Go <br>Ruby <br>
 ``` file:/// < /./////%2e%2e ```  | PHP <br>
 ``` R://[dfaa::] ```  | Java <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 5 | 0 | 5
chromium | 3 | 1 | 2

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` file:/// < //[::feeb] ```  | host |  ``` ::feeb ```  |  ```  ``` 
 ``` file:/// < /./////%2e%2e ```  | filePath |  ``` //// ```  |  ``` /////%2e%2e ``` 
 ``` F:/ < //~! ```  | host |  ``` ~! ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` f:/ < //[acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae] ```  | host |  ``` acde:dcab:beae:dfdb:abbb:fbcb:d7ce:fdae ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 
 ``` R://[dfaa::] ```  | host |  ``` dfaa:: ```  |  ``` NS_ERROR_FAILURE 2147500037 ``` 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 
 ``` R://[dfaa::] ```  | host |  ``` [dfaa::] ```  |  ```  ``` 
 ``` https://[::] < //M@` ```  | host |  ``` ` ```  |  ``` %60 ``` 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

