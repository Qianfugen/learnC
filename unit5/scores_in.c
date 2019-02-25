// scores_in.c -- 使用循环处理数组
#include <stdio.h>
int main(void)
{
    const int SIZE=10;
    const int PAR=72;
    int sum=0;
    int index, scores[10];
    float average;

    printf("Enter %d golf scores:\n",SIZE);
    for (index=0;index<SIZE;index++)
        scanf("%d",&scores[index]);
    printf("The scores read in are as follows:\n");
    for (index=0;index<SIZE;index++)
        printf("%5d",scores[index]);
    printf("\n");
    for (index=0;index<SIZE;index++)
        sum += scores[index];
    average=(float) sum/SIZE;
    printf("Sum of scores = %d, average = %.2f\n",sum,average);
    printf("That's a handicap of %.0f.\n",average-PAR);

    return 0;
}
