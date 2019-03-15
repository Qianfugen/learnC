#include <stdio.h>
int main(void)
{
    int c, d;

    while ((c=getchar()) != EOF)
    {
        if (c == '/')
        {
            //删除//注释
            if ((d=getchar()) == '/')       
            {  
                while (getchar() != '\n')
                    ;
                putchar('\n');
            }
            //删除/* */注释
            else if (d == '*')
            {
                while (getchar() != '/')
                    ;
            }
            else 
            {   
                putchar(c);
                putchar(d);
                putchar(getchar());
            }
        }
        else 
            putchar(c);
    }

    return 0;
}

