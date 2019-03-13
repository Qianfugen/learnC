#include <stdio.h>
int power(int n, int m);
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));

    return 0;
}

/* power函数：求底数的n次幂;其中n >= 0 */
int power(int base, int n)
{
    int i,p;
    
    p = 1;
    for (i = 0; i < n; i++)
        p *= base;

    return p;
}
