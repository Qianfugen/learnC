/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main(void)
{
    int c;
    int blank, tabs, lines;
    blank = tabs = lines = 0;

    while ((c=getchar()) != EOF)
    {
        switch(c)
        {
            case ' ': blank++;
                      break;
            case '\n': lines++;
                       break;
            case '\t': tabs++;
                       break;
            default: break;
        }
    }
    printf("blank = %d, tabs = %d, lines = %d\n",
            blank, tabs, lines);

    return 0;
}
