#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

void preencher( int *vetorx, int *vetory);
void merge(int *vetorx, int *vetory);
void imprimir(int *vetor);

int main()
{
    int vetorx[10], vetory[10];
    preencher(vetorx, vetory);
    merge(vetorx, vetory);
}

void preencher( int *vetorx, int *vetory)
{
    srand(time(NULL));
    int aleatorio;
    for(int i = 0; i <10; i++)
    {
        aleatorio = (rand()%100) + 1;
        vetorx[i]= aleatorio;
        aleatorio = (rand()%100) + 1;
        vetory[i] = aleatorio;
    }
    for(int j = 0; j <10; j++)
    {
       printf("%d ", vetorx[j]);
    }
    printf("\n");
    for(int m = 0; m <10; m++)
     {
     printf("%d ", vetory[m]);
    }
    printf("\n");
}
void merge(int *vetorx, int *vetory)
{
    int indice = 1, vetor[20], contagemx = 0, contagemy = 0;
    for(int i = 0; i < 20; i++)
    {
       
        if(indice > 0 )
        {
            vetor[i] = vetorx [contagemx];
            contagemx++;
        }
        else if( indice < 0)
        {
            vetor[i] = vetory[contagemy];
            contagemy++;
        }
        indice = indice * -1;
    }
    imprimir(vetor);
}

void imprimir(int *vetor)
{
    for(int i = 0; i < 20; i++)
    {
        printf("%d ",vetor[i]);
    }
} 

