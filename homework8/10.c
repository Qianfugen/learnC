/* binary.c -- 以n进制形式打印整数 */
#include <stdio.h>
void to_base_n(int, int);
int main(void)
{
    unsigned long base;
    unsigned int n;

    printf("Enter a base number and  decimal number");
    printf("(q to quit,decimal number between 2 and 10):\n");
    while (scanf("%lu %d", &base, &n) == 2) {
        if (n > 10 || n < 2)
        {
            printf("Please enter decimal between 2 and 10:\n");
            break;
        }
        printf("%d Equivalent:", n);
        to_base_n(base, n);
        putchar('\n');
        printf("Enter a base number and  decimal number");
        printf("(q to quit,decimal number between 2 and 10):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_base_n(int base, int n)
{
    int r;

    r = base % n;
    if (base >= n)
        to_base_n(base/n, n);
    printf("%d", r);
    
    return;
}
