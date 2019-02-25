/* 输入姓和名，然后以“名，姓”打印出来 */
#include <stdio.h>
int main(void)
{
    char first_name[10];
    char last_name[10];

    printf("Please enter your full name: ");
    scanf("%s %s",last_name,first_name);
    printf("\"%s,%s\"\n",first_name,last_name);

    return 0;
}
