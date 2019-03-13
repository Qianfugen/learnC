// 摄氏温度转换为华氏温度
#include <stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("打印摄氏温度-华氏温度对照表\n");
    while (celsius <= upper) {
        fahr = ((9.0 / 5.0) * celsius + 32.0);
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
}
