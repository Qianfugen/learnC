#include <stdio.h>
double power(double n,int p);
int main(void)
{
    int n=0;
    double Daphae=100.0; 
    double Deirdre=100.0;

    do 
    {
        n++;
        Daphae=100+10*n;
        Deirdre=100*power(1.05,n);
    } while (Daphae>=Deirdre);
    
    printf("%d years later,Deirdre is largener than Daphae.\n",n);
    printf("Deirdre    Daphae\n");
    printf("%.5f    %.5f\n",Deirdre,Daphae);

    return 0;
}


double power(double n,int p)
{
    double pow=1;
    int i;

    for (i=1;i<=p;i++)
        pow *= n;

    return pow;
}
