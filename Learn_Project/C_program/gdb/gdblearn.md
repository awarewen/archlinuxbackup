# gdb调试工具学习

* 用来对c语言程序进行`debug`的工具  

## 1.进行gdb调试的首要条件
j 在使用编译工具时，需要在gdb调试的源码文件中输入调试信息
> gcc -g test.c -o test  
> gdb test 进入调试  

## 命令
> `-g` ：进入调试界面不打印版本信息  
> `list`: 查看源码信息，默认一次显示10行,回车重复上次命令  
> > `list + 行号`打印指定行号，
> > `list main`加函数名打印指定函数所在的源码
> `run` : 运行程序

- 断点相关
> `break`:断点  
> > `break 2`在第二行设置一个断点  
> `info breakpoints`: 显示断点信息  
> > `info breakpoints`

- info breakpoints 显示的信息
> `Num`: 断点编号  
> `Disp`: 断点执行一次后是否有效, keep:有效dis:无效  
> `Enb`: 当前断点是否有效, y/n  
> `Address`: 内存地址   
> `What`: 位置    

- 单步执行    
> `continue`:继续执行程序直到下一个断点或结束  
> `step`:单步执行程序遇到函数进入函数  
> `next`:单步执行程序但是遇到函数跳过函数,不进入函数  

- 打印查看 
> `print`: 打印表达式的值
> > `print a`查看变量a的值  
> > `print`
> > `print num(1,3)`:可以调用函数
> `display 表达式`: 设置每次单次命名后自动打印设置的表达式的值
> `whatis`:查看变量/函数  
> > `whatis a`    
> `watch 表达式`:设置一个监视点，一旦监视点的值改变，则强行终止程序  
> `info function`: 查询函数
> `info locals`:显示当前堆栈所有的变量  

- 查看运行信息  
> `where/bt`:查看当前运行的堆栈列表
> > `bt backtrance`:显示当前调用的堆栈  
> > `up/down`:查改变堆栈显示的深度  
> `set args 参数`:指定运行时的参数  
> > `show args`:查看设置的参数  
> `info program`: 查看程序是否在运行，进程号，暂停原因  

- 分割窗口
> `layout`: 分割窗口 一边调试一边测试
> `layout src`: 显示源代码窗口
> `layout asm`: 显示反汇编窗口  
> `ctrl + l`: 刷新窗口  

- 其他
> `until` : 若断点打在循环，可以使用until自动运行完循环直到退出循环
> `until + 行号`：运行至某行
> `finish`: 运行程序直到当前函数
> `call`: 调用程序中可见的函数，并传递参数
> > `call num(1,2)`
> `quit`: 退出gdb

# cgdb 调试工具  


