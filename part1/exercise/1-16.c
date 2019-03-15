/*
Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
the length of arbitrary long input lines, and as much as possible of the text.
*/

#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int lim);
void copy(char to[], char from[]);

int main(void)
{
    int len = 0;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
        printf("%s", line);

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim -1 && (c=getchar()) != EOF && c != '\n';i++)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = '\n';
        i++;
    }
    s[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}
