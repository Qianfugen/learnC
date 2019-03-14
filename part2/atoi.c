#include <stdio.h>
#define STRING "123"
int atoi(char s[]);
int lower(int c);
int main(void)
{
    char ch = 'S';
    printf("String: %s\n", STRING);
    printf("After translation: %d\n", atoi(STRING));
    printf("Char: %c\n", ch);
    printf("After translation: %c\n", lower(ch));

    return 0;
}

int atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] > '0' && s[i] < '9'; i++)
        n = 10 * n + (s[i] - '0');

    return n;
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else 
        return c;
}
