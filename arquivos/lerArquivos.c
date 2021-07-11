#include <stdio.h>
#include <stdlib.h>

typedef struct tipoAluno{
    char nome[10];
    char pibic;
    char curso[5];
    float coeficiente;
}tipoAluno;

int main(int argc, char const *argv[])
{
    /* code */
    tipoAluno aluno;
    FILE *arquivoAlunos;

    arquivoAlunos = fopen("listaAlunos", "r");

    if(arquivoAlunos == NULL){
        printf("Erro na leitura do arquivo selecionado\n");
        exit(1);
    }

    // na funcao de entrada de char, %[^\n] indica "ler até encontrar um ..."
    while (fscanf(arquivoAlunos, "%[^\n]%*c", aluno.nome) == 1)
    {
        /* code */
        printf("%s\n", aluno.nome);
        fscanf(arquivoAlunos, "%hhd%*c", &aluno.pibic);
        printf("%d\n", aluno.pibic);
        fscanf(arquivoAlunos, "%[^\n]%*c", aluno.curso);
        printf("%s\n", aluno.curso);
        fscanf(arquivoAlunos, "%f%*c", &aluno.coeficiente);
        printf("%.2f\n", aluno.coeficiente);
    }

    fclose(arquivoAlunos);
    
    return 0;
}
