#include <stdio.h>
int main(void)
{
    const int ROWS=6;
    char ch;
    int row;

    for (row=0;row<ROWS;row++)
    {
        for (ch='F';ch>('F'-row-1);ch--)
            printf("%c",ch);
        printf("\n");
    }

    return 0;
}
