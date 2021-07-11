#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int removerPrimeiroDaLista(tipoLista *lista, tipoAluno *res){
    tipoNo *tmp;

    tmp = lista->ptr_primeiro;

    if(tmp){
        lista->ptr_primeiro = tmp->ptr_proximo;

        if(lista->ptr_primeiro == NULL){
            lista->ptr_ultimo = NULL;
        }

        *res = tmp->dado;
        free(tmp);
        lista->numElementos--;

        return 1;
    }
    return 0;
}

int removerDaLista(tipoLista *lista, char *nome){
    tipoNo *auxiliar, *tmp;

    if(lista->ptr_primeiro){
        if(!strcmp(nome, lista->ptr_primeiro->dado.nome)){
            tmp = lista->ptr_primeiro;
            lista->ptr_primeiro = tmp->ptr_proximo;
            if(lista->ptr_primeiro == NULL){
                lista->ptr_ultimo =  NULL;
            }
            free(tmp);
            lista->numElementos--;

            return 1;
        }

        auxiliar = lista->ptr_primeiro;

        while (auxiliar->ptr_proximo)
        {
            if(!strcmp(nome, auxiliar->ptr_proximo->dado.nome)){
                tmp = auxiliar->ptr_proximo;
                if(tmp == lista->ptr_ultimo){
                    lista->ptr_ultimo =  auxiliar;
                }
                auxiliar->ptr_proximo = tmp->ptr_proximo;
                free(tmp);
                lista->numElementos--;

                return 1;
            }

            auxiliar = auxiliar->ptr_proximo;
        }
    }
    return 0;
}

// como a função retorna endereço, ela precisa ser uma "função ponteiro"
tipoAluno * buscarElementoNaLista(tipoLista *lista, char *nome){
    tipoNo *auxiliar;

    auxiliar = lista->ptr_primeiro;

    while (auxiliar)
    {
        if(!strcmp(nome, auxiliar->dado.nome)){ //se for diferente de zero, a chave é igual ao dado de comparação

            return &(auxiliar->dado);//o endereço do registro(struct) é retornado, caso o aluno conste na lista
        }
        auxiliar = auxiliar->ptr_proximo;
    }
    // caso o loop de busca seja interriompido e o nome da chave não seja encontrado, a fn retorna NULL
    return NULL;
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


void inserirNoInicioDaLista(tipoLista *lista, tipoAluno *aluno){
    tipoNo *auxiliar = (tipoNo*) malloc(sizeof(tipoNo));

    auxiliar->dado = *aluno;
    auxiliar->ptr_proximo = lista->ptr_primeiro;
    if(lista->ptr_ultimo == NULL){
        lista->ptr_ultimo = auxiliar;
    }
    lista->ptr_primeiro = auxiliar;
    lista->numElementos++;
}

void inserirNaLista(tipoLista *lista, tipoAluno *aluno){
    // auxiliar é responsável pela criação dos nós e operação sobre eles
    tipoNo *auxiliar = (tipoNo*) malloc(sizeof(tipoNo));

    auxiliar->dado = *aluno;
    auxiliar->ptr_proximo = lista->ptr_primeiro;
    lista->ptr_primeiro = auxiliar;
    lista->numElementos++;
}

void criarLista(tipoLista *lista){
    lista->ptr_primeiro = NULL;
    lista->ptr_ultimo = NULL;
    lista->numElementos++;
}

int main(int argc, char const *argv[])
{

    tipoAluno *aluno = (tipoAluno*) malloc(sizeof(tipoAluno));
    tipoLista listaAlunos;
    tipoAluno *verificador;
    char nomeDoAluno[30];

    criarLista(&listaAlunos);

    strcpy(aluno->nome, "Lucas G.");
    strcpy(aluno->curso, "EC");
    aluno->coeficienteRendimento = 7.8;
    aluno->pibic = 0;

    inserirNoInicioDaLista(&listaAlunos, aluno);

    strcpy(aluno->nome, "Raquel");
    strcpy(aluno->curso, "ES");
    aluno->coeficienteRendimento = 10;
    aluno->pibic = 1;

    inserirNoInicioDaLista(&listaAlunos, aluno);

    printf("\nEntre com o nome do aluno que você deseja encontrar: ");
    scanf("%[^\n]%*c", nomeDoAluno);

    verificador = buscarElementoNaLista(&listaAlunos, nomeDoAluno);

    if(verificador){
        printf("\nO aluno consta em nossa lista :)\n");
        mostraAluno(*verificador);
    }
    else{
        printf("\nO aluno não consta em nossa lista :(\n");
    }

    /*if(removerDaLista(&listaAlunos, nomeDoAluno)){
        printf("\n\nAluno removido com sucesso!\n");
    }
    else{
        printf("O aluno não consta em nossa lista, por isso não foi removido.\n");
    }*/

    mostrarLista(&listaAlunos);

    free(aluno);
    return 0;
}
