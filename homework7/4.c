#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
    char ch;
    int n_words = 0;
    int n_char = 0;
    bool inword = false;


    while ((ch = getchar()) != EOF) {
        if (isalpha(ch))
            n_char++;
        if (!isspace(ch) && !inword)
        {
            inword = true;
            n_words++;
        }
        else if (isspace(ch) && inword)
            inword = false;
    }
    printf("character: %d, words: %d, average: %d\n",
            n_char, n_words, n_char/n_words);

    return 0;
}
