/*
Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1
into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be
prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken
literally.
*/

#include <stdio.h>

void expand(char s1[], char s2[]);

int main(void)
{
    int i;
    char s1[20] = "-a-zvs0-9--";
    char s2[100];

    expand(s1,s2);
    for (i=0;s2[i] != '\0';i++)
        printf("%c", s2[i]);

    return 0;
}

void expand(char s1[], char s2[])
{
    int i,j,k;

    for (i=0,j=0;s1[i] != '\0';i++)
    {
        if (i==0)
            s2[j++]='-';
        else if (s1[i] == '-')
        {
            if (s1[i-1] == 'a' && s1[i+1] == 'z')
                for (k=0;k<26;k++)
                    s2[j++]='a'+k;
            if (s1[i-1] == '0' && s1[i+1] == '9')
                for (k=0;k<10;k++)
                    s2[j++]='0'+k;
        }
        else if (s1[i+1] != '-')
            s2[j++] = s1[i];
    }
    s2[j]='\0';
}
