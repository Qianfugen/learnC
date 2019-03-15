/*
Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like
unmatched parenntheses, brackets and braces. Don't forget about quotes, both single and
double, escape sequences, and comments. (This program is hard if you do it in full
generality.)
*/

// Parentheses 圆括号;Square brackets 方括号; brace braces 花括号

#include <stdio.h>
int main(void)
{
    int c;
    int paren, brack, brace;
    paren = brack = brace = 0;
    
    while ((c=getchar()) != EOF)
    {
        switch(c)
        {
            case '(': paren++;
                      break;
            case ')': paren--;
                      break;
            case '[': brack++;
                      break;
            case ']': brack--;
                      break;
            case '{': brace++;
                      break;
            case '}': brace--;
                      break;
        }
    }
    
    if (paren != 0)
        printf("() is wrong! Please check again!\n");
    if (brack != 0)
        printf("[] is wrong! Please check again!\n");
    if (brace != 0)
        printf("{} is wrong! Please check again!\n");
    if (paren == 0 && brack == 0 && brace == 0)
        printf("No wrong! Very good!\n");

    return 0;
}
