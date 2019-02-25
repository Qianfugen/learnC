/* 验证整数上溢、浮点数上溢、下溢情况 */
#include <stdio.h>
int main(void)
{
    /* int类型存储空间占32位，范围 -2147483648～2147483647*/
    int i=2147483647;           //i大于最大值，重新开始计数
    
    /* float类型,范围 1.0e-37～1.0e+37 */
    float a=3.4E38*100.0f;      //浮点数上溢
    float b=3.141592E-43;

    printf("%d %d %d\n",i,i+1,i+2);
    printf("%e\n",a);
    printf("%E\n",b/10);

    return 0;
}
