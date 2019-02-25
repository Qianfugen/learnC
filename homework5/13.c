#include <stdio.h>
#include <math.h>
#define SIZE 8
int power(int n,int p);
int main(void)
{
    int i;
    int list[SIZE];

    for (i=0;i<SIZE;i++)
        list[i]=power(2,i);

    printf("The value of list:\n");

    i=0;
    do
    {
        printf("list[%d]=%d\n",i,list[i]);
        i++;
   } while (i < SIZE);

    return 0;
}

int power(int n, int p)
{
    int i;
    int pow=1;

    for (i=0;i<p;i++)
        pow *= n;

    return pow;
}
