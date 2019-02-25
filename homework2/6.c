/* 根据水的夸脱数计算水分子数量 */
#include <stdio.h>
int main(void)
{
    float mass_mol=3.0e-23;
    float mass_qt=950.0;
    float quarts;
    long double molecules;

    printf("Please enter the weight of water(quart): ");
    scanf("%f",&quarts);
    molecules=quarts*mass_qt/(mass_mol);
    printf("Haha,the count of water is %Le.\n",molecules);

    return 0;

}
