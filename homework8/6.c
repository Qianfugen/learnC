#include <stdio.h>
void rank_three_double(double *, double *, double *);
int main(void)
{
    double number1 ,number2, number3;

    printf("Enter the first number: ");
    scanf("%lf", &number1);
    printf("Enter the second number: ");
    scanf("%lf", &number2);
    printf("Enter the third number: ");
    scanf("%lf", &number3);

    printf("Before rank, the three double number are: %.2f, %.2f and %.2f\n", number1, number2, number3);
    rank_three_double(&number1, &number2, &number3);
    printf("After rank, the three double number are: %.2f, %.2f and %.2f\n", number1, number2, number3);

    return 0;
}

void rank_three_double(double * a, double * b, double * c)
{
    double temp;

    temp = *a;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}
