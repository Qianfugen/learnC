#include <stdio.h>
void Temperatures(double temp);
int main(void)
{
    double temp;

    printf("请输入一个华氏温度(输入'q'退出)：");
    while (scanf("%lf",&temp)==1) {
        Temperatures(temp);
        printf("请输入一个华氏温度(输入'q'退出)：");
    }

    return 0;
}

void Temperatures(double temp)
{
    const double k=273.16;
    double she_temp;

    she_temp=5.0/9.0*(temp-32.0);
    printf("华氏温度:%2.2f\n",temp);
    printf("摄氏温度:%2.2f\n",she_temp);
    printf("开氏温度:%2.2f\n",she_temp+k);
}
