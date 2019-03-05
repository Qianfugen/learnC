#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.28
int main(void)
{
    int chooice = 0;
    int threshold = 0;
    double tax = 0;
    double income =0;

    while (1) {
    printf("**********************************************************************************************\n");
    printf("\n");
    printf("请选择您属于哪种税收方案（1-5）：\n");
    printf("\t1)单身                            2)户主\n");
    printf("\t3)已婚，共有                      4)$已婚，离异\n");
    printf("\t5)退出\n");
    printf("**********************************************************************************************\n");
    scanf("%d",&chooice);
    switch(chooice)
    {
        case 1:threshold=17850;
               break;
        case 2:threshold=23900;
               break;
        case 3:threshold=29750;
               break;
        case 4:threshold=14875;
               break;
        case 5:return 0;
        default:
               printf("请以上选项选择（1 - 5）：\n");
               continue;
    }
    
    printf("请输入您的收入：");
    scanf("%lf",&income);
    if (income <= threshold)
        tax=income*RATE1;
    else
        tax=(income - threshold)*RATE2+threshold*RATE1;
    printf("您应缴纳的税金是$%.2f.\n", tax);
    }

    return 0;
}
