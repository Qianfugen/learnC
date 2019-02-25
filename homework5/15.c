#include <stdio.h>
int main(void)
{
    int i=-1;
    int j;
    char input[256];

    printf("Please enter a string:\n");
    do 
    {
        i++;
        scanf("%c",&input[i]);
    } while (input[i] != '\n');

    for (j=i;j>=0;j--)
        printf("%c",input[j]);
    printf("\n");

    return 0;
}
