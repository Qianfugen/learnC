/* 把年龄转换成天数，并显示这两个值 */
#include <stdio.h>
int main(void)
{
    int age;
    int days;

    age=20;
    days=365*age;
    printf("My age is %d.\n",age);
    printf("In another world,I have been living for %d days.\n",days);

    return 0;
}
