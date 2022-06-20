/*  
 *  数学法分离
 *  求开方*/
#include <stdio.h>


__uint16_t BinSqrt(__uint32_t value)
{
    __uint16_t root;
    __uint16_t rem;
    int i;
    for(root = rem = i = 0; i < 16; ++i)
    {
        int if1;
        root <<= 1;
        rem = (rem << 2) | (value >> 30);
        value <<= 2;
        if1 = (root << 1) + 1;
        if(rem >= if1)
        {
            root |= 1;
            rem -= if1;
        }
    }
    return root;
}

int main (void){

  printf("%d", BinSqrt(25));

  return 0;
}
