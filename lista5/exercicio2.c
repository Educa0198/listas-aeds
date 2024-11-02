#include <stdio.h>
#include <string.h>


int main()
{
    FILE *arquivo;
    char texto[100];
    arquivo = fopen("arquivos\\arquivo_teste2", "w");
    fgets(texto, sizeof(texto), stdin);
    fputs(texto, arquivo);
    fclose(arquivo);
}