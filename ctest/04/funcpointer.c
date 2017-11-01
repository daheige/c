#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int getRnd(void)
{
    printf("%d\n", rand());
    return rand();
}
//size_t 是一种数据类型，近似于无符号整型，但容量范围一般大于 int 和 unsigned。
// 这里使用 size_t 是为了保证 arraysize
void pop_arr(int *arr, size_t arrSize, int (*fn)(void))
{
    for (size_t i = 0; i < arrSize; i++)
    {
        arr[i] = fn();
    }
}

int main(void)
{
    int (*p)(int, int) = &max; //变量p是函数指针
    int num1, num2, num3, num4;
    printf("请输入三个值:(逗号隔开)");
    scanf("%d,%d,%d", &num1, &num2, &num3);

    num4 = p(p(num1, num2), num3);
    printf("三个数字中最大的是%d\n", num4);

    //函数指针作为某个函数的参数使用
    //函数指针变量可以作为某个函数的参数来使用的，回调函数就是一个通过函数指针调用的函数
    int myarr[10];
    pop_arr(myarr, 10, getRnd);

    for (int i = 0; i < 10; i++)
    {
        printf("第%d个元素是%d\n", i, myarr[i]);
    }
}