/* 打印整数 */
#include <stdio.h>
int main(void)
{
    int i,j;

    printf("Please enter an integer:\n");
    scanf("%d",&i);
    j=i+11;
    while (i++ < j)
        printf("%d\n",i-1);

    return 0;
}
