#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct Aluno{
    int matricula;
    char nome[30];
    char dt_nascimento[9];
    char curso[20];
    int turma;
    float nota1, nota2, media;
};

 
void cadastrarAluno(struct Aluno *aluno) {
    printf("Digite a matrícula do aluno: \n");
    scanf("%d", &aluno->matricula); 
    printf("Digite o primeiro nome do aluno: \n");
    scanf("%s", aluno->nome);
    printf("Digite a data de nascimento (somente números): \n");
    scanf("%s", aluno->dt_nascimento);
    printf("Digite o curso atual do aluno: \n");
    scanf("%s", aluno->curso);
    printf("Digite a turma: \n");
    scanf("%d", &aluno->turma);
    printf("Digite a nota 1: \n");
    scanf("%f", &aluno->nota1); 
    printf("Digite a nota 2: \n");
    scanf("%f", &aluno->nota2);
    aluno->media = (aluno->nota1 + aluno->nota2) / 2.0;
}


void imprimirAluno(struct Aluno aluno) {
    printf("Nome: %s"
           "\nMatrícula: %d"
           "\nData de nascimento: %s"
           "\nCurso: %s"
           "\nTurma: %d"
           "\nNota 1: %.2f"
           "\nNota 2: %.2f"
           "\nMédia: %.2f\n",
           aluno.nome, aluno.matricula, aluno.dt_nascimento, aluno.curso,
           aluno.turma, aluno.nota1, aluno.nota2, aluno.media);
}

int main()
{
    struct Aluno aluno1, aluno2;
    struct Aluno *ptr1, *ptr2;
    ptr1 = &aluno1;
    ptr2 = &aluno2;
    
    cadastrarAluno(ptr1);
    printf("\n");
    imprimirAluno(aluno1);
    printf("\n");
    cadastrarAluno(ptr2);
    printf("\n");
    imprimirAluno(aluno2);

    return 0;
}