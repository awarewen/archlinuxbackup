# 一些源码记录
> `open` 打开文件
```c
FILE *fp;
fp = open ("/home/hello.text",O_CREAT | O_TRUNC | O_ROWR, 0666);

if (fp<0){
  perror("open:");
  exit(1);
}else{
  printf("open file:hello.txt %d\n", fp);
}
```

> `strlen`可以计算字符指针指向的字符串的长度
```c
char *str = "Hello word!";
int len = strlen (str);
``e
