#include <stdio.h>
int main(void)
{
    int min,max,i;

    printf("Please enter the min and max integer:");
    scanf("%d %d",&min,&max);
    printf("integer    squared       cube\n");
    for (i=min;i<=max;i++)
    {
        printf("%5d %10d %10d",i,i*i,i*i*i);
        printf("\n");
    }

    return 0;
}
