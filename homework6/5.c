#include <stdio.h>
int main(void)
{
    char ch;
    int count = 0;

    printf("Please enter a text(# to quit):");
    while ((ch=getchar()) != '#')
        switch(ch)
        {
            case '.':putchar('!');
                     count++;
                     break;
            case '!':putchar('!');
                     putchar('!');
                     count++;
                     break;
            default:putchar(ch);
        }
    printf("exchanged:%d %s\n", count, (count == 1 || count == 0) ? "time":"times");

    return 0;
}
