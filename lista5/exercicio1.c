#include <stdio.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("arquivos\\arquivo_teste1", "w");
    for( int i = 1; i <= 10; i++)
    {
        fprintf(arquivo , "%i\n", i);
    }

    fclose(arquivo);
}