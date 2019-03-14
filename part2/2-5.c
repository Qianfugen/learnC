#include <stdio.h>
int any(char s[], char t[]);
int main(void)
{
    char s[] = {'q','w','e','r','t'};
    char t[] = {'t','w'};
    int loc;
    
    loc = any(s,t);
    printf("The location is %d\n", loc);

    return 0;
}

int any(char s[], char t[])
{
    int i, j;
    i = j = 0;

    while (t[j] != '\0')
    {
        if (s[i] == t[j])
            return i;
        else 
        {
            i++;
            if (s[i] == '\0')
            {
                i = 0;
                j++;
                continue;
            }
        }
    }

    return -1;
}

