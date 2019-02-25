/* squares.c -- 计算1～20的平方 */
#include <stdio.h>
int main(void)
{
    int num=5;

    while (num < 21)
    {
        printf("%10d %10d\n",num,num*num++);
    }

    return 0;
}
