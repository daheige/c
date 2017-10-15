#include <stdio.h>
int main(void)
{
    char x = 'x';
    _Bool a = 1;                            //c语言中用1表示true,0表示false
    printf("x char is %c int is %d", x, x); //转换说明%c打印字符 x char is x int is 120
    printf("a is boolean type,this value is %d", a);
    return 0;
}
