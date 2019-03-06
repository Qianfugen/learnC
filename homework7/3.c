#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int count_upper = 0;
    int count_lower = 0;

    while ((ch=getchar()) != EOF) {
        if (isupper(ch))
        {
            putchar(ch);
            count_upper++;
        }
        else if (islower(ch))
        {
            putchar(ch);
            count_lower++;
        }
        else
        {
            putchar(ch);
            continue;
        }
    }
    printf("\n");
    printf("count_upper: %-4d\n", count_upper);
    printf("count_lower: %-4d\n", count_lower);
            
    return 0;
}
