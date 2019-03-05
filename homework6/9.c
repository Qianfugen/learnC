#include <stdio.h>
int main(void)
{
    int input;
    int i,j;

    printf("Please enter a number(>0):");
    scanf("%d", &input);
    for (i=2;i<input;i++)
    {   
        for (j=2;j*j<i;j++)
        {
            if (i % j == 0)
                break;
        }
        if (j*j > i)
            printf("%d\n",i);
    }

    return 0;
}
