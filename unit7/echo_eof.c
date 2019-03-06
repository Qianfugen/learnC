/* echo_eof.c -- 重复输入，知道文件结尾 */
#include <stdio.h>
int main(void)
{
    int ch;

    while ((ch=getchar()) != EOF)
        putchar(ch);

    return 0;
}
