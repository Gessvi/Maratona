#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct dados_alunos
    {
        char nome[200];
        char data[10];
        float nota1;
        float nota2;
        float media;
    };

float calcularMedia(struct dados_alunos *aluno){
    float soma = 0;

    int i ;

    for ( i = 0; i < 5; i++)
    {
       soma = aluno[i].nota1 + aluno[i].nota2;
       aluno[i].media = soma/(float) 2;
        soma = 0;
    }

     return aluno[i].media; 
  }  


int main(){
    setlocale(LC_ALL ,"portuguese");

    struct dados_alunos aluno[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Insira o nome do aluno: \n");
        gets(aluno[i].nome);

                printf("Insira a data de nascimento: \n");
        gets(aluno[i].data);

        printf("Insira a primeira nota: \n" );
        scanf("%f" ,&aluno[i].nota1);

        printf("Insira a segunda nota: \n" );
        scanf("%f" ,&aluno[i].nota2);

        fflush(stdin);


    system("cls || clear");

    }

//exibir

 aluno[i].media = calcularMedia(aluno); 
for ( i = 0; i < 5; i++)
{
    printf("Nome do Aluno: %s \n",aluno[i].nome);
    printf("Data de Nascimento: %s \n" ,aluno[i].data);
    printf("Media: %.1f \n" ,aluno[i].media);
    fflush(stdin);

    if (aluno[i].media >= 7)
    {
        printf("\n \t ---- Aprovado! ----\n");
    } else 
    {
        printf("\n \t ---- Reprovado! ----\n");
    }

    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");

}
return 0;
}
