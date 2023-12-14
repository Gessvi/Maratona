#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define tam 3

void titulo()
{
    printf("\n \t ----- Lista de Contatos ----- \n");
}

struct dados_contatos
{
    char nome[200];
    char email[200];
    char telefone[200];
};

void buscarContato(struct dados_contatos *contatos, char contato[])
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (strcmp(contatos[i].nome, contato) == 0)
        {
            printf("Contato Escolhido :%s \n ", contatos[i].nome);
            printf("Telefone:%s \n", contatos[i].telefone);
            return;
        }
    }
    printf("\n Contato nao encontrado \n");
}

int main()
{
    setlocale(LC_ALL, "portuguese ");

    struct dados_contatos contato[tam];
    char contato[200];
    int i;
    titulo();

    printf("\n \t Cadastre 3 contatos \n");
    for (i = 0; i <= tam; i++)
    {

        printf("Insira seu nome: \n");
        gets (contatos[i].nome);

        printf("Insira seu Email: \n");
        gets(contatos[i].email);

        printf("Insira seu numero de telefone: \n");
        gets (contatos[i].telefone);
    }

    printf("Insira o Nome do Contato Escolhido: \n");
    gets(contato);

printf ("\n");
 
printf ("\n \t --- Cadastros Concluidos --- \n");

buscarContato (contatos, contato);
return 0;
}
