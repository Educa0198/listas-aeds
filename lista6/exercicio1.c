#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher (float *vetor);
void media (float *vetor);

int main()
{
    float vetor[10];
    preencher(vetor);
    media(vetor);
}

void preencher (float *vetor)
{
    srand(time(NULL));
    for(int i = 0 ; i < 10; i++)
    {
        int aleatorio = (rand() % 10) + 1;
        vetor[i] = aleatorio;
        printf("%d- %.2f\n", i + 1 ,vetor[i]);
    }
}

void media (float *vetor)
{
    float media= 0;
    int contagem = 0;
    for(int i = 0; i <10; i++)
    {
        media += vetor[i];
        if ( vetor [i] >= 6)
        {
            contagem++;
        }
    }

    printf("\na media dos alunos eh %.2f", media/10);
    printf("\na quantidade de alunos acima da media eh %d", contagem);
}