LAN (Local Area Network) - 局域网
常用的三种局域网协议：

1. ipx/spx 
Nivell 开发的用于NetWare网络的协议，虽然此协议功能强大，适应性强，适用大型网络，但是只能局限于NetWare网络环境，不适用其他网络环境，随着NovellNetWare网络操作系统越来越少，此协议也慢慢推出舞台

2. NetBeui(用户扩展接口)
这是一种体积小，效率高,速度快的协议, 这种协议的主要特点是占用内存小，使用方便， 在网络中基本不用配置， 但是NETBEUI协议不具路由功能，只能在同一网段下内部通信，无法跨网段通信，使得其只适用于单网段的网络环境。

3. Tcp/Ip

TCP/IP分层     对应OSI分层          TCP/IP协议族
应用层          应用层              POP3      |      | DHCP  TFTP
                                   FTP  HTTP |      | SNMP  DNS
               表示层              Telnet SMTP| NFS  | 

传输层          会话层
                                   TCP       |       |  UDP
                传输层

网际层           网络层             IP  ICMP IGMP ARP  RARP

网络接口层      数据链路层           CSMA/CD      TokingRing
                物理层