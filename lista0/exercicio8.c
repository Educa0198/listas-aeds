#include <stdio.h>
#include <math.h>
int main()
{
    float a , b , apoio;

    scanf("%f %f", & a, &b);

  
    apoio = a;
    a = b;
    b = apoio;
    printf("\n%.2f \n%.2f", a, b);
}