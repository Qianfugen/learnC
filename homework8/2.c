#include <stdio.h>
void chline(char, int, int);
int main(void)
{
    char ch;

    ch = '#';
    chline(ch, 3, 5);
    ch = '*';
    chline(ch, 6, 8);

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
