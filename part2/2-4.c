#include <stdio.h>
void squeeze(char s[], char t[]);
int main(void)
{
    char name[100];
    char ch[20];

    printf("Enter your name:");
    scanf("%s", name);
    getchar();
    printf("What characters do you want delete:");
    scanf("%s", ch);
    printf("Before squeeze: %s\n", name);
    squeeze(name, ch);
    printf("After squeeze: %s\n", name);

    return 0;
}

void squeeze(char s[], char t[])
{
    int i, j, k;
    char c;

    for (k=0; t[k] != '\0'; k++)
    {
        c = t[k];
        for (i = j = 0; s[i] != '\0'; i++)
        {   
            if (s[i] != c)
                s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
