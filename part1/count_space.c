#include <stdio.h>
/* 一个统计空格、制表符与换行符的程序 */
main()
{
    int space = 0;
    int table = 0;
    int line = 0;
    int c;

    while ((c=getchar()) != EOF) {
        if (c == ' ')
            ++space;
        else if (c == '\t')
            ++table;
        else if (c == '\n')
            ++line;
    }
    printf("space = %d, table = %d, line = %d\n",
            space, table, line);
}
