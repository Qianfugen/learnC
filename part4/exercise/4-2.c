#include <ctype.h>

double atof(char s[])
{
    double val, power, power2;
    int i, j, sign, sign2, index;
    
    /* 处理一般形式的小数，形如 123.45 */
    for (i=0;isspace(s[i]) || isalpha(s[i]);i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]);i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]);i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    /* 扩充,处理指数表示法，形如 123.45e-6 */
    if (s[i] == 'e' || s[i] == 'E')
    {
        i++;
        sign2 = s[i];

        if (isdigit(sign2))
            ;
        if (sign2 == '+' || sign2 == '-')
            i++;
        for (index=0;isdigit(s[i]);i++)
            index=10.0 * index + (s[i] - '0');
        if (sign2=='-')
            for (j=0,power2=1.0;j<index;j++)
                power2 /= 10;
        else
            for (j=0,power2=1.0;j<index;j++)
                power2 *= 10;
        }

    return sign * val * power2 / power;
}
