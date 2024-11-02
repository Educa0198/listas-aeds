#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *arquivo;
    arquivo = fopen("arquivos\\arquivo_teste7", "w");
    int quantidade, contador = 0;
    char letra, linhas[2];
    scanf("%d", &quantidade);
    for(int i = 0; i < quantidade; i++)
    {
        scanf(" %c", &letra);
        letra = toupper(letra);
        fprintf(arquivo, "%c\n", letra);
    }

    fclose(arquivo);

    arquivo = fopen("arquivos\\arquivo_teste7", "r");
    
    while(fgets(linhas, sizeof(linhas), arquivo) != NULL)
    {   
        if( linhas[0] == 'A' || linhas[0] == 'E' || linhas[0] == 'I' || linhas[0] == 'O' || linhas[0] == 'U')
        {
            contador++;
        }
    }

    printf("%d", contador);
    fclose(arquivo);
}