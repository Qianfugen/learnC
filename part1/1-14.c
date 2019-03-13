#include <stdio.h>
#include <ctype.h>
#define MAXHIST 15
#define MAXCHAR 128
main()
{
    char c;
    int i;
    int charlen;
    int ch[MAXCHAR];
    for (i = 0; i < MAXCHAR; i++)
        ch[i] = 0;
    while ((c=getchar()) != EOF)
        if (c < MAXCHAR)
            ++ch[c];
    for (i = 1; i < MAXCHAR; i++)
        if (ch[i] > MAXHIST)
            ch[i] = MAXHIST;
    /* 输出水平方向直方图 */
    for (i = 1; i < MAXCHAR; i++) {
        charlen = ch[i];
        if (charlen < 1)
            continue;
        if (isprint(i))
            printf("%c %d\t", i, charlen);
        else 
            printf("    %d\t", charlen);
        while (ch[i] > 0) {
            putchar('*');
            --ch[i];
        }
        putchar('\n');
    }
}
