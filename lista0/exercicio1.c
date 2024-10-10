#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, numero_invertido;

    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;
 
    numero_invertido = unidade * 100 + dezena * 10 + centena;

    printf("%d\n", numero_invertido);

    return 0;
}
