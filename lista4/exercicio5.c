#include <stdlib.h>
#include <stdio.h>

float recursivo (float numero);
float fatorial(float numero);


int main ()
{
    float numero;
    scanf("%f", &numero);

    float resultado = recursivo(numero);
    printf("%.2f", resultado);
}

float recursivo (float numero)
{
    if ( numero == 1 )
    {
        return 1;
    }
    return 1.0/fatorial(numero)+ recursivo ( numero -1);
}

float fatorial(float numero)
{
    if ( numero == 1)
    {
        return 1;
    }
    return numero * fatorial(numero -1);
}