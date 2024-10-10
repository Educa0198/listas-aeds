#include <stdio.h>
#include <math.h>
int main()
{
    int razao, termo, decimotermo;

    scanf("%d %d", &razao, &termo);
    decimotermo = termo + (10 - 1) * razao;
  printf(" %d", decimotermo);
}