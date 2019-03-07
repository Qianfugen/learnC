#include <stdio.h>
int imin(int, int);
int main(void)
{
    int evil, evil2;

    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil, &evil2) == 2) {
        printf("The lesser of %d and %d is %d.\n", evil, evil2, imin(evil, evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");

    return 0;    
}

int imin(int n, int m)
{
    return (n < m) ? n : m;
}
