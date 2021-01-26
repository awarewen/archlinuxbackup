DHCP工作原理：
    DHCP协议采用UDP作为传输协议，主机发送请求消息到DHCP服务器的67号端口，DHCP服务器回应应答消息给主机的68号端口，详细的交互过程如下图。

    1、DHCP Client 在LAN中以广播的方式发出 DHCP Discover 报文
        - 所有在 LAN 中的 DHCP Server 都能够收到 DHCP Clien 发送的 DHCP Discover 报文。

    2、LAN中所有的 DHCP Server 都会给 DHCP Client 回应一个 DHCP Offer 报文，并记录此次分配的 IP 地址。
        - DHCP Offer 报文中 'Your(Client) IP Address' 字段是 DHCP Server 能够提供 DHCP Client 使用的 IP 地址。
        - DHCP Server 会将自己的 IP 地址放在 'Option' 字段中，以便 DHCP Client 区分不同的 DHCP Server。
        - DHCP Server 发出 DHCP Offer 报文后, 记录已分配的 IP 地址，避免重复分配。

    3、DHCP Client 优先处理首个 Server 的 DHCP Offer 报文，并在 LAN 中广播一个 DHCP Request 报文。
        - 一个时刻 DHCP Client 只能处理其中一个 Server 回应的 DHCP Offer 报文，一般原则是 DHCP Client 处理最先收到的 DHCP Offer 报文。
        - 广播的 DHCP Request 报文被 LAN 中所有的 DHCP Server 接收。
        - DHCP　Request 报文中包含被 DHCP Client 选中的 DHCP Server IP地址和被分配的 IP 地址。

    4、DHCP Server 收到 DHCP Request 报文后，判断报文选项字段中的 Server IP地址是否与自己的 IP地址相同。如果不同，DHCP Server 不做任何处理，只清除相应 IP地址分配的记录；如果相同，DHCP Server 就会向 DHCP Client 响应一个 DHCP ACK 报文，并在选项字段中增加 IP地址的使用租期信息。

    