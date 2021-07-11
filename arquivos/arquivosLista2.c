#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipoAluno{
    char nome[30];
    char pibic;
    char curso[30];
    float coeficienteRendimento;
}tipoAluno;

typedef struct tipoNo{
    tipoAluno dado;
    struct tipoNo *ptr_proximo;
}tipoNo; //determina a existência do tipoNo

typedef struct tipoLista{
    tipoNo *ptr_primeiro;
    tipoNo *ptr_ultimo;
    unsigned numElementos;
    char nomeEquipe[30];
}tipoLista;

void mostraAluno(tipoAluno aluno){
    printf("%s\n", aluno.nome);
    printf("%s\n", aluno.curso);
    printf("%.2f\n", aluno.coeficienteRendimento);

    if(aluno.pibic == 1){
        printf("O aluno faz pibic.\n");
    }else{
        printf("O aluno não faz pibic.\n");
    }
}

void mostrarLista(tipoLista *lista){
    tipoNo *auxiliar;

    auxiliar = lista->ptr_primeiro;

    while (auxiliar)
    {
        mostraAluno(auxiliar->dado);
        auxiliar = auxiliar->ptr_proximo;
    }
     
}

void inserirNoFimDaLista(tipoLista *lista, tipoAluno *aluno){
    tipoNo *auxiliar = (tipoNo*) malloc(sizeof(tipoNo));

    auxiliar->dado = *aluno;
    auxiliar->ptr_proximo = NULL;

    if(lista->ptr_ultimo){
        lista->ptr_ultimo->ptr_proximo = auxiliar;
    }
    else{
        lista->ptr_ultimo = auxiliar;
    }

    lista->ptr_ultimo = auxiliar;
    lista->numElementos++;
}

void criarLista(tipoLista *lista){
    lista->ptr_primeiro = NULL;
    lista->ptr_ultimo = NULL;
    lista->numElementos++;
}

int main(int argc, char const *argv[])
{
    FILE *fd;
    tipoAluno aluno;
    tipoLista listaEncadAlunos;

    criarLista(&listaEncadAlunos);

    fd = fopen("listaAlunosLinha", "r");

    if(fd == NULL){
        printf("Erro na leitura do arquivo selecionado\n");
        exit(1);
    }

    while (fscanf(fd, "%[^;]%*[ ;]%hhd%*[ ;]%[^;]%*[ ;]%f%*c", aluno.nome,&aluno.pibic, aluno.curso, &aluno.coeficienteRendimento) == 4){
        inserirNoFimDaLista(&listaEncadAlunos, &aluno);
    }

    fclose(fd);

    mostrarLista(&listaEncadAlunos);
    
    return 0;
}
