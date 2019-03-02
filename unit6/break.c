#include <stdio.h>
int main(void)
{
    double length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%lf",&length) == 1) {
        printf("Length=%0.2f\n",length);
        printf("Please enter its width:\n");
        if (scanf("%lf",&width) != 1)
            break;
        printf("Width = %0.2f\n",width);
        printf("Area = %0.2f:\n",length*width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");

    return 0;
}
