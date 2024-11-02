#include <stdio.h>


int main()
{
    FILE *arquivo;
    int contador = 0;
    char caractere;
    arquivo = fopen("arquivos\\arquivo_teste2", "r");

    while((caractere = fgetc(arquivo)) != EOF)
    {
        if(caractere == 'a' || caractere == 'A')
        {
            contador++;
        }
    }

    fclose(arquivo);

    printf("%d", contador);
}