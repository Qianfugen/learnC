#include <stdio.h>
int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n')
            continue;
        count++;
    }
    printf("character: %d\n", count);

    return 0;
}
