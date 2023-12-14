#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define MAX_FUNCIONARIOS 100

void menu()
{
    printf("_________________________________\n");
    printf("                MENU             \n");
    printf("__________________________________\n");
}


struct Funcionario
{
    char nome[50];
    char cargo[50];
    float salario;
};

float calcularMediaSalarial(struct Funcionario *funcionarios, int numFuncionarios, char *cargo)
{
    float somaSalarios = 0;
    int contador = 0;
    int i;

    for (i = 0; i < numFuncionarios; i++)
    {
        if (strcmp(funcionarios[i].cargo, cargo) == 0)
        {
            somaSalarios += funcionarios[i].salario;
            contador++;
        }
    }

    return (contador > 0) ? (somaSalarios / contador) : 0;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct Funcionario funcionarios[MAX_FUNCIONARIOS];

    int numFuncionarios;
    int i;

    menu();

    printf("\n \t -- Seja Bem - Vindo -- \n");
    printf("\n\n");

    printf("Insira a quantidade de funcionarios a serem registrados: ");
    scanf("%d", &numFuncionarios);

    system("cls");

    for (i = 0; i < numFuncionarios; i++)
    {
        fflush (stdin);

        printf("Insira o nome do %dº funcionario: ", i + 1);
        scanf("%s", funcionarios[i].nome);

fflush(stdin);

        printf("Insira o cargo do funcionario: ", i + 1);
        scanf("%s", funcionarios[i].cargo);

fflush (stdin);

        printf("Insira o salário do funcionario: ", i + 1);
        scanf("%f", &funcionarios[i].salario);

        system("cls");
    }

    char cargoProgramador[50];

    printf("Insira o cargo que deseja calcular: ");
    scanf("%s", cargoProgramador);

    system("cls");

    float mediaSalarialProgramadores = calcularMediaSalarial(funcionarios, numFuncionarios, cargoProgramador);

    printf("Exibindo resultados.");
    sleep(1);

    system("cls");

    printf("Exibindo resultados..");
    sleep(1);

    system("cls");

    printf("Exibindo resultados...");
    sleep(1);

    system("cls");

    printf("Exibindo resultado: ");
    printf("\n\n");

    if (mediaSalarialProgramadores > 0)
    {
        printf("A media salarial do(a) %s é: R$ %.2f\n", cargoProgramador, mediaSalarialProgramadores);
    }
    else
    {
        printf("Nenhum funcionario encontrado com o cargo %s.\n", cargoProgramador);
    }
    return 0;
}
