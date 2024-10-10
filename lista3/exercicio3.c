#include <stdlib.h>
#include <stdio.h>


void organiza(int *numero1, int *numero2, int *numero3);

int main ()
{
    int numero1, numero2, numero3, qunatidade;
    scanf("%i", &qunatidade);
    for(int i = 1; i <= qunatidade; i++)
    {
    scanf("%i %i %i", &numero1, &numero2, &numero3);
    organiza(&numero1, &numero2, &numero3);
    printf("%i %i %i\n", numero1, numero2, numero3);
    }
   
}

void organiza(int *numero1, int *numero2, int *numero3)
{
    int ajuda;
    
   
    if (*numero2 < *numero1) {
        ajuda = *numero1;
        *numero1 = *numero2;
        *numero2 = ajuda;
    }
    if (*numero3 < *numero1) {
        ajuda = *numero1;
        *numero1 = *numero3;
        *numero3 = ajuda;
    }

 
    if (*numero3 < *numero2) {
        ajuda = *numero2;
        *numero2 = *numero3;
        *numero3 = ajuda;
    }
}
