/*
Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that
matches any character in the string s2.
*/

#include <stdio.h>
void squeeze(char s[], char t[]);
int main(void)
{
    char name[100] = {'q','i','a','n','f','g','\n','\0'};
    char ch[20] = {'a','i'};

    printf("Before squeeze: %s\n", name);
    squeeze(name, ch);  // 匹配并删除字符
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
