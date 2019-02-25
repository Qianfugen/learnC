#include <stdio.h>
int main(void)
{
    double sum=100;
    int n;

    for (n=0;sum>0;n++)
    {    
        sum *= 1.08;
        sum -= 10;
    }

    printf("%d years,monkey will become zero.\n",n);

    return 0;
}
