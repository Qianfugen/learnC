/* 输入身高和姓名，特定格式输出 */
#include <stdio.h>
int main(void)
{
    char name[20];
    float height;

    printf("Please enter your name:");
    scanf("%s",name);
    printf("Please enter your height:");
    scanf("%f",&height);
    printf("%s, your are %.3f feet tall.\n",name,height/3);

    return 0;
}
