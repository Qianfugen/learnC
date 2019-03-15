/*
Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
*/

#include <stdio.h>
float temp(int fahr);
int main(void)
{
    int fahr;

    for (fahr = 0; fahr < 300; fahr += 20)
        printf("%d\t%.1f\n", fahr, temp(fahr));

    return 0;
}

float temp(int fahr)
{
    float celsius = 0.0;

    celsius = (5.0/9.0) * (fahr-32);

    return celsius;
}
