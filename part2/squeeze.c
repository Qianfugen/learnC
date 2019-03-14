#include <stdio.h>
void squeeze(char s[], int c);
int main(void)
{
    char name[20];
    char ch;

    printf("Enter your name:");
    scanf("%s", name);
    getchar();
    printf("What character do you want delete:");
    scanf("%c", &ch);
    printf("Before squeeze: %s\n", name);
    squeeze(name, ch);
    printf("After squeeze: %s\n", name);

    return 0;
}

void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}


