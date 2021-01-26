---
title: Git&&GitHub
date: 2021-01-26 17:46:12
tags: git
---

## Git 分支操作
### 删除

1. 删除远程

```bash
$ git push origin --delete "name"
```
2. 删除本地

```bash
$ git branch -D "name"
```
- 查看分支状态

```bash
$ git branch -v
```

### 更改push时本地默认提交到的分支


1. 创建一个本地分支名

```bash
$ git checkout --orphan="new branch"
```
2. 暂存本地文件

```bash
$ git add -A 
```
3. 提交文件

```bash
$ git commit -m ""
```

4. 删除分支

```bash
$ git branch -D "branch name"
```

5. 分支重命名

```bash
$ git branch -M "name"
```

6. 提交到远程仓库

```bash
$ git push -f origin "name"
```

