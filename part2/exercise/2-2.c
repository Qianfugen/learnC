/*
Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.
*/

#include <stdio.h>
int main(void)
{
    int i = 0;
    int c;
    int lim = 100;
    char s[lim];

   while ((c=getchar()) != EOF) 
   {
       if (i < lim-1) 
       {
        if (c != '\n')
            s[i] = c;
        else 
            break;
       }
       else 
           break;
   }
    
    return 0;
}
