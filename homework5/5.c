#include <stdio.h>
int main(void)
{
    int row;
    char ch,i;

    printf("Please enter an alpha:");
    scanf("%c",&ch);

    for (row=0;row<(ch-64);row++)
    {
        for (i='A';i<=i+row;i++)
            printf("%c",i);
        printf("\n");
    }

}
