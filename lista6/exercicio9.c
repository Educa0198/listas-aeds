#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar(int tamanho, int *vetor);
void imprimir(int tamanho, int *vetor);

int main()
{
    int tamanho;
    scanf("%d", &tamanho);
    int *vetor = (int*) malloc(tamanho * sizeof(int));
    srand(time(NULL));
    int aleatorio = 0;
    for(int i = 0; i < tamanho; i++)
    {
        aleatorio = (rand() % 100) + 1;
        vetor[i] = aleatorio;
    }
    printf("vetor: ");
    imprimir(tamanho, vetor);
    ordenar(tamanho, vetor);
    free(vetor);

    return 0;
}

void ordenar(int tamanho, int *vetor)
{
    int temp;

    for(int i = 0; i < tamanho; i++)
    {
        for(int j = 0; j < tamanho - i; j++) 
        {
            if(vetor[j] >= vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    printf("vetor ordenado:");
    imprimir(tamanho, vetor);
}

void imprimir(int tamanho, int *vetor)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf(" %d", vetor[i]);
    }
    printf("\n");
}
