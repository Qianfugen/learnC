// 编写函数reverse(s), 将字符串s的字符顺序颠倒过来
#include <stdio.h>
#include <string.h>
#define string "Hello, world!"
void reverse(char ch);
int main()
{
    int i;
    int len; 

    printf("Before reverse: %s\n", string);
    printf("After reverse: ");
    len = strlen(string);
    for (i= len -1; i >= 0 ; i--)
        putchar(string[i]);
    putchar('\n');

    return 0;
}
    
