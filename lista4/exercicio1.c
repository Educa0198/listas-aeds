#include <stdlib.h>
#include <stdio.h>

int recursivo(int numero); 



int main()
{
    int numero;
    scanf("%d", &numero);
    int resultado =  recursivo(numero);
    printf("%d",resultado);
    return 0;
}

int recursivo(int numero)
{
    if (numero == 0)
    {
         
        return 0;
    }
    
      
        return 1 + recursivo(numero / 10.0);  
    
}
