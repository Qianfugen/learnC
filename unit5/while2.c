/* while1.c -- 注意花括号的使用 */
#include <stdio.h>
int main(void)
{
    int n=0;

    while (n<5) {
        printf("n is %d\n",n);
        n++;
    }
    printf("That's all this program does.\n");

    return 0;
}