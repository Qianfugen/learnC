#include <stdio.h>
int main(void)
{
    int row;
    int i;

    for (row=0;row<4;row++)
    {
        for (i=0;i<8;i++)
            printf("$");
        printf("\n");
    }

    return 0;
}
