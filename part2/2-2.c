// 不使用运算符&&和||的条件下编写一个与
// 上面的for循环语句等价的循环语句
#include <stdio.h>
int main(void)
{
    int i = 0;
    int c;
    int lim = 1000;
    char s[lim];

   while ((c=getchar()) != EOF) 
   {
       if (i < lim-1) 
       {
        if (c != '\n')
            s[i] = c;
        else 
            break;
       }
       else 
           break;
   }
    
    return 0;
}
