# 国密安全启动总结

## 一、术语

非对称加密算法：RSA、SM2  
哈希算法：sha256等、SM3  
PKCS7信息格式  
asn1编码  
CA证书，包含公钥，机构信息等  
x509证书，openssl不支持sm2withsm3的格式，需自己加，否则解析不了，der/pem格式的区别  
私钥签名、公钥验签  
加密解密  



## 二、工具及代码
### 1、openssl(https://www.openssl.net.cn/)

因为Edk2/CryptoPkg中使用的openssl库为1.1.1版本，不支持Sm2withSm3证书及验签，故需要进行改动。改动的patch在./Charles。

国密标准：在官网或者github上可以搜到




### 2、sbsigntool
分离签名文件，得到签名头


Ex:在KylinSignedKernelgrub路径下
```
sbattach --detach 签名头  签名文件
$sbattach --detach grb.sig grubaa64.efi.signed
```
### 3、dumpasn1

解析asn1格式
```
$ dumpasn1 grb.sig
```
