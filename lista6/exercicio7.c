#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int linha, int coluna , int matriz[linha][coluna]);
void somar(int linha, int coluna, int matriz1[linha][coluna], int matriz2[linha][coluna], int matriz3[linha][coluna]);
void subtrair(int linha, int coluna, int matriz1[linha][coluna], int matriz2[linha][coluna], int matriz3[linha][coluna]);
void imprimir(int linha, int coluna, int matriz1[linha][coluna]);

int main()
{
    srand(time(NULL));
    int linha = 4, coluna = 6;
    int matriz1[linha][coluna] , matriz2[linha][coluna], matriz3[linha][coluna], matriz4[linha][coluna];
    preencher(linha, coluna, matriz1);
    preencher(linha, coluna, matriz2);
    somar(linha, coluna , matriz1 , matriz2, matriz3);
    subtrair(linha, coluna, matriz1, matriz2, matriz4);
    imprimir(linha, coluna, matriz1);
    imprimir(linha, coluna, matriz2);
    imprimir(linha, coluna, matriz3);
    imprimir(linha, coluna, matriz4);
    
}

void preencher(int linha, int coluna , int matriz[linha][coluna])
{
    int aleatorio = 0;
    for(int i = 0 ; i < linha;i++)
    {
        for(int j = 0 ; j< coluna; j++)
        {
            aleatorio = (rand() %100) +1;
            matriz[i][j] = aleatorio;
        }
    }
}

void somar(int linha, int coluna, int matriz1[linha][coluna], int matriz2[linha][coluna], int matriz3[linha][coluna])
{
    for(int i = 0; i < linha ; i++)
    {
        for(int j = 0 ; j < coluna ; j++)
        {
            matriz3[i][j]= matriz1[i][j]+ matriz2[i][j];
        }
    }
}

void subtrair(int linha, int coluna, int matriz1[linha][coluna], int matriz2[linha][coluna], int matriz3[linha][coluna])
{
    for(int i = 0; i < linha ; i++)
    {
        for(int j = 0 ; j < coluna ; j++)
        {
            matriz3[i][j]= matriz1[i][j] - matriz2[i][j];
        }
    }
}

void imprimir(int linha, int coluna, int matriz1[linha][coluna])
{
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            printf(" %d", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}