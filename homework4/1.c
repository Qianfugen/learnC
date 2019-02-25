/* 把分钟表示的时间改成用小时和分钟表示 */
#include <stdio.h>
#define MIN_PER_H 60

int main(void)
{
    int min, hour, left;

    printf("Please enter the time in minutes(<=0 to quit):\n");
    scanf("%d",&min);
    while (min > 0) {
        hour=min/MIN_PER_H;
        left=min%MIN_PER_H;
        printf("%d hour(s)  %d minute(s)\n",hour,left);
        printf("Please enter the time in minutes(<=0 to quit):\n");
        scanf("%d",&min);
    }

    return 0;
}
