/*
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
*/

#include <stdio.h>
#include <ctype.h>
#define MAXHIST 20
#define MAXCHAR 128

int main(void)
{
    int c;
    int i;
    int ch[MAXCHAR] = {[0] = 0};
    int len = 0;

    while ((c=getchar()) != EOF)        // 将ASCII码放入数组并累加其出现次数
        if (c < MAXCHAR)
            ch[c]++;

    for (i=0; i < MAXCHAR; i++)         // 控制每个ASCII码的最高出现次数
        if (ch[i] > MAXHIST)
            ch[i] = MAXHIST;

    /* 输出水平方向的直方图 */
    i = 0;
    printf("char  ASCII     counts\n");
    do 
    {
        len = ch[i];
        if (len < 1)
            continue;
        if (isprint(i))
            printf("%c\t%d\t", i, len);
        else 
            printf(" \t%d\t", len);
        while (ch[i]-- > 0)
            printf("*");
        putchar('\n');
    } while (++i < MAXCHAR);
    
    return 0;
}

