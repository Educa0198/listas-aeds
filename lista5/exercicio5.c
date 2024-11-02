#include <stdio.h>

int main ()
{
    FILE *arquivo, *arquivotemp1, *arquivotemp2;
    arquivotemp1 = fopen("arquivos\\arquivo_teste1", "r");
    arquivotemp2 = fopen("arquivos\\arquivo_teste2", "r");
    arquivo = fopen("arquivos\\arquivo_teste5", "w");

    char linha[100];
    
    while(fgets(linha, sizeof(linha), arquivotemp1) != NULL)
    {
        fputs(linha, arquivo);
       
    }

      while(fgets(linha, sizeof(linha), arquivotemp2) != NULL)
    {
        fputs(linha, arquivo);
 
    }
   
    fclose(arquivo);
    fclose(arquivotemp1);
    fclose(arquivotemp2);

}