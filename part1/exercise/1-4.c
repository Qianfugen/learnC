/*
Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include <stdio.h>
int main(void)
{
    float fahr, celsius, lower, upper, step;

    lower = -17.8;
    upper = 148.7;
    step = 11.1;

    celsius = lower;
    printf("%-8s %-8s\n", "celsius", "fahr");
    while (celsius <= upper) {
        fahr = ((9.0 / 5.0) * celsius + 32.0);
        printf("%3.1f\t%6.2f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
