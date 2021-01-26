// 12-9-s_and_r.c
// 加入处理用户输入种子的模块
//
static unsigned long int next = 1;    //初始种子

int rand1(void){

/* 生成伪随机数  */
  next = next * 1103515245 + 12345;
  return (unsigned int) (next / 65536) % 32768;
}

void srand1 (unsigned int seed){ //将用户输入的种子给入到处理模块

  next = seed;
}
