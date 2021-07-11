#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipoAluno
{
    char nome[10];
    char curso[3];
    float coeficiente;
    char pibic;

}tipoAluno;

typedef struct tipoNo
{
    tipoAluno dado; //informação da struct de cima que ficará dentro de cada nó
    struct tipoNo *ptr_prox; //ponteiro que terá o endereço para o próximo nó

}tipoNo;

typedef struct tipoLista
{
    tipoNo *ptr_prim; //ponteiro para nós

}tipoLista;

void mostraAluno(tipoAluno aluno){
    printf("%s\n", aluno.nome);
    printf("%s\n", aluno.curso);
    printf("%.1f\n", aluno.coeficiente);
    if(aluno.pibic == 1){
        printf("O aluno faz PIBICzudo\n");
    }
    else{
        printf("O aluno não faz PIBICzudo\n");
    }
}

void imprimeUltimodaLista(tipoLista *lista){
    if(lista->ptr_prim){ //se a lista for vazia, não imprime nada
        tipoNo *auxilar;

        auxilar = lista->ptr_prim;

        while (auxilar->ptr_prox)
        {
            auxilar = auxilar->ptr_prox;
        }
        printf("%s\n", auxilar->dado.nome);
        
    }
}

// como a função retorna endereço, ela precisa ser uma "função ponteiro"
tipoAluno *buscaLista(tipoLista *lista, char *nome){ //busca um elemento na lista através de uma chave
    tipoNo *auxiliar;

    auxiliar = lista->ptr_prim; 

    while (auxiliar) //enquanto for diferente de NULL
    {
        // quando a comparação é zero, é porque são diferentes
        if(!strcmp(nome, auxiliar->dado.nome)){
            return &(auxiliar->dado);
        }
        auxiliar = auxiliar->ptr_prox;
    }
    return NULL;
}

void mostraLista(tipoLista *lista){
    tipoNo *auxiliar;

    auxiliar = lista->ptr_prim;

    while (auxiliar) //enquanto for diferente de NULL
    {
        mostraAluno(auxiliar->dado);
        auxiliar = auxiliar->ptr_prox;
    }
}

void removeLista(tipoLista *lista, tipoAluno *aluno){

}

void insereLista(tipoLista *lista, tipoAluno *aluno){
    tipoNo *auxiliar;

    auxiliar = (tipoNo*)malloc(sizeof(tipoNo)); //alocação de um novo nó

    auxiliar->dado = *aluno; //o aux recebe toda a "folha de dados" do registro tipoAluno
    auxiliar->ptr_prox = lista->ptr_prim; //o aux, sendo o nó atual, recebe o endereço do ultimo nó da lista 
    lista->ptr_prim = auxiliar; //a lista recebe o endereço do nó atual
}

void criaLista(tipoLista *ptr_lista){
    // as listas precisam sempre ser inicializadas com NULL
    ptr_lista->ptr_prim = NULL;
}

int main(int argc, char const *argv[])
{
    tipoAluno *aluno = (tipoAluno*)malloc(sizeof(tipoAluno));
    tipoAluno *verficador;
    tipoLista listaDeAlunos;

    criaLista(&listaDeAlunos);

    strcpy(aluno->nome, "Juliana"); // equivale a (*alunoB).nome
    strcpy(aluno->curso, "CC");
    aluno->coeficiente = 10;
    aluno->pibic = 1;

    insereLista(&listaDeAlunos, aluno);

    // mostraLista(aluno);

    strcpy(aluno->nome, "Lucas"); // equivale a (*alunoB).nome
    strcpy(aluno->curso, "EC");
    aluno->coeficiente = 7.8;
    aluno->pibic = 0;

    insereLista(&listaDeAlunos, aluno);

    // mostraLista(aluno);

    strcpy(aluno->nome, "Luanna");
    strcpy(aluno->curso, "ES");
    aluno->coeficiente = 6.0;
    aluno->pibic = 1;


    insereLista(&listaDeAlunos, aluno);

    imprimeUltimodaLista(&listaDeAlunos);


    // mostraLista(&listaDeAlunos);

    /*verficador = buscaLista(&listaDeAlunos, "Luana");

    if(verficador){
        printf("Aluno encontrado!\n");
        // a funcao mostra aluno aceita endereços como entradas
        mostraAluno(*buscaLista(&listaDeAlunos, "Lucas"));
    }
    else{
        printf("Aluno nao encontrado\n");
    }*/

    free(aluno);

    return 0;
}