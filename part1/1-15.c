// 使用函数实现温度转换计算
#include <stdio.h>
float temp(int fahr);
int main(void)
{
    int fahr;

    for (fahr = 0; fahr < 300; fahr += 20)
        printf("%d\t%.1f\n", fahr, temp(fahr));

    return 0;
}

float temp(int fahr)
{
    float celsius = 0.0;

    celsius = (5.0/9.0) * (fahr-32);

    return celsius;
}
