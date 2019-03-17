/*
Exercise 2-1. Write a program to determine the ranges of char, short, int, and long variables, both
signed and unsigned, by printing appropriate values from standard headers and by direct computation.
Harder if you compute them: determine the ranges of the various floating-point types.
*/

#include <stdio.h>
#include <limits.h>
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
    printf("maximum of value of unsigned char: %u\n", UCHAR_MAX);
    printf("maximum of value of unsigned short: %hu\n", USHRT_MAX);
    printf("maximum of value of unsigned int: %u\n", UINT_MAX);
    printf("maximum of value of unsigned long: %lu\n", ULONG_MAX);

    return 0;
}
