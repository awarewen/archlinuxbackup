// call_fun 这里是一个头文件
// - 用来声明其他源文件中的函数
// - 使用extern 来声明一个具有外部链接文件作用域的变量或函数
//

//source1.c
//这里调用了三个在source1中的变量或函数
extern char strs[];
// 调用一个私有/static声明的函数或变量是无法通过编译的
//extern char strs2[];
extern void fun_in_source1(void);

//source2.c
//
extern void fun_in_source2 (void);




