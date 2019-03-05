#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
int main(void)
{
    double work_hours = 0;
    double total_income = 0;
    double tax = 0;
    double net_income =0;

    printf("How long have you worked a week:");
    scanf("%lf", &work_hours);
    if (work_hours > 40)
        work_hours = (work_hours - 40) * 1.5 +40;
    total_income = work_hours * 10.00;
    if(total_income <= 300)
    {
        tax = work_hours * RATE1;
        net_income = total_income - tax;
    }
    else if (total_income <= 450)
    {
        tax =300 * RATE1 + (total_income - 300) * RATE2;
        net_income = total_income - tax;
    }
    else
    {
        tax = 300 * RATE1 + 150 * RATE2 + (total_income - 450) * RATE3;
        net_income = total_income - tax;
    }
    printf("total_income:$%.2f,tax=$%.2f,net_income=$%.2f.\n",
            total_income, tax, net_income);

    return 0;
}
