#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** gerarmatriz();
void preencher(int **matriz);
void imprimir(int **matriz);
void procedimentos(int **matriz);
void exemploA(int **matriz);
void exemploB(int **matriz);
void exemploC(int**matriz);
void exemploD(int**matriz);


int main()
{
    srand(time(NULL));
    int **matriz = gerarmatriz();
    preencher(matriz);
    imprimir(matriz);
    procedimentos(matriz);
}

int** gerarmatriz()
{
    int **matriz = (int**) malloc(10*sizeof(int*));
    for(int i = 0 ; i < 10 ; i++)
    {
        matriz[i] =(int*) malloc(10*sizeof(int));
    }
    return matriz;
}

void preencher(int **matriz)
{
    int aleatorio = 0;
    for(int i = 0 ; i < 10 ; i++ )
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            aleatorio = (rand()% 100) + 1;
            matriz[i][j] = aleatorio;
        }
    }
}

void imprimir(int **matriz)
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}


void procedimentos(int **matriz)
{
    exemploA(matriz);
    exemploB(matriz);
    exemploC(matriz);
    exemploD(matriz);
}

void exemploA(int **matriz)
{
    int vetortemp[10];
    for(int i =0 ; i < 10; i++)
    {
        vetortemp[i] = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = vetortemp[i];
    }
    imprimir(matriz);
}

void exemploB(int **matriz)
{
    int vetortemp[10];
    for(int i =0 ; i < 10; i++)
    {
        vetortemp[i] = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = vetortemp[i];
    }
    imprimir(matriz);
}

void exemploC(int**matriz)
{
    int vetortemp[10];
    for(int i = 0; i < 10; i++)
    {
        vetortemp[i] = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = vetortemp[i];
    }
    imprimir(matriz);
}

void exemploD(int **matriz)
{
    int vetortemp[10];
    for(int i = 0 ; i < 10; i++)
    {
        vetortemp[i] = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = vetortemp[i];
    }
    imprimir(matriz);
}