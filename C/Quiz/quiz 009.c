#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("철수 : ");
    scanf("%d", &a);
    printf("영희 : ");
    scanf("%d", &b);
    printf("민수 : ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("1등은 철수 (%d점)\n", a);
    }
    else if (b > a && b > c) {
        printf("1등은 영희 (%d점)\n", b);
    }
    else {
        printf("1등은 민수 (%d점)\n", c);
    }
