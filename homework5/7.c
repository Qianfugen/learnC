#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[20];
    int index,length;

    printf("Please enter a word:");
    scanf("%s",word);
    length=strlen(word);
    for (index=length-1;index>=0;index--)
        printf("%c",word[index]);
    printf("\n");

    return 0;
}
