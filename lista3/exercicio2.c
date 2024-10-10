#include <stdio.h>

void calcular_media_salario() {
    float salario, soma_salarios = 0;
    int num_filhos, quantidade_pessoas = 0;

    while (1) {
        
        scanf("%f %d", &salario, &num_filhos);

        if (salario < 0) {
            break;
        }

        soma_salarios += salario;
        quantidade_pessoas++;
    }

    if (quantidade_pessoas > 0) {
        float media_salario = soma_salarios / quantidade_pessoas;
        printf("%.2f\n", media_salario);
    } 
}

int main() {
    calcular_media_salario();
    return 0;
}
