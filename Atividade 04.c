#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Conta_Bancaria
{
    char numeroConta[200];
    char nomeTitular[200];
    float saldo;
    char tipoConta[200];
    float dinheiroDepositado;
    float dinheiroRetirado;
};
struct Conta_Bancaria conta;
void depositar(struct Conta_Bancaria conta)
{
    float deposito = 0;

    deposito = conta.dinheiroDepositado + conta.saldo;
    printf("\n \t *Quantidade Total do Saldo após o deposito: R$%.3f \n", deposito);
}

void sacar(struct Conta_Bancaria conta)
{
    float sacar;
    float saldo;

    sacar = conta.saldo - conta.dinheiroRetirado;
    printf("\n \t *Quantidade Total do Saldo após a retirada de dinheiro: R$%.3f \n", sacar);
    if (sacar < 0)
    {
        printf("\n -Saldo negativo na conta!\n");
        printf("\n Você terá 10 dias para resolver a situação-\n");
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct Conta_Bancaria conta;

    int codigo;
    float dinheiroDepositado;
    float dinheiroRetirado;

    printf("Insira o número da conta: \n");
    gets(conta.numeroConta);

    printf("Insira o nome do titular: \n");
    gets(conta.nomeTitular);

    printf("Insira o tipo de conta: \n");
    gets(conta.tipoConta);

    printf("Insira a quantidade de saldo: \n");
    scanf("%f", &conta.saldo);

    system("cls || clear");

    printf("----------------------------------------\n");

    printf("(1) Depositar Dinheiro\n");

    printf("(2) Sacar Dinheiro\n");
    scanf("%d", &codigo);

    system("cls || clear");

    fflush(stdin);

    switch (codigo)
    {
    case 1:
        printf("Insira o valor para depositar: \n");
        scanf("%f", &conta.dinheiroDepositado);
        system("cls || clear");

        printf("° Numero da Conta:  %s\n", conta.numeroConta);
        printf("° Nome do Titular: %s\n", conta.nomeTitular);
        printf("° Tipo de Conta: %s\n", conta.tipoConta);

        printf("* Total de dinheiro depositado: R$%.3f\n", conta.dinheiroDepositado);
        depositar(conta);

        break;

    case 2:
        printf("Insira o valor de retirada: \n");
        scanf("%f", &conta.dinheiroRetirado);
        system("cls || clear");

        printf("° Numero da Conta:  %s\n", conta.numeroConta);
        printf("° Nome do Titular: %s\n", conta.nomeTitular);
        printf("° Tipo de Conta: %s\n", conta.tipoConta);

        printf("* Total de dinheiro retirado: R$%.3f\n", conta.dinheiroRetirado);
        sacar(conta);

        break;

    default:
        printf("Opcao invalida!\n");
        break;
    }
    return 0;
}
