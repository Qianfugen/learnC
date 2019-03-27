/*
Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at the price of more
tests outside.) Write a version with only one test inside the loop and measure the difference in run-time.
*/

#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(void)
{
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    int x1 = 7;
    int x2 = 17;

    printf("binsearch %d in v[10] return %d\n", x1, binsearch(x1,v,10));
    printf("binsearch %d in v[10] return %d\n", x2, binsearch(x2,v,10));

    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low < high && x != v[(low+high)/2])
    {
        mid = (low + high) / 2;
        (x < v[mid]) ? (high = mid -1):(low = mid +1);
    }

    if (x != v[(low+high)/2])
        return -1;
    else 
        return (low+high)/2;
}
