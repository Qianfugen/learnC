#include <stdio.h>
#include <string.h>

int htoi(char s[]);
int main(void)
{
    char hex[10];

    printf("Enter the value:");
    scanf("%s", hex);
    printf("Befor translation: %s\n", hex);
    printf("After translation: %d\n", htoi(hex));

    return 0;
}

int htoi(char s[])
{
    int i = 0;
    int len = 0;
    int sum = 0;
    
    while (s[i] != '\0')
    {
        len++;
        i++;
    }
    
    for (i = 0; i < len; i++)
    {
        if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        {
            s[0] = 0;
            s[1] = 0;
            continue;
        }
        if (s[i] >= '0' && s[i] <= '9')
            s[i] -= '0';
        if (s[i] >= 'A' && s[i] <= 'F')
            s[i] -= 55;
        if (s[i] >= 'a' && s[i] <= 'f')
            s[i] -= 87;
        sum = sum*16 + s[i];
    }

    return sum;
}
