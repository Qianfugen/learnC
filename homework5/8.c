#include <stdio.h>
int main(void)
{
    double l_fl,r_fl;
    int status;

    printf("Please enter two floats number (q to quit):\n");
    status=scanf("%lf %lf",&l_fl,&r_fl);
    while (status) {
        printf("(%.3f-%.3f)/(%.3f*%.3f)=%.3f\n",l_fl,r_fl,l_fl,r_fl,(l_fl-r_fl)/(l_fl*r_fl));
        printf("Please enter two floats number (q to quit):\n");
        status=scanf("%lf %lf",&l_fl,&r_fl);
    }
    printf("Quit!\n");
    
    return 0;
}
