/*
Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b character
representation in the string s. In particular, itob(n,s,16) formats s as a hexadecimal integer in s.
*/

#include <stdio.h>
#include <string.h>

void itob(int n,char s[], unsigned b);
void reverse(char s[]);

int main(void)
{
    int n = 78;
    int b = 16;
    char s[100];

    itob(n,s,b);
    printf("%s\n", s);

    return 0;
}

void itob(int n, char s[], unsigned b)
{
    int i = 0;
    int sign, a;

    if ((sign=n) < 0)
        n = -n;
    do 
    {
        a = n % b;
        if (a >= 0 && a <= 9)
            s[i++] = a + '0';
        else if (a >= 10 && a <= 16)        //仅适用于2、8、10、16进制
            s[i++] = a + 'A' - 10;
    } while ((n /= b) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int i, j, c;

    for (i=0, j=strlen(s)-1; i<j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
