#include <stdio.h>
double harmonic_ave(double, double);
int main(void)
{
    double a, b;

    printf("Please enter two numbers (q to quit): ");
    while (scanf("%lf %lf", &a, &b) == 2){
        printf("The harmonic average of %.2f and %.2f is %.2f\n", a, b, harmonic_ave(a, b));
        printf("Please enter two numbers (q to quit): ");
    }
    printf("Done!\n");

    return 0;
}

double harmonic_ave(double a, double b)
{
    double har;

    har = 2*a*b/(a+b);

    return har;
}
