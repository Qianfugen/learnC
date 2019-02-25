#include <stdio.h>
int main(void)
{
    const int ROWS=5;
    int row,i;

    for (row=0;row<ROWS;row++)
    {
        for (i=0;i<(row+1);i++)
            printf("$");
        printf("\n");
    }

    return 0;
}
