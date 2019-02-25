#include <stdio.h>
int main(void)
{
    int n,m;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&m);
    printf("Now enter the first operand:");
    scanf("%d",&n);
    while (n>0) {
        printf("%d %% %d is %d\n",n,m,n%m);
        printf("Enter next number for first operand (<=0 to quit):");
        scanf("%d",&n);
    }
    printf("Done\n");

    return 0;
}
