#include <stdio.h>
int main(void)
{
    int count = 0;
    char ch;

    while ((ch=getchar()) != '#')
        if (ch == 'e' || ch == 'i')
            count ++;
    printf("\"ei\" appears %d %s.\n", count, (count ==0 || count == 1) ? "time":"times");

    return 0;
}
