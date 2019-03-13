// 将一个输入到输出的程序
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
main()
{
    bool flag = true;
    int c;

    while ((c=getchar()) != EOF) {
        if (!isspace(c))
        {
            putchar(c);
            flag = true;
        }
        else if (c == ' ' && flag == true)
        {
            putchar(c);
            flag = false;
        }
        else if (c == ' ' && flag == false)
            continue;
    }
}
