# Results 

Total number of URLs: 12

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 17.94% 
Cpp | 0 | 0 | 16.0% 
Go | 0 | 0 | 69.0% 
Python | 0 | 0 | 32.0% 
firefox | 5 | 1 | 48.1% 
chromium | 5 | 1 | 13.53% 
C | 6 | 1 | 29.4% 
PHP | 6 | 6 | 42.24% 
JavaScriptwhatwg-url | 9 | 1 | 34.13% 
Ruby | 9 | 1 | 67.88% 
Java | 12 | 8 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `[::daef:dfdb:ebfb:252.252.251.7%25~]` is invalid : the IP host is malformed ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> 
 ``` Host `[5dbf:faed::badf:255.250.252.251%25_]` is invalid : the IP host is malformed ```  |  ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> 
 ``` Host `[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~]` is invalid : the IP host is malformed ```  |  ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> 
 ``` Host `[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_]` is invalid : the IP host is malformed ```  |  ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> 
 ``` Host `[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_]` is invalid : the IP host is malformed ```  |  ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> 
 ``` Host `[::dbca:eafc:acca:255.255.254.243%25_]` is invalid : the IP host is malformed ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: i ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: f ```  |  ``` f:///+ ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: q ```  |  ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: a ```  |  ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: l ```  |  ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: u ```  |  ``` U://[fcaa::aaaa:ebeb:dbfa:aeba:252.5.251.250] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: d ```  |  ``` d://[::8ceb:cfcd] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  <br> ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  <br> ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  <br> ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  <br> ``` //[::deca:eabe:bbdc:251.252.90.251] ```  <br> ``` //[::fbec:39.252.254.252] ```  <br> ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  <br> ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  <br> ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` I://[::daef:dfdb:ebfb:252.252.251.7%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` f:///+ ```  | Java <br>
 ``` q://[5dbf:faed::badf:255.250.252.251%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` a://[bace:ddaf:afdb:ddfd:dafc:afce:254.62.250.255%25~] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[5cda:fcfe::fbfe:cadc:eccf:250.252.251.252%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::deca:eabe:bbdc:251.252.90.251] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::fbec:39.252.254.252] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::bbab:eedf:cabd:dfef:fcef:254.121.251.252%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` L://[::dbca:eafc:acca:255.255.254.243%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::9ebc:ebcf:daeb:ffef:aadc:252.250.255.253] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` U://[fcaa::aaaa:ebeb:dbfa:aeba:252.5.251.250] ```  | Java <br>
 ``` d://[::8ceb:cfcd] ```  | Java <br>

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

