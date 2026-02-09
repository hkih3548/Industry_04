#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
    int i = 0;
    int dan = 5;
    int u = 7;

    while (i < 9) {
        i++;
        printf("%d * %d = %d\n",dan, i, dan * i);
    }
    printf("\n\n");

    for (int k = 1; k < 10; k++) {
        printf("%d * %d = %d\n", u, k, u * k);
    }

    return 0;
}
