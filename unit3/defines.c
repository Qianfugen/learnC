/* defines.c -- 使用limits.h和float.h头文件中定义的明示常量 */
#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n",INT_MAX);
    printf("Smallest long long: %lld\n",LLONG_MIN);
    printf("One byte = %d bits on this system.\n",CHAR_BIT);
    printf("Largest double: %e\n",DBL_MAX);
    printf("Smallest normal float: %e\n",FLT_MIN);
    printf("float precision = %d digests.\n",FLT_DIG);
    printf("float epsilon = %e\n",FLT_EPSILON);

    return 0;
}
