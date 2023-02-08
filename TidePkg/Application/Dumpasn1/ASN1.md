## BER

It's a compact binary protocol.(Rerfence:https://di-mgt.com.au/docs/LaymansGuidetoASN_1_BER_DER.html)



### 1、Type Class
(Rerfence:https://ldap.com/ldapv3-wire-protocol-reference-asn1-ber/)
|  Bits | 8 7 | 6 | 5-4 |
| :-:  | :-:|:-:| :-: |
|  Purpose  |    Class | Primitive(0) or Constructed(1) | Tag Number|
| | |
- Class:
```
 00 — This is the universal class. BER types in the universal class always mean the same thing, regardless of where you see it. For example, if you see a BER element with a type of 00000010 binary (0x02 hex, which means universal class, primitive, tag number two), then the value of that element will always be an integer.

 01 — This is the application class. BER types in the application class always mean the same thing within one application but might mean something completely different in another application. And here “application” doesn’t necessarily mean a computer program; in the case of LDAP, it means the complete protocol specification. For example, if you see a BER element in an LDAP message with a type of 01100011 binary (0x63 hex, which means application class, constructed, tag number three), then the value of that element will always be an LDAP search request protocol op.

 10 — This is the context-specific class. BER types in the context-specific class can have different meanings from one element to another, and you need to have an understanding of how it’s being used to be able to determine what it means. For example, if you see a BER element in an LDAP message with a type of 10100011 binary (0xa3 hex, which means context-specific class, constructed, tag number three), then it could represent a set of referral URLs if it appears in an LDAPResult sequence, or it could represent an equality filter component in a search request, or it could mean something completely different somewhere else in some other context.

 11 — This is the private class. It’s intended to be something in between the universal and application classes, where an organization could define its own set of types that have the same meaning across all of their applications, but the use of the private class is discouraged, and it’s highly unlikely that you’ll ever encounter it in LDAP.

```


### 2、Object Identifier

(Rerfence:https://www.sysadmins.lv/blog-en/how-to-encode-object-identifier-to-an-asn1-der-encoded-string.aspx)

原始数据 Hex: 06 0A 2A 81 1C CF 55 06 01 04 02 02

- 0x06 = 0B00000110 根据1中的描述, class为universal, primitive, Tag Number为6, 查表为Object Identifier(OID) Type.
- 0x0A = 0B00001010 = 10 表示后面10个字节为具体内容
- OID Type的定义为Value1的值为0,1或者2, Value2的值0～39，所以Value1和2的值一起表示为一个字节.
  ```
   BER encoding. Primitive. Contents octets are as follows, where value1, ..., valuen denote the integer values of the components in the complete object identifier:

        The first octet has value 40 * value1 + value2. (This is unambiguous, since value1 is limited to values 0, 1, and 2; value2 is limited to the range 0 to 39 when value1 is 0 or 1; and, according to X.208, n is always at least 2.)

        The following octets, if any, encode value3, ..., valuen. Each value is encoded base 128, most significant digit first, with as few digits as possible, and the most significant bit of each octet except the last in the value's encoding set to "1."

  ```
即0x2A=42, 具体算法为Value1 * 40 + Value2,所以前2个值为1和2.
- 根据上面的第二点0x81=0B10000001 0x1C=0B00011100 计算为0B10011100=156
- 0xCF=0B11001111 0x55=0B01010101 计算为0B10011111010101=10197
- 0x06=6 0x01=1 0x04=4 0x02=2 0x02=2

解析后：OBJECT IDENTIFIER '1 2 156 10197 6 1 4 2 2'

