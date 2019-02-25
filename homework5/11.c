#include <stdio.h>
#define SIZE 8
int main(void)
{
    int iarray[SIZE];
    int i;

    printf("Please enter %d integers:\n",SIZE);
    for (i=0;i<SIZE;i++)
        scanf("%d",&iarray[i]);
    printf("in return:\n");
    for (i=SIZE-1;i>=0;i--)
        printf("%d ", iarray[i]);
    printf("\n");

    return 0;
}
