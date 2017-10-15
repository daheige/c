#include <stdio.h>
int main(void){
    float weight,value;
    printf("please input your weight:");
    scanf("%f",&weight);
    printf("please input your vaule:");
    scanf("%f",&value);
    value = 12.032 * weight * value;
    printf("this value is %.2f",value);
    return 0;
}