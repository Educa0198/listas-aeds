#include <stdio.h>

int main() {
    float preco;
    int codigo;

   
 
    scanf("%f", &preco);

    scanf("%d", &codigo);

  
    switch(codigo) {
        case 1:
            printf("Sul\n");
            break;
        case 2:
            printf("Norte\n");
            break;
        case 3:
            printf("Leste\n");
            break;
        case 4:
            printf("Oeste\n");
            break;
        case 5:
        case 6:
            printf("Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Sudeste\n");
            break;
        case 10 ... 20: 
            printf("Centro-oeste\n");
            break;
        case 21 ... 30: 
            printf("Nordeste\n");
            break;
        default:
            printf("Código de origem inválido.\n");
    }

    return 0;
}