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
    printf("Well, respond with 's' if it is smaller or 'b' if it is bigger.\n");
    printf("Uh...is your number is %d?\n",guess);
    ch = getchar();
    while (ch != 'y') {
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
        else
            printf("Please enter 's' or 'b'\n");
        while ((ch=getchar()) != '\n' && ch !='s' && ch != 'b' && ch != 'y')
            continue;
    }
    printf("Haha, I knew I can do it.\n");

    return 0;
}
