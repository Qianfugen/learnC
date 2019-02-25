/* 打印各种格式名字 */
#include <stdio.h>
int main(void)
{
    char name[40];

    printf("Please enter your name:");
    scanf("%s",name);
    printf("a. \"%s\"\n",name);
    printf("b. \"%20s\"\n",name);
    printf("c. \"%-20s\"\n",name);
    printf("d. \"   %s\"\n",name);

    return 0;
}
