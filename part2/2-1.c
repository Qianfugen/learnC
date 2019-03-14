// 编写一个程序以确定分别由signed及unsigned限定的
// char、short、int与long类型变量的取值范围
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    printf("CONST SIGNED\n");
    printf("maximum of value of char: %d\n", CHAR_MAX);
    printf("minimum of value of char: %d\n", CHAR_MIN);
    printf("maximum of value of short: %d\n", SHRT_MAX);
    printf("minimum of value of short: %d\n", SHRT_MIN);
    printf("maximum of value of int: %d\n", INT_MAX);
    printf("minimum of value of int: %d\n", INT_MIN);
    printf("maximum of value of long: %ld\n", LONG_MAX);
    printf("minimum of value of long: %ld\n", LONG_MIN);

    printf("CONST UNSIGNED\n");
    printf("maximum of value of unsigned char: %d\n", UCHAR_MAX);
    printf("maximum of value of unsigned short: %d\n", USHRT_MAX);
    printf("maximum of value of unsigned int: %d\n", UINT_MAX);
    printf("maximum of value of unsigned long: %ld\n", ULONG_MAX);

    return 0;
}
