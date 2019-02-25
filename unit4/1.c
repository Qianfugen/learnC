/* 程序段1 */
#include <stdio.h>
int main(void)
{    
    int index;
    int sam;

    index=0;
    while (index++ < 10)
        sam=10*index+2;
    printf("sam = %d\n",sam);

    return 0;
}
