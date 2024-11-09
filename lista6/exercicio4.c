#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int tamanho, maior = 0;
    scanf("%d", &tamanho);
    int *vetor = (int*)malloc(tamanho * sizeof(int));
    for(int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("\n%d", maior);
}