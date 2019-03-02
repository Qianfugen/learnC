#include <stdio.h>
int main(void)
{
    int num, div;

    printf("Please enter a number(enter q to quit):");
    while (scanf("%d",&num) == 1) {
        for (div=2;(div*div)<=num;div++)
        {   
            if (num % div == 0)
            {
                if (div * div != num)
                    printf("%d is divisible by %d and %d.\n", num, div, num/div);
                else 
                    printf("%d is divisible by %d.\n", num, div);
            }
        }
    }

    return 0;
}
