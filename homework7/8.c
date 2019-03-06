#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
    char ch;
    char number;
    float first_number = 0.0;
    float second_number = 0.0;
    
    do 
    {
        //菜单栏
        printf("Enter the operation of your choice:\n");
        printf("a. add          s. subtract\n");
        printf("m. multiply     d. divide\n");
        printf("q. quit\n");
        //获取选项
        ch = get_first();
        if (ch == 'q')
            break;
        while (getchar() != '\n')
            continue;

        if (ch != 'a' && ch != 's' && ch != 'm' &&
                ch != 'd' && ch != 'q')
        {   
            printf("Please choice above options!");
            continue;
        }
        //输入数值
        printf("Enter first number: ");
        while (scanf("%f", &first_number) != 1) {
            number = 0;
            while ((number=getchar()) != '\n') 
                putchar(number);
                printf(" is not a number.\n");
                printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        printf("Enter second_number: ");
        while (scanf("%f", &second_number) != 1) {
            number =0;
            while ((number=getchar()) != '\n')
                putchar(number);
                printf(" is not a number.\n");
                printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        while (second_number == 0 && ch =='d') {
            printf("Enter a number other than 0");
            scanf("%f", &second_number);
        }
        printf("Done\n");

        switch(ch)
        {
            case 'a': printf("%.2f + %.2f = %.2f\n", first_number, second_number,first_number+second_number);
                      break;
            case 's': printf("%.2f - %.2f = %.2f\n", first_number, second_number,first_number-second_number);
                      break;
            case 'm': printf("%.2f * %.2f = %.2f\n", first_number, second_number,first_number*second_number);
                      break;
            case 'd': printf("%.2f / %.2f = %.2f\n", first_number, second_number,first_number/second_number);
                      break;
            default: break;
        }
    } while (1);
    printf("Bye!\n");   

    return 0;
}

char get_first(void)
{
    int ch;
    
    while (!isalpha(ch=getchar()))
        continue;
    
    return ch;
}
