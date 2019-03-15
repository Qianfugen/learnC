/*
Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>
int main(void)
{
    int c;
    
    printf("input some characters (getchar() != EOF)\n");
    printf("and then input ctrl + d (getchar() == EOF)\n");
    while ( c = getchar() != EOF) 
        printf("getchar() != EOF = %d\n", c);    
    printf("getchar() == EOF = %d\n", c);

    return 0;
}
