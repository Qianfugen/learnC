/* praise1.c -- 使用不同类型的字符串 */
#include <stdio.h>
#include <string.h>
#define PRAISE "you are an extraordinary being."
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s",name);
    printf("Hello,%s. %s\n",name,PRAISE);
    printf("your name of %zd letters occupies %zd memory cells.\n",strlen(name),sizeof(name));
    printf("The phrase of praise has %zd letters,\n",strlen(PRAISE));
    printf("and occupies %zd memory cells.\n",sizeof PRAISE);

    return 0;
}
