#include <stdio.h>
#include <math.h>

int main ()
{
  float base, altura;

  scanf("%f", & base);
 
  scanf("%f", &altura);
  float perimetro, area;
  perimetro = (base * 2 ) + (altura * 2);
  area = base* altura;
  printf(" %.2f\n", perimetro);
  printf(" %.2f\n", area);
  float diagonal;
  diagonal = sqrt(pow(base, 2) + pow(altura, 2));
  printf("%.2f\n", diagonal);
}