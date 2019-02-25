/* 重复打印 */
#include <stdio.h>
void smile(void);
int main()
{
    smile();smile();smile();
    printf("\n");
    smile();smile();
    printf("\n");
    smile();
    printf("\n");

    return 0;
}

void smile(void)
{
    printf("Smile!");
}
