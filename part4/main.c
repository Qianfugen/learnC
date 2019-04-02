#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim);
int strindex(char s[],char t[]);

char pattern[] = "ould";

int main(void)
{
    char line[MAXLINE];
    int found = 0;

    while (get_line(line,MAXLINE) > 0)
    {
        if (strindex(line,pattern) > 0)
        {
            printf("%s", line);
            found++;
        }
    }

    return found;
}

