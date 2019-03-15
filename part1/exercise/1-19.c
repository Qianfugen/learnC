/*
Exercise 1-19. Write a function reverse(s) that reverses the character string s . Use it to
write a program that reverses its input a line at a time
*/

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void reverse(char s[]);

int main(void)
{
    int i, c;
    char line[MAXLINE];

    for (i=0;i < MAXLINE -1 && (c=getchar()) != EOF; i++)
        line[i] = c;
    reverse(line);      //倒序
    printf("%s\n", line);

    return 0;
}

void reverse(char s[])
{
    int i;
    int len = strlen(s);
    char tmp;

    for (i = 0; i < len/2; i++)
    {
        tmp = s[i];
        s[i] = s[len - 1 -i];
        s[len -1 - i] = tmp;
    }
}

