/* cm转为英寸 */
#include <stdio.h>
#define CM_PER_FEET 30.38
#define CM_PER_INCH 2.54
int main(void)
{
    int height_feet;
    float height_cm,height_inch;

    printf("Enter a height in centimeters:\n");
    scanf("%f",&height_cm);
    while (height_cm > 0) {
        height_feet=(int) (height_cm/CM_PER_FEET);
        height_inch=(height_cm-height_feet*CM_PER_FEET)/CM_PER_INCH;
        printf("%.1f cm = %d feet, %.1f inches\n",(float) height_cm,height_feet,height_inch);
        printf("Enter a height in centimeters (<=0 to quit):\n");
        scanf("%f",&height_cm);
    }

    printf("bye\n");

    return 0;
}
