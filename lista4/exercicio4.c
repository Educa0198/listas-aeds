#include <stdio.h>
#include <stdlib.h>

int divisao(int numerador , int denominador);

int main ()
{
    int numerador , denominador;
    scanf("%d %d", &numerador, &denominador);
    int resultado = divisao(numerador ,denominador);
    printf("%d", resultado);
}

int divisao(int numerador , int denominador)
{
    if( numerador < denominador)
    {
        return numerador;
    }
    else
    {
        return divisao(numerador - denominador, denominador);
    }
}