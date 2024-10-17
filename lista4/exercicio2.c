#include <stdlib.h>
#include <stdio.h>

int contadigitos ( int numero);

int main ()
{
    int numero;
    scanf("%d", &numero);
    int resultado = contadigitos (numero);
    printf("%d", resultado);
}

int contadigitos ( int numero)
{
    if ( numero < 10 )
    {
       return numero;
    }
    else
    {
        return (numero % 10) + contadigitos(numero / 10);
    } 
}