#include <stdio.h>
int main(void)
{
    int x=100;

    printf("%d %o %x\n",x,x,x);
    printf("%d %#o %#x\n",x,x,x);

    return 0;
}
