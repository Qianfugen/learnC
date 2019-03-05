#include <stdio.h>
int main(void)
{
    char ch;
    int count = 0;

    printf("Please enter a text(# to quit):");
    while ((ch = getchar()) != '#') {
        if (ch == '.' )
        {
            putchar('!');
            count++;
        }
        else if (ch == '!')
        {   
            putchar('!');
            putchar('!');
            count++;
        }
        else 
            putchar(ch);
    }
    printf("exchange:%d %s.\n",count,(count == 1 || count == 0)? "time":"times");

    return 0;
}
