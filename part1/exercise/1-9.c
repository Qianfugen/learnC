/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a
single blank.
*/

#include <stdio.h>
#define IN 1
#define OUT 0

int main(void)
{
    int state, c;

    state = IN;
    while ((c=getchar()) != EOF) {
        if (c != ' ')
        {
            putchar(c);
            state = IN;
        }
        else if (c == ' ' && state == IN)
        {
            putchar(c);
            state = OUT;
        }
        else if (c == ' ' && state == OUT)
            continue;
    }

    return 0;
}
