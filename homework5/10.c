#include <stdio.h>
int main(void)
{
    int min, max;
    int sum,i;

    printf("Enter lower and upper integer limits:");
    scanf("%d%d",&min,&max);
    while (min<max) {
        sum=0;
        for (i=min;i<=max;i++)
            sum += i*i;
        printf("The sums of the squares from %d to %d is %d\n",min*min,max*max,sum);
        printf("Enter next set of limits:");
        scanf("%d%d",&min,&max);
    }
    printf("Done\n");

    return 0;
}
