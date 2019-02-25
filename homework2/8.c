/* 单位换算 */
#include <stdio.h>
int main(void)
{
    float cups;

    printf("Please enter the cups: ");
    scanf("%f",&cups);
    printf("%.2f cups is equal to %.2f pints.\n",cups,cups/2);
    printf("%.2f cups is equal to %.2f oz.\n",cups,8*cups);
    printf("%.2f cups is equal to %.2f soups.\n",cups,16*cups);
    printf("%.2f cups is equal to %.2f teas.\n",cups,48*cups);

    return 0;
}

/* 品脱     pint
   杯       cup
   盎司     oz
   汤勺     soup
   茶勺     tea
*/
