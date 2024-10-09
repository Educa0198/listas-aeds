#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, media;
    int filhos, contagem;

    salario = 1;
    contagem = 0;
    media = 0;

    while (salario >= 0)
    {
        scanf("%f", &salario);
        scanf("%i", &filhos);
        media += salario;
        contagem++;
    }
    contagem--;
   
    printf("%.2f\n", media / contagem);

    return 0;
}
