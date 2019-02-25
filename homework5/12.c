#include <stdio.h>
double power(double n,int p);
int main(void)
{
    long long limit, count;
    double sum,xpow;

    printf("Please enter limits:");
    scanf("%lld",&limit);
    for (sum=0,count=1;count<=limit;count++)
        sum += 1.0/count;
    printf("The sum of 1.0+1.0/2.0+1.0/3.0+...=%f\n",sum);
    printf("Please enter limits:");
    scanf("%lld",&limit);
    for (sum=0,count=1;count<=limit;count++)
    {
        xpow=count*power(-1,count);
        sum -= 1.0/xpow;
    }
    printf("The sum of 1.0-1.0/2.0+1.0/3.0-1.0/4.0...=%f\n",sum);

    return 0;
}

double power(double n,int p)
{
    double pow=1;
    int i;

    for (i=1;i<=p;i++)
        pow *= n;

    return pow;
}
