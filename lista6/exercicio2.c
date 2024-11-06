#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int vetor[31];
    srand(time(NULL));
    int aleatorio, maior = 0, menor = 1000, contagem = 0;
    float media = 0;
    for(int i = 0; i < 31; i++)
    {
        aleatorio = (rand() % 25) + 15;
        vetor[i] = aleatorio;
        if( vetor[i] > maior)
        {
            maior = vetor[i];
        }
        else if ( vetor[i] < menor)
        {
            menor = vetor[i];
        }
        media += vetor [i];
        printf("\n%d- %d", i+1, vetor[i]);
    }
    media = media/31;
    for(int j = 0 ; j < 31; j++)
    {
        if(vetor[j]<media)
        {
            
            contagem++;
        }
    }

    printf("\nO dia mais frio foi %d, e o mais quente %d", menor, maior);
    printf("\nA media foi %.2f", media);
    printf("\nTiveram-se %d dias abaixo da media", contagem);
}