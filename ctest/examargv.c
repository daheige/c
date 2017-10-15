#include <stdio.h>
//argc表示传递给main函数参数个数，argv表示参数列表
int main(int argc,char *argv[]){
    unsigned int i = 0;
    printf("参数个数为%d\n",argc);
    for(i = 0;i<argc;i++){
        printf("%s\n",argv[i]);
    }
    int num1,num2;
    printf("请输入两个数字(空格隔开):");
    scanf("%d %d",&num1,&num2);
    // scanf("%d",&num2);
    printf("nu1 + num2 = %d",num1+num2);
    return 0;
}