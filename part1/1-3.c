// 在转换表的顶部打一标题
#include <stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("打印华氏温度-摄氏温度对照表\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}
