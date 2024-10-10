#include <stdio.h>
#define pi 3.141592
int main()
{
   float raio, perimetro, area;

  scanf("%f", & raio);
  perimetro = 2 * pi * raio;
  area = pi * (raio * raio);
  printf("%.2f\n", perimetro);
  printf("%.2f\n", area);
}