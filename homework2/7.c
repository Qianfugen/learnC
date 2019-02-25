/* 英寸换算为厘米 */
#include <stdio.h>
int main(void)
{
    float height;

    printf("Please enter your height(inch): ");
    scanf("%f",&height);
    printf("Your height is %.2f cm.\n",2.54*height);

    return 0;
}
