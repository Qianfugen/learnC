#include <stdio.h>
#define CONVERAGE 60
int main(void)
{
    int sq_feet;
    int cans;

    printf("Please enter number of square feet to be painted.\n");
    while (scanf("%d",&sq_feet)==1) {
        cans=sq_feet/CONVERAGE;
        cans += (sq_feet%CONVERAGE==0) ? 0:1;
        printf("You need %d %s of paint.\n",cans,cans==1 ? "can":"cans");
    }

    return 0;
}
