//fathm_ft.c --把2英寻转换成英尺
#include <stdio.h>
int main(void)  
{
    int feet,fathoms;   //使用有意义的变量名，多个变量
                        //使用空行，分隔声明和其他代码
    fathoms=2;          
    feet=6*fathoms;     //每行一条语句
    printf("There are %d feets in %d fathoms.\n",feet,fathoms);
    printf("Yes, I said %d feets.\n",6*fathoms);

    return 0;
}
