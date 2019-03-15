/*
Exercise 1-12. Write a program that prints its input one word per line.
*/

#include <stdio.h>

int main(void)
{
    int c;
    int has_newline = 0;

    while ((c=getchar()) != EOF)
    {
        if (c == '\t' || c == ' ' || c == '\n')
        {
            if (has_newline == 0)
            {
                putchar('\n');
                has_newline = 1;
            }
        }
        else 
        {
            putchar(c);
            has_newline = 0;
        }
    }

    return 0;
}
