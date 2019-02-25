/* 根据年龄计算秒数 */
#include <stdio.h>
int main(void)
{
    float age;

    printf("Please enter your age: ");
    scanf("%f",&age);
    printf("your have been living for %.3e seconds!\n",3.156e7*age);

    return 0;
}
