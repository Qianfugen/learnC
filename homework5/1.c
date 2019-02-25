#include <stdio.h>
#define SIZE 26
int main(void)
{
    char list[SIZE];
    int index;
    char ch;

    for (index=0,ch='a';ch<('a'+SIZE);index++,ch++)
        list[index]=ch;
    printf("The values in list are as follows:\n");
    for (index=0;index<SIZE;index++)
        printf("%c",list[index]);
    printf("\n");

    return 0;
}
