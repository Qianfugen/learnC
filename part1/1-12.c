//编写一个程序，以每行一个单词的形式打印其输入
#include <stdio.h>
#include <ctype.h>
#define IN 0
#define OUT 1

main()
{
    int ch, nc, state;
    nc = 0;
    state = OUT;
    
    while ((ch=getchar()) != EOF) {
        if (isalpha(ch) && state == OUT) {
            state = IN;
            ++nc;
        }
        if (isspace(ch)) 
            state = OUT;
        if (isalpha(ch))
            putchar(ch);
        else if (isspace(ch))
            putchar('\n');
    }
    printf("words: %d\n", nc);
}
