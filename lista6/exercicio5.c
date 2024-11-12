#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int **matriz);
void procedimento(int **matriz);
void imprimir(int **matriz);
void exemploA(int **matriz);
void exemploB(int **matriz);
void exemploC(int **matriz);
void exemploD(int **matriz);
void exemploE(int **matriz);
void liberarMatriz(int **matriz, int n); // Função para liberar a memória

int main() 
{
    int n = 5, m = 5;
    int **matriz = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) 
    {
        matriz[i] = (int*) malloc(m * sizeof(int));
    }

    preencher(matriz);
    imprimir(matriz);
    procedimento(matriz);

    liberarMatriz(matriz, n); // Liberação correta da matriz
    return 0;
}

void preencher(int **matriz) 
{
    int aleatorio;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            aleatorio = (rand() % 100) + 1;
            matriz[i][j] = aleatorio;
        }
    }
}

void imprimir(int **matriz) 
{
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void procedimento(int **matriz) 
{
    exemploA(matriz);
    exemploB(matriz);
    exemploC(matriz);
    exemploD(matriz);
    exemploE(matriz);
}

void exemploA(int **matriz) 
{
    int soma = 0;
    for (int i = 0; i < 5; i++) 
    {
        soma += matriz[3][i];
    }
    printf("A soma da linha 4 eh %d\n", soma);
}

void exemploB(int **matriz)
{
    int soma = 0;
    for(int i =0; i< 5; i++)
    {
        soma += matriz[i][1];
    }
    printf("A soma da coluna 2 eh %d\n", soma);
}

void exemploC(int **matriz)
{
    int soma = 0;
    for(int i = 0; i<5; i++)
    {
        soma += matriz[i][i];
    }
    printf("A soma da diagonal principal eh %d\n", soma);
}

void exemploD(int **matriz)
{
    int soma = 0;
    for(int i = 0; i< 5; i++)
    {
        soma += matriz[i][4-i];
    }
    printf("A soma da diagonal secundaria eh %d\n", soma);
}

void exemploE(int **matriz)
{
    int soma = 0;
    for(int i = 0; i <5 ; i++)
    {
        for(int j =0 ; j< 5; j++)
        {
            soma += matriz[i][j];
        }
    }
    printf("A soma dos elementos da matriaz eh %d\n", soma);
}

void liberarMatriz(int **matriz, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);
}
