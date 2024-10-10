#include <stdio.h>
#include <stdlib.h>

int main ()
{
  getalunos();
}


void getalunos()
{
    int quantidade;
    scanf("%i", &quantidade);
    for(int i = 1; i <= quantidade ; i++)
    {
        calculanota();
    }
}
void calculanota()
{
    float nota;
    scanf("%f", &nota);
    if ( nota <= 39)
    {
        printf("F\n");
    }
    else if( nota > 39 && nota <= 59)
    {
        printf("E\n");
    }
    else if( nota > 59 && nota <= 69)
    {
        printf("D\n");
    }
    else if ( nota > 69 && nota <= 79)
    {
        printf("C\n");
    }
    else if( nota > 79 && nota <= 89)
    {
        printf("B\n");
    }
    else if ( nota >= 90)
    {
        printf("A\n");
    }
}