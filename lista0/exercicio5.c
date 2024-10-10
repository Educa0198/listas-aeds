#include <stdio.h>
#include <math.h>
int main()
{
    float cateto1, cateto2, hipotenusa;
    scanf("%f %f", &cateto1, &cateto2);
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
    printf("%.2f", hipotenusa);
}