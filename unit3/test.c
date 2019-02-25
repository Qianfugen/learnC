#include <stdio.h>
#define NAME "Qian fugen"
int main(void)
{
    int PAGES=10;
    float a=5.62;

    printf("%-20s\n",NAME);
    printf("%+6.2f\n",a);
    printf(" %6.2f\n",a);
    printf("%#x\n",PAGES);
    printf("%010d\n",PAGES);

    return 0;
}
