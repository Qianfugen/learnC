/* 把天数转周和天数 */
#include <stdio.h>
int main(void)
{
    int day,week,left;

    printf("Please enter the days (<=0 to quit):\n");
    scanf("%d",&day);
    while (day > 0) {
        week=day/7;
        left=day%7;
        printf("%d days are %d weeks, %d days.\n",day,week,left);
        printf("Please enter the days(<=0 to quit):\n");
        scanf("%d",&day);
    }

    return 0;
}
