/* no_data.c -- 未初始化数组 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int no_data[SIZE] = {1492, 1066, 1, 1, 0};
    int no_data2[SIZE] = {1492, 1066};
    int i;

    printf("%2s%14s\n", "i", "no_data[i]");
    for (i=0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);
    for (i=0; i<40; i++)
        printf("*");
    putchar('\n');
    printf("%2s%14s\n", "i", "no_data2[i]");
    for (i=0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data2[i]);

    return 0;
}
