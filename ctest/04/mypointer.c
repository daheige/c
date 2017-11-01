#include <stdio.h>

int main(void)
{
    int name = 12;
    int *p;                                 //指针变量声明用*,p指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址
    printf("name的内存地址是 %p\n", &name); //&取地址操作符
    p = &name;                              //p变量的值是一个地址
    printf("在p指针变量中存放的地址是 %p\n", p);
    //利用指针来访问name的值
    printf(" *p 的值是%d\n", *p); //使用指针访问值

    //改变指针变量的内存地址，就是直接改变name的值
    //通过*p来取值
    *p = *p + 10;
    printf("name 改变后的值是%d\n", name);

    //定义一个空指针NULL
    int *emptyPointer = NULL;
    printf("NULL 空指针的值是 %p\n", emptyPointer);
    return 0;
}