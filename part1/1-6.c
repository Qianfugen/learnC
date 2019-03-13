//验证表达式getchar() != EOF 的值是0还是1
#include <stdio.h>
main()
{
    int c;

    while ( c = getchar() != EOF) 
        printf("getchar() != EOF = %d\n", c);    
    printf("getchar() == EOF = %d\n", c);
}
