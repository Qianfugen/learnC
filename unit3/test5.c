#include <stdio.h>
#define HA "how old are you?"
int main(void)
{
    char name;

    printf("Enter your name:");
    scanf("%c",&name);
    printf("Your name is %c %s.\n",name,HA);

    return 0;
}
