---
title: git add -A出现嵌入式仓库错误
date: 2021-01-26 21:01:29
tags: git
---
## 问题描述

github 仓库已经清空，现在重新将本地文件上传备份，但是在add -A 操作时提示正在加入嵌入式仓库
git 给我推荐的两个操作分别是:

1. 子模块添加
```bash
$ git submodule add <url> "name"
```
2. 在暂存去将这个嵌入的仓库删除
```bash
$ git rm --cached "name"
```

## 目前已经解决

原因是在提示的文件夹下面有旧仓库的.git文件夹，删除后即可重新添加到新仓库了
