#include <stdio.h>
void str_cat(char s[], char t[]);
int main(void)
{
    char sentence1[100];
    char sectence2[50];

    printf("Enter sentence1:");
    scanf("%s", sentence1);
    getchar();
    printf("Enter sentence2:");
    scanf("%s", sectence2);
    getchar();
    str_cat(sentence1,sectence2);
    printf("sentence1 + sectence2 = \n");
    printf("%s\n", sentence1);

    return 0;
}

void str_cat(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0')    /* 判断是否为字符串的尾部 */
        i++;
    while ((s[i++] = t[j++]) != '\0')     /* 拷贝t */
        ;
}

