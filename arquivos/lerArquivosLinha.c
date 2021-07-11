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
    unsigned cont = 0;

    arquivoAlunos = fopen("listaAlunosLinha", "r");

    if(arquivoAlunos == NULL){
        printf("Erro na leitura do arquivo selecionado\n");
        exit(1);
    }

    // na funcao de entrada de char, %[^\n] indica "ler até encontrar um ..."
    while (fscanf(arquivoAlunos, "%[^;]%*[ ;]%hhd%*[ ;]%[^;]%*[ ;]%f%*c", aluno.nome,&aluno.pibic, aluno.curso, &aluno.coeficiente) == 4)
    {
        /* code */
        cont++;
        printf("--- Dados do %uo aluno desse arquivo ---\n", cont);
        printf("%s\n", aluno.nome);
        printf("%d\n", aluno.pibic);
        printf("%s\n", aluno.curso);
        printf("%.2f\n", aluno.coeficiente);
    }

    fclose(arquivoAlunos);
    
    return 0;
}
