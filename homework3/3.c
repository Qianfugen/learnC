/* 读取小数，分别以小数点计数法和指数计数法打印 */
#include <stdio.h>
int main(void)
{
    float i;

    printf("Please enter a float:");
    scanf("%f",&i);
    printf("a. The input is %.1f or %8.1e.\n",i,i);
    printf("b. The input is %+.3f or %.3E.\n",i,i);
    
    return 0;
}
