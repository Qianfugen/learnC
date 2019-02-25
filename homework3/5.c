/* 浮点数计算 */
#include <stdio.h>
int main(void)
{
    float download_speed;
    float file_size;

    printf("Please enter download speed(Mb/s): ");
    scanf("%f",&download_speed);
    printf("Please enter the size of file(Mb):");
    scanf("%f",&file_size);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n",download_speed,file_size);
    printf("downloads in %.2f seconds.\n",8*file_size/download_speed);

    return 0;
}
