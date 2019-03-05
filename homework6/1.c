#include <stdio.h>
int main(void)
{
    char ch;
    int n_break=0;
    int n_space=0;
    int n_other=0;

    while ((ch=getchar()) != '#') {
        if (ch == '\n')
            n_break++;
        else if (ch == ' ')
            n_space++;
        else
            n_other++;
    }
    printf("n_break: %d, n_space: %d, n_other: %d.\n", n_break, n_space, n_other);

    return 0;
}
