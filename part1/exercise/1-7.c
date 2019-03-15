/*
Exercise 1-7. Write a program to print the value of EOF.
*/

#include <stdio.h>
int main(void)
{
    int c;

    printf("Enter ctrl + d :\n");
    while ((c=getchar()) != EOF)
        putchar(c);
    printf("EOF == %d\n", c);
}
