#include <stdio.h>
//打印short int,long int,long long,unsigned long long
int main(void)
{
    unsigned int un = 3000000000; //int为32位，short为16位的操作系统
    short int end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    printf("un %u\n", un);
    printf("end %hd\n", end);
    printf("big is %ld\n", big);
    printf("verybig is %lld and not is %u\n", verybig, verybig); //用u存放不下
    return 0;
}
/**
 * un 3000000000
end 200
big is 65537
verybig is 12345678908642 and not is 1942899938
*/