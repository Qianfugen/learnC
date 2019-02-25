#include <stdio.h>
int main(void)
{
    int count,sum,salary;

    count=0;
    sum=0;
    while (count++  < 7) {
        printf("Please enter the salary(day %d):$___\b\b\b",count);
        scanf("%d",&salary);
        sum=sum+salary;
    }
    printf("You have owned %d dollars in %d days.\n",sum,count-1);

    return 0;
}
