#include <stdio.h>
double power(double, int);
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair os numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip --bye!\n");

    
}

double power(double n, int p)
{
    double m = 0.0;

    if (p > 0)
        m = n * power(n, p-1);
    else if (p<0)
        m = power(n,p+1)/n;
    else 
        return 1;
}
