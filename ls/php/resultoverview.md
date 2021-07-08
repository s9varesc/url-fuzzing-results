# Results 

Total number of URLs: 2

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
firefox | 0 | 0 | 55.9% 
JavaScripturijs | 0 | 0 | 17.68% 
Cpp | 0 | 0 | 15.4% 
Java | 0 | 0 | 36.0% 
Go | 0 | 0 | 66.8% 
JavaScriptwhatwg-url | 0 | 0 | 28.61% 
chromium | 0 | 0 | 27.44% 
Python | 0 | 0 | 32.0% 
C | 1 | 1 | 21.5% 
PHP | 1 | 1 | 34.48% 
Ruby | 1 | 1 | 66.84% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` ftp://[::]/￴ ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` The uri `` is invalid for the `file` scheme. ```  |  ``` file:///#= ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 


### chromium

 Exception Type | URLs 
 --- | --- 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` URI must be ascii only "ftp://[::]/\uFFF4" ```  |  ``` ftp://[::]/￴ ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` ftp://[::]/￴ ```  | C <br>Ruby <br>
 ``` file:///#= ```  | PHP <br>

## Browsers

 Browser | Overall Failures | Parsing Exceptions | Verification Errors 
 --- | --- | --- | --- 
firefox | 0 | 0 | 0
chromium | 0 | 0 | 0

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

