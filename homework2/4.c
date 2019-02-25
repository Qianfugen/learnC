/* 读取一个浮点数，打印成小数点形式、指数形式、p计数法 */
#include <stdio.h>
int main(void)
{
    float i;

    printf("Enter a floating-point value: ");
    scanf("%f",&i);
    printf("fixed-point notation: %f",i);
    printf("\nexponential notation: %e",i);
    printf("\np notation: %a\n",i);

    return 0;
}
