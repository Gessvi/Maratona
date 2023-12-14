#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Produto
{
    char nomeproduto[200];
    float precoproduto;
    int quantidadeproduto;
};

float compra(struct Produto *produto, float saldo)
{
    int compra;
    float operacao;

    printf("Quantos produtos você deseja comprar ?\n");
    scanf("%d", &compra);

    if (compra > 0 && compra <= produto->quantidadeproduto)
    {
        operacao = produto->quantidadeproduto - compra;
        return operacao;
    }
    else
    {
        printf("Quantidade inválida.");
    }

    system("cls || clear");
}

int main()
{
    float saldo = 0; // Inicialize a variável saldo
    int opcao;

    setlocale(LC_ALL, "portuguese");

    struct Produto resultado;

    printf("Insira o nome do produto:\n");
    gets(resultado.nomeproduto);

    printf("Insira o preco do produto:\n");
    scanf("%f", &resultado.precoproduto);

    printf("Insira a Quantidade do produto:\n");
    scanf("%d", &resultado.quantidadeproduto);

    system("cls || clear");

    do
    {

        printf("Escolha uma das opcoes abaixo:\n");
        printf("| [1] Realizar compra\n");
        printf("| [2] Consultar estoque\n");
        printf("| [3] Sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            saldo = compra(&resultado, saldo);
            printf("\n \t ---- Compra Finalizada ---- \n");
            break;

        case 2:

            printf("Quantidade em Estoque: %d\n", resultado.quantidadeproduto);
            printf("Saldo Atual: %.2f\n", saldo);
            break;

        case 3:
            system("cls || clear");

            printf("Saindo.\n");
            sleep(1);

            system("cls");

            printf("Saindo..");
            sleep(1);

            system("cls");

            printf("Saindo...");
            sleep(1);

            system("cls");

            return 0;
            break;
        }

    } while (opcao != 3);

    return 0;
}
