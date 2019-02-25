/* 自定义函数 */
#include <stdio.h>      

void jolly(void);       //函数原型
void deny(void);

int main(void)
{
    jolly();            //函数调用
    jolly();
    jolly();
    deny();

    return 0;
}

/* 函数定义*/
void jolly(void)    //定义jolly()函数
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)     //定义deny()函数
{
    printf("Which nobody can deny!\n");
}
