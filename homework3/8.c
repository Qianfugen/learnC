#include <stdio.h>
#define L_PER_C 3.785
#define KM_PER_MILE 1.609
int main(void)
{
    double mile,culun;

    printf("Please enter miles:");
    scanf("%lf",&mile);
    printf("Please enter the comsume of oil:");
    scanf("%lf",&culun);
    printf("In C/miles:%.1f\n",culun/mile);
    printf("In L/km: %.1f\n",(culun*L_PER_C)/(mile*KM_PER_MILE));
    
    return 0;
}
