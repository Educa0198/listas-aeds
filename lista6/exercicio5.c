#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int matriz[5][5]);
void procedimento(int matriz);
void exemploA(int matriz[5][5]);


int main ()
{
    int matriz [5][5];
    preencher(matriz[5][5]);
    procedimento(matriz[5][5]);
}

void preencher(int matriz[5][5])
{
    int aleatorio;
    srand(time(NULL));
    for(int i = 0; i <  5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            aleatorio = (rand() % 100) + 1;
            matriz [i][j] = aleatorio;
        }
    }
}

void procedimento(int matriz)
{
    exemploA(matriz[5][5]);
    
}

void exemploA(int matriz[5][5])
{
    int soma = 0;
    for(int i =0; i<5; i++)
    {
       soma += matriz[3][i];
    }
    printf("a soma da linha eh %d", soma);
}