#include <stdio.h>
//洋蓟 artichoke ; 甜菜 beet ; 胡萝卜 carrot
int main(void)
{
    char ch = 0;
    double total_cost = 0;
    double total_weight = 0;
    double discount = 0;
    double n_pound = 0;
    double n_artichoke = 0;
    double n_beet = 0;
    double n_carrot =0;
    double price = 0;
    double freight = 0;

    printf("*******************************************************************\n");   
    printf("Vegetables Menu:\n");
    printf("\ta.artichoke $2.05/pounds          b.beet $1.15/pounds\n");
    printf("\tc.carror    $1.09/pounds          q.quit\n");
    printf("*******************************************************************\n");   
    while (ch != 'q') {
        printf("Please choice what you want:\n");
        scanf("%c", &ch);
        switch(ch)
        {
            case 'a': price = 2.05;
                      printf("How many pounds of Artichoke do you want to buy:\n");
                      scanf("%lf", & n_pound);
                      n_artichoke += n_pound;
                      break;
            case 'b': price = 1.15;
                      printf("How many pounds of Beet do you want to buy:\n");
                      scanf("%lf", & n_pound);
                      n_beet += n_pound;
                      break;
            case 'c': price = 1.09;
                      printf("How many pounds of Carrot do you want to buy:\n");
                      scanf("%lf", & n_pound);
                      n_carrot += n_pound;
                      break;
            case 'q': continue;
            default : printf("Please enter the above options:\n");
                      break;
        }
        while (getchar() != '\n');
    }
    printf("%-20s%-20s%-20s%-20s\n", "Category", "Price", "Pounds", "Total price");
    printf("%-20s%-20s%-20.2f$%-20.2f\n", "Artichoke", "$2.05/pound", n_artichoke, (n_artichoke*2.05));
    printf("%-20s%-20s%-20.2f$%-20.2f\n", "Beet", "$1.15/pound", n_beet, (n_beet*1.15));
    printf("%-20s%-20s%-20.2f$%-20.2f\n", "Carrot", "$1.09/pound", n_carrot, (n_carrot*1.09));
    total_cost=n_artichoke*2.05 + n_beet*1.15 + n_carrot*1.09;
    printf("Total_cost:$%.2f\n",total_cost);
    if (total_cost>100)
    {
        discount=total_cost*0.05;
        printf("Discount:$%.2f\n", discount);
        total_cost -= discount;
    }
    total_weight=n_artichoke+n_beet+n_carrot;
    printf("Total_weight:$%.2f\n", total_weight);
    if (total_weight<=5 && total_weight>0)
        freight=6.5;
    else if (total_weight<=20 && total_weight>5)
        freight=14;
    else if (total_weight>20)
        freight=14+(total_weight-20)*0.5;
    printf("Total_freight:$%.2f\n", freight);
    printf("Final cost:$%.2f\n", (total_cost+freight));

    return 0;
}
