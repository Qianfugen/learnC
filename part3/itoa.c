#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main(void)
{
    int n = -289;
    char s[100];

    itoa(n,s);
    printf("%s\n", s);
    
    return 0;
}

/* itoa函数：将数字n转换为字符串并保存到s中 */
void itoa(int n, char s[])
{
    int i, sign;

    if ((sign=n) < 0)
        n = -n;
    i = 0;
    do 
    {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}


/* reverse函数：倒置字符串s中各个字符的位置 */
void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j;i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
