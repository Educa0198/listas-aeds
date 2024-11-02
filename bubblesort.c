#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5]; 
    int temp;

    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]); 
    }

    
    for (int j = 0; j < 4; j++) 
    {
        for (int n = 0; n < 4 - j; n++) 
        {
                for (int m = 0; m < 5; m++)
    {
        printf("%d ", vetor[m]);
    }
     printf("\n");
            if (vetor[n] > vetor[n+1])
            {
                temp = vetor[n];
                vetor[n] = vetor[n+1];
                vetor[n+1] = temp;
            }
        }
    }

    return 0;
}
