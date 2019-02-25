#include <stdio.h>
void cube(float fl);
int main(void)
{
    float fl;

    printf("Please enter a float number:");
    scanf("%f",&fl);
    cube(fl);

    return 0;
}

void cube(float fl)
{
    printf("Haha!The cube_number is %2.2f\n",fl*fl*fl);
}
