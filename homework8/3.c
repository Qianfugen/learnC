#include <stdio.h>
void chline(char, int, int);
int main(void)
{
    char ch;
    int i;
    int j;

    printf("Please enter the row: ");
    scanf("%d", &j);
    printf("Now enter the column: ");
    scanf("%d", &i);
    getchar();
    printf("Okay! Now enter what character you want to print: ");
    scanf("%c", &ch);
    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j)
{
    int n, m;
    for (n=0; n<j; n++)
    {
        for (m=0; m<i; m++)
            putchar(ch);
        putchar('\n');
    }
}
