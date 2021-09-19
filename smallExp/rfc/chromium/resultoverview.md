# Results 

Total number of URLs: 9

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 17.94% 
Cpp | 0 | 0 | 16.0% 
Python | 0 | 0 | 32.0% 
Go | 1 | 1 | 70.0% 
firefox | 5 | 1 | 48.1% 
C | 5 | 1 | 28.6% 
PHP | 5 | 5 | 42.24% 
chromium | 5 | 1 | 13.72% 
Ruby | 7 | 1 | 68.91% 
JavaScriptwhatwg-url | 8 | 1 | 30.85% 
Java | 9 | 5 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::fbfd:bdbc:254.253.125.252] ```  <br> ``` ///_ ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> ``` //[::abed:dbac:bdda:250.252.86.251] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` L://[1bcb::bdaa:251.251.254.251%25-] ```  <br> ``` N://[::%25%ee] ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> ``` F://[::8acd:efce:eacc:253.250.253.255%25_] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~]` is invalid : the IP host is malformed ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> 
 ``` Host `[1bcb::bdaa:251.251.254.251%25-]` is invalid : the IP host is malformed ```  |  ``` L://[1bcb::bdaa:251.251.254.251%25-] ```  <br> 
 ``` Host `[::%25%ee]` is invalid : the IP host is malformed ```  |  ``` N://[::%25%ee] ```  <br> 
 ``` Host `[::ecfc:fbaf:dcaa:236.255.254.250%25_]` is invalid : the IP host is malformed ```  |  ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> 
 ``` Host `[::8acd:efce:eacc:253.250.253.255%25_]` is invalid : the IP host is malformed ```  |  ``` F://[::8acd:efce:eacc:253.250.253.255%25_] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::fbfd:bdbc:254.253.125.252] ```  <br> ``` ///_ ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> ``` //[::abed:dbac:bdda:250.252.86.251] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` L://[1bcb::bdaa:251.251.254.251%25-] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` v://[::afca:dfed:fdcd:253.252.254.130] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: n ```  |  ``` N://[::%25%ee] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` F://[::8acd:efce:eacc:253.250.253.255%25_] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 
 ``` parse : invalid URL escape "%ee" ```  |  ``` N://[::%25%ee] ```  <br> 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::fbfd:bdbc:254.253.125.252] ```  <br> ``` L://[1bcb::bdaa:251.251.254.251%25-] ```  <br> ``` ///_ ```  <br> ``` N://[::%25%ee] ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> ``` //[::abed:dbac:bdda:250.252.86.251] ```  <br> ``` F://[::8acd:efce:eacc:253.250.253.255%25_] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::fbfd:bdbc:254.253.125.252] ```  <br> ``` ///_ ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> ``` //[::abed:dbac:bdda:250.252.86.251] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::fbfd:bdbc:254.253.125.252] ```  <br> ``` L://[1bcb::bdaa:251.251.254.251%25-] ```  <br> ``` N://[::%25%ee] ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> ``` //[::abed:dbac:bdda:250.252.86.251] ```  <br> ``` F://[::8acd:efce:eacc:253.250.253.255%25_] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::fbfd:bdbc:254.253.125.252] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` L://[1bcb::bdaa:251.251.254.251%25-] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` v://[::afca:dfed:fdcd:253.252.254.130] ```  | Java <br>
 ``` ///_ ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` N://[::%25%ee] ```  | C <br>PHP <br>Java <br>Go <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::abed:dbac:bdda:250.252.86.251] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` F://[::8acd:efce:eacc:253.250.253.255%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 5 | 5 | 0
chromium | 5 | 5 | 0

[full browser comparison](./browseroverview.html)

### firefox

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 

### chromium

 URL | Component | Expected Value | Actual Value 
 --- | --- | --- | --- 

## Coverage Reports 

### Browsers


#### Chromium

[Overview](./chromium/report.html)

[Source File Report](./chromium/url_parse.cc.html)


#### Firefox

[Overview](./firefox/index.html)

[Source File Report](./firefox/nsURLParsers.cpp.gcov.html)

