#include <stdio.h>
int main(void)
{
    char ch;
    int guess = 50;
    int upper = 100;
    int lower = 0;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan a n if it is wrong.\n");
    printf("Uh...is your number is %d?\n",guess);
    scanf("%c", &ch);
    getchar();
    while (ch != 'y') {
        printf("Well, respond with 's' if it is smaller or 'b' if it is bigger.\n");
        scanf("%c", &ch);
        getchar();
        if (ch == 's')
        {
            lower = guess;
            guess = (guess + upper) / 2;
            printf("Well, then, is it %d?\n", guess);
        }
        else if (ch == 'b')
        {
            upper = guess;
            guess = (guess + lower) / 2;
            printf("Oh, is it %d?\n", guess);
        }
    }
    printf("Haha, I knew I can do it.\n");

    return 0;
}
