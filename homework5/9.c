#include <stdio.h>
double power(double n,double m);
int main(void)
{
    double l_fl,r_fl;
    int status;
    double value;

    printf("Please enter two floats number (q to quit):\n");
    status=scanf("%lf %lf",&l_fl,&r_fl);
    while (status) {
        value=power(l_fl,r_fl);
        printf("(%.3f-%.3f)/(%.3f*%.3f)=%.3f\n",l_fl,r_fl,l_fl,r_fl,value);
        printf("Please enter two floats number (q to quit):\n");
        status=scanf("%lf %lf",&l_fl,&r_fl);
    }
    printf("Quit!\n");
    
    return 0;
}

double power(double n,double m)
{
    double value;

    value=(n-m)/(n*m);

    return value;
}
