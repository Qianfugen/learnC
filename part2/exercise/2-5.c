/*
Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1 where any
character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library
function strpbrk does the same job but returns a pointer to the location.)
*/

#include <stdio.h>
int any(char s[], char t[]);
int main(void)
{
    char s[] = {'q','w','e','r','t','\0'};
    char t[] = {'a','e','w','\0'};
    int loc;
    
    loc = any(s,t);
    printf("The location is %d\n", loc);

    return 0;
}

int any(char s[], char t[])
{
    int i, j;

    for (i = j = 0; t[j] != '\0'; i++)
    {
        if (s[i] == t[j])
            return i;
        else if (s[i] == '\0')
        {
            j++;
            i = -1;
        }
    }

    return -1;
}

