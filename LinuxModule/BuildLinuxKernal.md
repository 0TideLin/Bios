## 1、编译内核遇到的问题
### (1)

```
make[1]: *** No rule to make target 'debian/canonical-certs.pem', needed by 'certs/x509_certificate_list'.  Stop.
make: *** [Makefile:1868: certs] Error 2

```
在命令中执行
```
$ scripts/config --disable SYSTEM_TRUSTED_KEYS
```
在.config 中可以根据certs/x509_certificate_list查看到对应的功能

### (2)

```
make[1]: *** No rule to make target 'debian/canonical-revoked-certs.pem', needed by 'certs/x509_revocation_list'.  Stop.
make: *** [Makefile:1868: certs] Error 2

```

在命令行中执行

```
scripts/config --disable SYSTEM_REVOCATION_KEYS
```