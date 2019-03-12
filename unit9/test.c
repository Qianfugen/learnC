#include <stdio.h>
#define SIZE 4
int main(void)
{
    int counter, evens[SIZE];
    for (counter = 0; counter < SIZE; counter++)
        evens[counter] = 2* counter;
    for (counter = 0 ; counter < SIZE ; counter++)
        printf("%d  ", evens[counter]);
    printf("\n");

    return 0;
}
