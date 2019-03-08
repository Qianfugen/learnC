#include <stdio.h>
void larger_of(double *, double *);
int main(void)
{
    double number1 = 0.0;
    double number2 = 0.0;

    printf("Enter the first number:");
    scanf("%lf", &number1);
    printf("Enter the second number:");
    scanf("%lf", &number2);

    printf("Before larger_of, the two numbers are %.2f and %.2f\n", number1, number2);
    larger_of(&number1, &number2);
    printf("After larger_of, the two numbers are %.2f and %.2f\n", number1, number2);

    return 0;
}

void larger_of(double * n, double * m)
{
    if (*n > *m)
        *m = *n;
    else 
        *n = *m;
}
