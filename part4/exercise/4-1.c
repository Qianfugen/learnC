/*
Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost occurrence of
t in s, or -1 if there is none.
*/

#include <stdio.h>
#include <string.h>

int strrindex(s[],t[])
{
    int i, j;
    int slne = strlen(s);
    int tlen = strlen(t);
    int count = 0;

    for (i=slen-1,j=tlen-1;i>=0 && j>=0;)
    {
        while (s[i] == t[j] && (i>=0 && j >=0))
        {
            i--;
            j--;
            count++;
        }
        if (count == tlen)
        {
            return i+1;
        }
        i--;
        j = tlen - 1;
        count = 0;
    }
    return -1;
}
