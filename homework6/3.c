#include <stdio.h>
int main(void)
{
    int n_odd=0;
    int n_even=0;
    int sum_odd=0;
    int sum_even=0;
    int input=0;

    printf("Please enter integer to analyzed(0 to quit):");
    while (scanf("%d",&input) == 1)
        if (input == 0)
            break;
        else if (input % 2 == 0)
        {    
            n_even++;
            sum_even += input;
        }
        else
        {
            n_odd++;
            sum_odd += input;
        }
    printf("odd_average=%.2f, odd_count=%d, enev_average=%.2f, even_count=%d.\n",
          (float) sum_odd/n_odd, n_odd, (float) sum_even/n_even, n_even);

    return 0;
}
