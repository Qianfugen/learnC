#include <stdio.h>
#define SIZE 8
int main(void)
{
    double array1[SIZE];
    double array2[SIZE];
    int i;
    double sum=0.0;

    printf("Enter %d floats numbets:\n",SIZE);
    for (i=0;i<SIZE;i++)
        scanf("%lf",&array1[i]);
    for (i=0;i<SIZE;i++)
    {
        sum += array1[i];
        array2[i]=sum;
    }

    printf("     array1   array2\n");
    for (i=0;i<SIZE;i++)
    {   
        printf("%10.2f",array1[i]);
        printf("%10.2f\n",array2[i]);
    }

     return 0;   
}
