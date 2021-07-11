#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct tipoAluno
{
    char nome[10];
    char curso[3];
    float coeficiente;
    char pibic;
}tipoAluno;

// maneira pouco usual, mas como começou
void mostraVersao1a(tipoAluno *a){
    printf("%s\n", (*a).nome);
    printf("%s\n", (*a).curso);
    printf("%.1f\n", (*a).coeficiente);
    if((*a).pibic == 1){
        printf("O aluno faz PIBICzudo\n");
    }
    else{
        printf("O aluno não faz PIBICzudo\n");
    }
}

// mesma coisa da função anterior, mas de maneira mais usual, com setinha
void mostraVersao1b(tipoAluno *a){
    printf("%s\n", a->nome);
    printf("%s\n", a->curso);
    printf("%.1f\n", a->coeficiente);
    if(a->pibic == 1){
        printf("O aluno faz PIBICzudo\n");
    }
    else{
        printf("O aluno não faz PIBICzudo\n");
    }
}

// tipo diferente de parametro, sem ser ponteiro
void mostraVersao2(tipoAluno a){
    printf("%s\n", a.nome);
    printf("%s\n", a.curso);
    printf("%.1f\n", a.coeficiente);
    if(a.pibic == 1){
        printf("O aluno faz PIBICzudo\n");
    }
    else{
        printf("O aluno não faz PIBICzudo\n");
    }
}


int main(int argc, char const *argv[])
{
    // esse aluno copia a struct inteira
    tipoAluno alunoA;
    // esse outro aluno copia apenas o endereço da struct
    tipoAluno *alunoB = (tipoAluno*)malloc(sizeof(tipoAluno));

    // preenchimento dos campos da struct
    strcpy(alunoA.nome, "Lucas G.");
    strcpy(alunoA.curso, "EC");
    alunoA.coeficiente = 7.8;
    alunoA.pibic = 0;

    // prenchimento da variavel que aponta para o tipo tipoAluno
    strcpy(alunoB->nome, "Juliana M"); // equivale a (*alunoB).nome
    strcpy(alunoB->curso, "CC");
    alunoB->coeficiente = 10;
    alunoB->pibic = 1;

    mostraVersao1a(&alunoA);
    printf("\n");
    mostraVersao1b(alunoB);
    printf("\n");
    mostraVersao2(alunoA);
    printf("\n");
    mostraVersao2(*alunoB);
    free(alunoB);

    return 0;
}