#include <stdio.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("arquivos\\arquivo_teste6", "w");
    int numero, soma =0 ;
    char numeros[50];
    scanf("%d", &numero);
    for( int i = 1; i<= numero; i++)
    {
        if( numero % i == 0)
        {
           printf("%d\n", i);
           soma += i;
        }
    }
    fprintf(arquivo, "%d", soma);
    fclose(arquivo);

    arquivo = fopen("arquivos\\arquivo_teste6", "r");
    while(fgets(numeros, sizeof(numeros), arquivo) != NULL)
    {
        printf("%s", numeros);
    }
    fclose (arquivo);
}