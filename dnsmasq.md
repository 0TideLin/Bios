## 1、dnsmasq的简介

Dnsmasq 提供 DNS 缓存和 DHCP 服务功能。作为域名解析服务器(DNS)，dnsmasq可以通过缓存 DNS 请求来提高对访问过的网址的连接速度。作为DHCP 服务器，dnsmasq 可以用于为局域网电脑分配内网ip地址和提供路由。DNS和DHCP两个功能可以同时或分别单独实现。dnsmasq轻量且易配置，适用于个人用户或少于50台主机的网络。此外它还自带了一个 PXE 服务器。
## 2、Dnsmasq的主要作用

### （1）将Dnsmasq作为本地DNS服务器使用，直接修改电脑的本地DNS的IP地址即可。

### （2）应对ISP的DNS劫持（反DNS劫持），输入一个不存在的域名，正常的情况下浏览器是显示无法连接，DNS劫持会跳转到一个广告页面。先随便nslookup 一个不存在的域名，看看ISP商劫持的IP地址。

### （3）智能DNS加快解析速度，打开/etc/dnsmasq.conf文件，server=后面可以添加指定的DNS，例如国内外不同的网站使用不同的DNS。

#### 国内指定DNS
```
server=/cn/114.114.114.114
server=/taobao.com/114.114.114.114
server=/taobaocdn.com/114.114.114.114
```

####  国外指定DNS
```
server=/google.com/8.8.8.8
```

### （4）屏蔽网页广告
将指广告的URL指定127这个IP，就可以将网页上讨厌的广告给去掉了。
```
address=/ad.youku.com/127.0.0.1
address=/ad.iqiyi.com/127.0.0.1
```

### （5）指定域名解析到特定的IP上
这个功能可以让你控制一些网站的访问，非法的DNS就经常把一些正规的网站解析到不正确IP上。
```
address=/freehao123.com/123.123.123.123
```

### （6）管理控制内网DNS
首先将局域网中的所有的设备的本地DNS设置为已经安装Dnsmasq的服务器IP地址。然后修改已经安装Dnsmasq的服务器Hosts文件：/etc/hosts，指定域名到特定的IP中。

例如想让局域网中的所有用户访问www.freehao123.com时跳转到192.168.0.2，添加：
```
192.168.0.2 www.freehao123.com
```

在Hosts文件中既可，整个过程也可以说是“DNS劫持”。

##  3、dnsmasq的解析流程

dnsmasq先去解析hosts文件， 再去解析/etc/dnsmasq.d/下的*.conf文件，并且这些文件的优先级要高于dnsmasq.conf，我们自定义的resolv.dnsmasq.conf中的DNS也被称为上游DNS，这是最后去查询解析的；

如果不想用hosts文件做解析，我们可以在/etc/dnsmasq.conf中加入no-hosts这条语句，这样的话就直接查询上游DNS了，如果我们不想做上游查询，就是不想做正常的解析，我们可以加入no-reslov这条语句。
## 4、dnsmasq的参数及常用设置说明

编辑 dnsmasq 的配置文件 /etc/dnsmasq.conf 。这个文件包含大量的选项注释。

### （1）dnsmasq经常修改的比较重要参数说明
```
具体参数

参数说明

resolv-file

定义dnsmasq从哪里获取上游DNS服务器的地址， 默认从/etc/resolv.conf获取。

strict-order

表示严格按照resolv-file文件中的顺序从上到下进行DNS解析，直到第一个解析成功为止。

listen-address

定义dnsmasq监听的地址，默认是监控本机的所有网卡上。

address

启用泛域名解析，即自定义解析a记录，例如：address=/long.com/192.168.115.10 访问long.com时的所有域名都会被解析成192.168.115.10

bogus-nxdomain

对于任何被解析到此 IP 的域名，将响应 NXDOMAIN 使其解析失效，可以多次指定
通常用于对于访问不存在的域名，禁止其跳转到运营商的广告站点

server

指定使用哪个DNS服务器进行解析，对于不同的网站可以使用不同的域名对应解析。
例如：server=/google.com/8.8.8.8    #表示对于google的服务，使用谷歌的DNS解析。
```

### （2）查看配置文件语法是否正确，可执行下列命令
```
[root@localhost ~]# dnsmasq -test
 dnsmasq: syntax check OK.
```
### （3）DNS 缓存设置
要在单台电脑上以守护进程方式启动dnsmasq做DNS缓存服务器，编辑/etc/dnsmasq.conf，添加监听地址：
```
listen-address=127.0.0.1
```
如果用此主机为局域网提供默认 DNS，请用为该主机绑定固定 IP 地址，设置：
```
listen-address=192.168.x.x
```
这种情况建议配置静态IP

多个ip地址设置:
```
listen-address=127.0.0.1,192.168.x.x
```

### （4）三个以上域名服务器
Linux 处理 DNS 请求时有个限制，在 resolv.conf 中最多只能配置三个域名服务器（nameserver）。作为一种变通方法,可以在 resolv.conf 文件中只保留 localhost 作为域名服务器，然后为外部域名服务器另外创建 resolv-file 文件。首先，为 dnsmasq 新建一个域名解析文件：
```
[root@localhost ~]# vim /etc/resolv.dnsmasq.conf
# Google's nameservers, for example
nameserver 8.8.8.8
nameserver 8.8.4.4
```
然后编辑 /etc/dnsmasq.conf 让 dnsmasq 使用新创建的域名解析文件：
```
[root@localhost ~]# vim  /etc/dnsmasq.conf
...
resolv-file=/etc/resolv.dnsmasq.conf
```
以上摘抄自：https://blog.csdn.net/qq_21127151/article/details/121203249

根据该博客，做以下操作： \
1、在路由器中将本机ip地址设为静态地址192.168.50.182，将其他主机的DNS服务器设置为192.168.50.182\
可以通过
```
cat /etc/resolv.conf
```
来获取DNS服务器的地址。\
2、编辑/etc/dnsmasq.conf
```
listen-address=127.0.0.1,192.168.50.182
```
3、编辑/etc/hosts,增加语句
```
192.168.50.182       www.test.com
```

4、重启dnsmaqs服务
```
service dnsmasq restart
```
在重启或者启动的过程中遇到报错
```
failed to create listening socket for port 53:Address already in use
```
使用命令
```
sudo netstat -anlp | grep -w LISTEN
```
查看占用53号口的程序，全部解除掉再重新启动。E.g:
```
sudo netstat -anlp | grep -w LISTEN
[sudo] password for greatwall:
tcp        0      0 127.0.0.53:53           0.0.0.0:*               LISTEN      568/systemd-resolve
tcp        0      0 0.0.0.0:445             0.0.0.0:*               LISTEN      1373/smbd
tcp        0      0 0.0.0.0:139             0.0.0.0:*               LISTEN      1373/smbd
tcp        0      0 127.0.0.1:953           0.0.0.0:*               LISTEN      681/named
tcp        0      0 127.0.0.1:631           0.0.0.0:*               LISTEN      604/cupsd
tcp        0      0 127.0.0.1:53            0.0.0.0:*               LISTEN      681/named
tcp        0      0 192.168.201.116:53      0.0.0.0:*               LISTEN      681/named
tcp6       0      0 :::443                  :::*                    LISTEN      890/apache2
tcp6       0      0 :::445                  :::*

这里systemd-resolve和named在使用53端口，使用命令停止这两项服务。

$ systemctl stop systemd-resolved.service
$ systemctl stop named.service

再次重启成功

```

5、用其他主机浏览器验证www.test.com是否成功





