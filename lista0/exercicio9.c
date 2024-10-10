#include <stdio.h>

int main() {
    int numerador, denominador;
    double decimal;

    scanf("%d", &numerador);
   
    scanf("%d", &denominador);
    decimal = (double) numerador / denominador;
    printf("%.2f\n", decimal);

    return 0;
}