#include <stdio.h>
int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != EOF) {
        count++;
        if (ch < ' ')
        {
            if (ch = '\n')
            {
                putchar('\\');
                putchar('n');
                printf(": %-4d", ch);
            }
            else if (ch = '\t')
            {
                putchar('\\');
                putchar('t');
                printf(": %-4d", ch);
            }
            else 
            {
                putchar('^');
                putchar(ch+64);
                printf(": %-4d", ch);
            }
        }  
        else
        {
            putchar(ch);
            printf(": %-4d", ch);
        }
        if (count % 10 == 0)
            printf("\n");
    }
    printf("\n");

    return 0;
}
