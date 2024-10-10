#include <stdio.h>

int main(void) {
    float valor;
    char investimento;

    scanf("%f", &valor);
    scanf(" %c", &investimento);

    if(investimento == 'P')
    {
        valor *= 1.03; // rendimento mensal
    }   
    else if(investimento == 'F')
    {
        valor *= 1.04;
    }

    printf("%.2f", valor);

    return 0;
}