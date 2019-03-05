#include <stdio.h>
int main(void)
{
    char ch;
    int count=0;

    while ((ch=getchar()) != '#') {
        if (count%8 == 0 && count !=0)
            printf("\n");
        printf("%c-%-4d ", ch, ch);
        count++;
    }

    return 0;
}
