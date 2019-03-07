// test.c -- 函数定义也相当于函数原型
#include <stdio.h>
int imax(int n, int m) {return n > m ? n : m;}
int main(void)
{
    int a = 3;
    int b = 5;

    printf("The maximum of %d and %d is %d.\n", a, b, imax(a, b));

    return 0;
}
