---
title: 为hexo添加view统计
comments: false
date: 2021-02-13 17:14:55
tags:
- hexo文章阅读统计
categories: 
- hexo
---

## 阅读统计

1. 
{% blockquote 官网 https://console.leancloud.cn leancloud %}
在leancloud 官网注册账号
{% endblockquote %}

2. 创建一个新的应用

名称可以随意输入,进入应用在设置中的存储选项下选择**结构化数据**
创建一个Counter的表格作为计数用

3. 将id 和key填入` _config.yml`
id 和 key 在leancloud设置中可以找到

- 完成后将博文重新编译可以先在本地查看效果
{% note danger %}
期间遇到一个问题:
Counter not initialized! More info at console err msg
{% endnote %}
提示计数器没有初始化，在网上查找到一个方法
{% code 将security设为false, 摘取自 lang:yaml https://blog.csdn.net/w573719227/article/details/100704952 轩辕御龙 %}
leancloud_visitors:
  enable: true
  app_id: # 填入leancloud<app_id>
  app_key: # <app_key>
  # Dependencies: https://github.com/theme-next/hexo-leancloud-counter-security
  # If you don't care about security in leancloud counter and just want to use it directly
  # (without hexo-leancloud-counter-security plugin), set `security` to `false`.
  # 解决办法是用npm 下载hexo-leancloud-counter-security 模块
  # 然后将security 设为false
  security: false #如果要为true
  betterPerformance: false
{% endcode %}
-  
{% note danger %}
但是如果你一定要启用security的话,hexo g遇到以下报错:
Cannot read property ‘enable_sync’ of undefined
{% endnote %}
{% code 参照以下建议在`_config.yml`中添加 lang:yaml 摘取自 https://blog.csdn.net/qq_33840251/article/details/103899972 清欢ysy %}
leancloud_counter_security:
  enable_sync: true
  app_id: # leancloud id
  app_key: # leancloud key
  username: # 用户名/邮箱
  password: # 密码
{% endcode %}
