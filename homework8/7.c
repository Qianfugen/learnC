#include <stdio.h>
#include <ctype.h>
int judge_alpha(char);
int main(void)
{
    char ch;
    int jud;

    while ((ch = getchar()) != EOF) {
        jud=judge_alpha(ch);
        if (jud == -1)
            printf("%c is not an alpha.\n", ch);
        else
            printf("%c is an alpha, it's location is %d.\n", ch, jud);
    }

    return 0;
}

int judge_alpha(char ch)
{
    if (islower(ch))
        return ch - 'a' + 1;
    else if (isupper(ch))
        return ch - 'A' + 1;
    else 
        return -1;
}


