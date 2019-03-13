// 逆序打印华氏温度-摄氏温度对照表
#include <stdio.h>
main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
