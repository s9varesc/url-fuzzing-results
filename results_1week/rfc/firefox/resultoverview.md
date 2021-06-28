# Results 

Total number of URLs: 10

Total number of Parsers: 11

## Parser Comparison 

 Parsername | Number of Exceptions | Number of Different Exceptions | Code Coverage 
 --- | --- | --- | ---
JavaScripturijs | 0 | 0 | 18.2% 
Cpp | 0 | 0 | 17.1% 
Go | 0 | 0 | 68.5% 
Python | 0 | 0 | 32.0% 
C | 4 | 1 | 27.7% 
PHP | 4 | 4 | 42.24% 
firefox | 5 | 1 | 48.1% 
chromium | 5 | 1 | 13.72% 
Ruby | 6 | 1 | 68.91% 
JavaScriptwhatwg-url | 7 | 1 | 30.7% 
Java | 10 | 6 | 36.0% 


*note:*  base and relative URLs are represented as "base<relative" in this document for readabilty, the actually parsed inputs do not contain "<" 

### firefox

 Exception Type | URLs 
 --- | --- 
 ``` NS_ERROR_MALFORMED_URI 2152398858 ```  |  ``` //?. ```  <br> ``` //[::227.5.8.5] ```  <br> ``` //[::becd:dcde:feab:dabb:beaa:1.2.252.9] ```  <br> ``` //[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_] ```  <br> ``` //[::bfda:acda:5.8.3.252%25_] ```  <br> 


### C

 Exception Type | URLs 
 --- | --- 
 ``` 1 ```  |  ``` O://[::edce:fcdc:baae:3.255.3.6%25_] ```  <br> ``` //[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_] ```  <br> ``` R://[::abca:222.9.3.6%25_] ```  <br> ``` //[::bfda:acda:5.8.3.252%25_] ```  <br> 


### JavaScripturijs

 Exception Type | URLs 
 --- | --- 


### Cpp

 Exception Type | URLs 
 --- | --- 


### PHP

 Exception Type | URLs 
 --- | --- 
 ``` Host `[::edce:fcdc:baae:3.255.3.6%25_]` is invalid : the IP host is malformed ```  |  ``` O://[::edce:fcdc:baae:3.255.3.6%25_] ```  <br> 
 ``` Host `[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_]` is invalid : the IP host is malformed ```  |  ``` //[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_] ```  <br> 
 ``` Host `[::abca:222.9.3.6%25_]` is invalid : the IP host is malformed ```  |  ``` R://[::abca:222.9.3.6%25_] ```  <br> 
 ``` Host `[::bfda:acda:5.8.3.252%25_]` is invalid : the IP host is malformed ```  |  ``` //[::bfda:acda:5.8.3.252%25_] ```  <br> 


### Java

 Exception Type | URLs 
 --- | --- 
 ``` java.net.MalformedURLException: unknown protocol: s ```  |  ``` S://[::fdea:9.6.250.2] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: z ```  |  ``` Z://[::affd:caeb:4.6.36.8] ```  <br> 
 ``` java.net.MalformedURLException: no protocol:  ```  |  ``` //?. ```  <br> ``` //[::227.5.8.5] ```  <br> ``` //[::becd:dcde:feab:dabb:beaa:1.2.252.9] ```  <br> ``` //[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_] ```  <br> ``` //[::bfda:acda:5.8.3.252%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: h ```  |  ``` H://[fdaf::ccfc:adca:dded:fcad] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: o ```  |  ``` O://[::edce:fcdc:baae:3.255.3.6%25_] ```  <br> 
 ``` java.net.MalformedURLException: unknown protocol: r ```  |  ``` R://[::abca:222.9.3.6%25_] ```  <br> 


### Go

 Exception Type | URLs 
 --- | --- 


### JavaScriptwhatwg-url

 Exception Type | URLs 
 --- | --- 
 ``` Invalid URL:  ```  |  ``` //?. ```  <br> ``` //[::227.5.8.5] ```  <br> ``` //[::becd:dcde:feab:dabb:beaa:1.2.252.9] ```  <br> ``` O://[::edce:fcdc:baae:3.255.3.6%25_] ```  <br> ``` //[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_] ```  <br> ``` R://[::abca:222.9.3.6%25_] ```  <br> ``` //[::bfda:acda:5.8.3.252%25_] ```  <br> 


### chromium

 Exception Type | URLs 
 --- | --- 
 ``` invalid URL ```  |  ``` //?. ```  <br> ``` //[::227.5.8.5] ```  <br> ``` //[::becd:dcde:feab:dabb:beaa:1.2.252.9] ```  <br> ``` //[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_] ```  <br> ``` //[::bfda:acda:5.8.3.252%25_] ```  <br> 


### Python

 Exception Type | URLs 
 --- | --- 


### Ruby

 Exception Type | URLs 
 --- | --- 
 ``` bad URI(is not URI?):  ```  |  ``` //[::227.5.8.5] ```  <br> ``` //[::becd:dcde:feab:dabb:beaa:1.2.252.9] ```  <br> ``` O://[::edce:fcdc:baae:3.255.3.6%25_] ```  <br> ``` //[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_] ```  <br> ``` R://[::abca:222.9.3.6%25_] ```  <br> ``` //[::bfda:acda:5.8.3.252%25_] ```  <br> 


## URL Comparison 

 URL | Parsers 
 --- | --- 
 ``` S://[::fdea:9.6.250.2] ```  | Java <br>
 ``` Z://[::affd:caeb:4.6.36.8] ```  | Java <br>
 ``` //?. ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>
 ``` H://[fdaf::ccfc:adca:dded:fcad] ```  | Java <br>
 ``` //[::227.5.8.5] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` //[::becd:dcde:feab:dabb:beaa:1.2.252.9] ```  | firefox <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` O://[::edce:fcdc:baae:3.255.3.6%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[dadb::fafb:eeeb:bcfb:dffd:210.1.2.9%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>
 ``` R://[::abca:222.9.3.6%25_] ```  | C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>Ruby <br>
 ``` //[::bfda:acda:5.8.3.252%25_] ```  | firefox <br>C <br>PHP <br>Java <br>JavaScriptwhatwg-url <br>chromium <br>Ruby <br>

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

