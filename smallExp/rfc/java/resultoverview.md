# Results 

Total number of URLs: 3

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 17.33% 
Cpp | 0 | 0 | 16.0% 
Go | 0 | 0 | 68.5% 
Python | 0 | 0 | 32.0% 
firefox | 2 | 1 | 48.1% 
C | 2 | 1 | 23.5% 
PHP | 2 | 2 | 41.38% 
JavaScriptwhatwg-url | 2 | 1 | 29.51% 
chromium | 2 | 1 | 13.53% 
Ruby | 2 | 1 | 67.88% 
Java | 3 | 2 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> 


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
 ``` Host `[::ecfc:fbaf:dcaa:236.255.254.250%25_]` is invalid : the IP host is malformed ```  |  ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: v ```  |  ``` v://[::afca:dfed:fdcd:253.252.254.130] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  <br> ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` //[ccec:fdaa::edcd:bcca:cede:252.251.254.250%25~] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` v://[::afca:dfed:fdcd:253.252.254.130] ```  | Java <br>
 ``` //[::ecfc:fbaf:dcaa:236.255.254.250%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 2 | 2 | 0
chromium | 2 | 2 | 0

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

