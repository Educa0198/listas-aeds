#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void menu();
void cadastrar();
void listar();
void alugueis();
void lucroalugueis();
void manutencao();
void calculo_de_multas();

int main()
{
    menu();
}

void menu()
{
    int opcao;
    printf("\nEscolha o que quer fazer:\n 1-cadastrar carros\n 2- listar carros\n 3-controle de alugueis\n 4-calcular ganho com alugueis\n 5-calcular gasto com manutencao\n 6-calcular ganho com multas\n 0-encerrar\n");
    scanf("%d", &opcao);
    getchar();
    if (opcao == 1)
    {
        cadastrar();
    }
    else if (opcao == 2)
    {
        listar();
    }
    else if (opcao == 3)
    {
        alugueis();
    }
    else if (opcao == 4)
    {
        lucroalugueis();
    }
    else if (opcao == 5)
    {
        manutencao();
    }
    else if( opcao == 6)
    {
        calculo_de_multas();
    }
    else if (opcao == 0)
    {
        return;
    }
    else 
    {
        printf("Opcao invalida");
        menu();
    }
}

void cadastrar()
{
    FILE *arquivo;
    char nome[100], estado[100];
    int aluguel;
    arquivo = fopen("arquivos\\arquivo_teste8", "a");
    printf("\nDigite o nome do carro\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("\ndigite o valor do aluguel\n");
    scanf("%d", &aluguel);
    getchar();

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
    arquivo = fopen("arquivos\\arquivo_teste8", "r");
    char linha[100];
    int contador = 1; 

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        printf("%d- %s", contador, linha); 
        contador++;                        
    }

    fclose(arquivo);
    menu();
}

void alugueis()
{
    char alteracao[100], buffer[256];
    int linhaAlterar, linhaAtual = 1;
    FILE *arquivo, *arquivoTemp;

    arquivo = fopen("arquivos\\arquivo_teste8", "r");
    arquivoTemp = fopen("arquivos\\arquivo_temporario", "w");

    if (arquivo == NULL || arquivoTemp == NULL)
    {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    printf("\nDigite a posicao do carro que quer alterar (linha):\n");
    scanf("%d", &linhaAlterar);
    printf("Digite o novo estado (alugado/livre):\n");
    scanf("%s", alteracao); // Ler o novo estado do carro

    // Processar cada linha do arquivo
    while (fgets(buffer, sizeof(buffer), arquivo) != NULL)
    {
        if (linhaAtual == linhaAlterar)
        {
            // Encontrar a posição do último espaço para substituir o estado
            char *posUltimoEspaco = strrchr(buffer, ' '); // Encontra o último espaço na linha
            if (posUltimoEspaco != NULL)
            {
                // Substituir o estado, mantendo o resto da linha
                snprintf(posUltimoEspaco + 1, sizeof(buffer) - (posUltimoEspaco - buffer) - 1, "%s\n", alteracao);
            }
        }
        // Escrever a linha  alterada ou não) no arquivo temporário
        fputs(buffer, arquivoTemp);
        linhaAtual++;
    }

    // Fechar os arquivos
    fclose(arquivo);
    fclose(arquivoTemp);

    // Substituir o arquivo original pelo temporário
    remove("arquivos\\arquivo_teste8");
    rename("arquivos\\arquivo_temporario", "arquivos\\arquivo_teste8");
    menu();
}

void lucroalugueis()
{
    FILE *arquivo;
    arquivo = fopen("arquivos\\arquivo_teste8", "r");
    char linha[100], nome[50], estado[20];
    int aluguel, lucroTotal = 0;

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {

        sscanf(linha, "%49s R$: %d %19s", nome, &aluguel, estado); 
        if (strcmp(estado, "alugado") == 0)
        {
            lucroTotal += aluguel;
        }
    }

    fclose(arquivo);
    printf("\nO lucro total com os alugueis eh: R$ %d\n", lucroTotal);
    menu();
}

void manutencao()
{
    srand(time(NULL));
    FILE *arquivo;
    arquivo = fopen("arquivos\\arquivo_teste8", "r");
    char linha[256], nome[50], estado[20];
    int aluguel, manutencao = 0;

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        int aleatorio = rand() % 100;
        if (aleatorio < 2)
        {
            sscanf(linha, "%49s R$: %d %19s", nome, &aluguel, estado);
            manutencao += 600;
            printf("\n%s precisa de manutencao\n", nome);
        }
    }

    printf("\nO valor gasto com manutencao esse ano eh de %d\n", manutencao);
    fclose(arquivo);
    menu();
}

void calculo_de_multas()
{
    srand(time(NULL));
    FILE *arquivo;
    arquivo = fopen("arquivos\\arquivo_teste8", "r");
    char linha[256], nome[50], estado[20];
    int aluguel, multa = 0;

    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        int aleatorio = rand() % 100;
        if (aleatorio < 10)
        {
            sscanf(linha, "%49s R$: %d %19s", nome, &aluguel, estado);
            multa += aluguel * 0.2;
            printf("\nO dono do %s foi multado.\n", nome);
        }
    }

    printf("\nO valor ganho com multas esse mes eh de %d\n", multa);
    fclose(arquivo);
    menu();
}