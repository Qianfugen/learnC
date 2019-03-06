#include <stdio.h>
#include <ctype.h>
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
char get_choice();
int main(void)
{
    char chooice;
    double work_hours = 0;
    double total_income = 0;
    double tax = 0;
    double net_income =0;
    double hourly_wage = 10.0;

    while (1) {
    printf("**********************************************************************************************\n");
    printf("\n");
    printf("Enter the character correspinding to the desired pay rate or action:\n");
    printf("\ta)$8.75/hr                       b)$9.33/hr\n");
    printf("\td)$10.00/hr                      d)$11.20/hr\n");
    printf("\tq)quit\n");
    printf("**********************************************************************************************\n");
    chooice=get_choice();
    switch(chooice)
    {
        case 'a':hourly_wage=8.75;
               break;
        case 'b':hourly_wage=9.33;
               break;
        case 'c':hourly_wage=10.00;
               break;
        case 'd':hourly_wage=11.20;
               break;
        case 'q':return 0;
        default:
               printf("Please enter the choice('a', 'b', 'c', 'd', 'q'):\n");
               continue;
    }

    printf("How long have you worked a week:");
    scanf("%lf", &work_hours);
    if (work_hours > 40)
        work_hours = (work_hours - 40) * 1.5 +40;
    total_income = work_hours * hourly_wage;
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
    }

    return 0;
}

char get_choice(void)
{
    int ch;

    while (!isalpha(ch=getchar()))
        continue;

    return ch;
}
