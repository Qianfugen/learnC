/*  输入ASCII码，然后打印输入字符 */
#include <stdio.h>
int main(void)
{
    int ascii;

    printf("Please enter an ascii:");
    scanf("%d",&ascii);
    printf("ASCII %d is %c\n",ascii,ascii);

    return 0;
}
