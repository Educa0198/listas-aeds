#include <stdio.h>


int main() {
    float salario;
    scanf("%f", &salario);
    if (salario <= 500)
    {
        salario = salario * 1.3;
        printf("%.2f", salario);
    }
    else
    {
        printf("Sem reajuste");
    }
}
