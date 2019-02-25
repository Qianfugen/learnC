/* nogood.c */
#include <stdio.h>
int main(void)
{
    int n,n2,n3;

    // 该程序有多处错误 
    n=5;
    n2=n*n;
    n3=n*n2;
    printf("n=%d\nn squared=%d\nn cubed=%d.\n",n,n2,n3);

    return 0;
}
