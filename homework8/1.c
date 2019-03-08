#include <stdio.h>
double min(double, double);
int main(void)
{
    double n, m;

    printf("Enter two numbers(q to quit:)");
    while (scanf("%lf %lf", &n, &m) == 2) {
        printf("The smaller number is %.2f\n", min(n,m));
        printf("Enter two numbers(q to quit:)");
    }
    printf("Done.\n");

    return 0;
}

double min(double n, double m)
{
    if (n < m)
        return n;
    else
        return m;
}
