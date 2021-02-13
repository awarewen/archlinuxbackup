---
title: HEXO-TagPlugins-快速插入特定内容
date: 2021-02-13 00:11:04
tags:
- hexo
---

## 引用块
> 在文中插入引言,可以包含作者，来源，标题等信息
``` 引用语法
{% blockquote [author[, source]] [link] [source_link_title]%}
//start
{% endblockquote %} //end
```

{% blockquote 名称, 来源 https://baidu.com 百度 %}
this is a quote
{% endblockquote %}

## 代码块
> 在文章中插入代码
``` 代码块语法
{% codeblock [title] [language] [url] [link_text] [additional options] %}
{% endcodeblock %}
```
- additional options可选参数
```
line_number 
```


{% codeblock 一段c代码 lang:c  %}
int main (void) {

  printf("hello word!");
  return 0;
}
{% endcodeblock %}

