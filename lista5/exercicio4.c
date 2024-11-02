#include <stdio.h>


int main()
{
    FILE *arquivo;
    char linha[100];
    int contador = 0;
    arquivo = fopen("arquivos\\arquivo_teste2", "r");
    
    while(fgets(linha , sizeof(linha), arquivo) != NULL )
    {
    printf("%s", linha);
    contador++;
    }
    fclose(arquivo);
    
    printf("\n%d", contador);

}