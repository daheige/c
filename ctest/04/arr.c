#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[10];
    int i;

    printf("排序之前的数组是:\n");
    for (int i = 0; i < 10; ++i) {
        a[i] = rand() % 10 + 1; // rand()生成1到100
        printf("%4d\n", a[i]);
    }

    int j, t;
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("-----------\n");
    for (i = 0; i < 10; i++) {
        printf("%4d\n", a[i]);
    }
}
