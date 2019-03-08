#include <stdio.h>
int Fibonacci(int n);
int main(void)
{
    int number = 0;
    int n;

    printf("Please enter a number (q to quit): ");
    while (scanf("%d", &number)) {
        printf("Fib(%d) = %d\n", number, Fibonacci(number));
        printf("Please enter a number again (q to quit and show the Fibonacci Sequence): ");
    }
    for (n=1; n <= number; n++)
        printf("%d ",Fibonacci(n));
    putchar('\n');

    return 0;
}

int Fibonacci(int n)
{
    if (n>2)
        return Fibonacci(n-1) + Fibonacci(n-2);
    else 
        return 1;
}
