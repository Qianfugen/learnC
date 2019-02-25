#include <stdio.h>
#define DENGBA 150
int main(void)
{
    int week, friends;

    for (week=1,friends=5;friends<DENGBA;week++)
    {    
        friends=(friends-week)*2;
        printf("%d week,Rabnud has %d friends.\n",week,friends);
    }
    printf("Okay!Friends is larger than 150!\n");

    return 0;
}
