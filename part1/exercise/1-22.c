#include <stdio.h>
#define LINELONG 20
int main(void)
{
    int c, d;
    d = 0;

    while ((c=getchar()) != EOF)
    {
        d++;
        if (d % LINELONG == 0)
        {
            putchar(c);
            putchar('\n');
        }
        else 
            putchar(c);
    }

    return 0;
}
