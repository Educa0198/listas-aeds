#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int linha, int coluna , int matriz[linha][coluna]);
void escrever(int linha, int coluna , int matriz[linha][coluna]);

int main()
{
    int linha = 4 , coluna = 4;
    int matriz [linha][coluna];
    preencher(linha, coluna, matriz);
    escrever(linha , coluna , matriz);
}

void preencher(int linha, int coluna , int matriz[linha][coluna])
{
    int aleatorio = 0;
    srand(time(NULL));
    for(int i = 0; i< linha ; i++)
    {
        for(int j = 0 ; j < coluna; j++)
        {
            aleatorio = (rand() % 100) + 1;
            matriz[i][j] = aleatorio;
        }
    }
   
}

void escrever(int linha, int coluna , int matriz[linha][coluna])
{
    int soma =  0;
    printf("A diagonal principal e:\n");
    for(int i = 0; i < linha; i++)
    {
        printf(" %d", matriz[i][i]);
        soma += matriz[i][i];
    }
    printf("\nA soma da diagonal eh %d\n", soma);
}

