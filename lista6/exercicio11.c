#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int aleatorio, soma = 0;
    int tamanho;
    scanf("%d", &tamanho);
    int *vetor = (int*) malloc(tamanho * sizeof(int));
    for(int i = 0; i < tamanho; i++)
    {
        aleatorio = (rand()%100) + 1;
        vetor[i] = aleatorio;
        soma += vetor[i];
        printf(" %d", vetor[i]);
    }
    printf("\nA soma do vetor eh %d", soma);
}