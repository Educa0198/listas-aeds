#include <stdio.h>
#include<string.h>


void menu();
void cadastrar();
void listar();
void alugueis();
void lucroalugueis();

int main()
{
    menu();
}

void menu()
{
    int opcao;
    printf("\nEscolha o que quer fazer:\n 1-cadastrar carros\n 2- listar carros\n 3-controle de alugueis\n 4-calcular ganho com alugueis\n 5-calcular gasto com manutencao\n 0-encerrar\n");
    scanf("%d", &opcao);
    getchar();
    if(opcao == 1)
    {
        cadastrar();
    }
    if( opcao == 2)
    {
        listar();
    }
    if( opcao == 3)
    {
        alugueis();
    }
    if( opcao == 4);
    {
        lucroalugueis();
    }

    if(opcao == 0)
    {
        return;
    }
}

void cadastrar()
{
    FILE *arquivo;
    char nome[100], estado[100];
    int aluguel;
    arquivo = fopen("arquivos\\exercicio8\\arquivo_teste8", "a");
    printf("\nDigite o nome do carro\n");
    fgets(nome , sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("\ndigite o valor do aluguel\n");
    scanf("%d", &aluguel);
    printf("\nDigite se o carro esta alugado ou livre\n");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    fprintf(arquivo, "%s", nome);
    fprintf(arquivo, "  R$: %d", aluguel);
    fprintf(arquivo, " %s\n", estado);
    fclose(arquivo);
    menu();
}

void listar()
{
    FILE *arquivo;
    arquivo = fopen("arquivos\\exercicio8\\arquivo_teste8", "r");
    char linha[100];
    int contador = 1; // Contador para enumerar os carros

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        printf("%d. %s", contador, linha); // Adiciona a numeração
        contador++; // Incrementa o contador
    }

    fclose(arquivo);
    menu();
}


void alugueis() {
    char alteracao[100], buffer[256];
    int linhaAlterar, linhaAtual = 1;
    FILE *arquivo, *arquivoTemp;

    arquivo = fopen("arquivos\\exercicio8\\arquivo_teste8", "r");
    arquivoTemp = fopen("arquivos\\exercicio8\\arquivo_temporario", "w");

    if (arquivo == NULL || arquivoTemp == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite a posicao do carro que quer alterar (linha):\n");
    scanf("%d", &linhaAlterar);
    printf("Digite o novo estado (alugado/livre):\n");
    scanf("%s", alteracao);  // Ler o novo estado do carro

    // Processar cada linha do arquivo
    while (fgets(buffer, sizeof(buffer), arquivo) != NULL) {
        if (linhaAtual == linhaAlterar) {
            // Encontrar a posição do último espaço para substituir o estado
            char *posUltimoEspaco = strrchr(buffer, ' '); // Encontra o último espaço na linha
            if (posUltimoEspaco != NULL) {
                // Substituir o estado, mantendo o resto da linha
                snprintf(posUltimoEspaco + 1, sizeof(buffer) - (posUltimoEspaco - buffer) - 1, "%s\n", alteracao);
            }
        }
        // Escrever a linha (alterada ou não) no arquivo temporário
        fputs(buffer, arquivoTemp);
        linhaAtual++;
    }

    // Fechar os arquivos
    fclose(arquivo);
    fclose(arquivoTemp);

    // Substituir o arquivo original pelo temporário
    remove("arquivos\\exercicio8\\arquivo_teste8");
    rename("arquivos\\exercicio8\\arquivo_temporario", "arquivos\\exercicio8\\arquivo_teste8");
    menu();
}

void lucroalugueis()
{
    FILE *arquivo;
    arquivo = fopen("arquivos\\exercicio8\\arquivo_teste8", "r");
    char linha[100], nome[50], estado[20];
    int aluguel, lucroTotal = 0;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
       
        if (sscanf(linha, "%49s R$: %d %19s", nome, &aluguel, estado) == 3) {
            if (strcmp(estado, "alugado") == 0) {
                int precoCarro = aluguel * 10;  
                lucroTotal += aluguel;          
            }
        }
    }

 
    fclose(arquivo);
    printf("\nO lucro total com os alugueis eh: R$ %d\n", lucroTotal);
    menu();
}
