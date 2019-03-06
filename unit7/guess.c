// guess.c -- 一个拖杳的猜字程序
#include <stdio.h>
int main(void)
{
    char response;
    int guess=1;

    printf("Pick an integer from 1 to 100. I will tru to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan a if it is wrong.\n");
    printf("Uh...is your number is %d?\n",guess);
    while ((response=getchar()) != 'y') {
        printf("Well, then, is it %d?\n",++guess);
        if  (response == '\n')
            continue;
        else 
            printf("Sorry, I understand only y or n.\n");
        while (getchar() != '\n')
            continue;
    }
    printf("I knew I could do it.\n");

    return 0;
}
