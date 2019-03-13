// 编写一个打印EOF值的程序
#include <stdio.h>
main()
{
    int c;

    while ((c=getchar()) != EOF)
        putchar(c);
    printf("%d\n", c);
}
