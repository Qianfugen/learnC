#include <stdio.h>
#include <stdlib.h>
#define MAXOP 1000
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

int main(void)
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF)
    {
        switch(type)
        {
            case NUMBER: push(atof(s));
                         break;
            case '+': push(pop() + pop());
                      break;
            case '*': push(pop() * pop());
                      break;
            case '-': push(pop() - op2);
                      break;
            case '/': op2=pop();
                      if (op2 != 0.0)
                          push(pop()/op2);
                      else 
                          printf("error: zero divisor");
                      break;
            case '\n': printf("\t%.8g\n", pop());
                       break;
            default: printf("error: unknown command %s\n", s);
                     break;
        }
    }

    return 0;
}
