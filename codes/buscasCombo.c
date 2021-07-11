#include <stdio.h>
#include <string.h>

typedef struct tipoAluno
{
    char nome[50];
    int  matricula;
    char curso[20];

}tipoAluno;

//SE DER CERTO, TESTAR OUTRO NOME PARA O TIPOALUNO PQ PRA MIM FICA CONFUSOOOOO!
int buscaSequencial(tipoAluno aluno[], unsigned tamVetor, char chave[]){
    for(unsigned i = 0; i < tamVetor; i++){
        //quando o nome for igual
        if(strcmp(aluno[i].nome, chave) == 0){
            return i;
        }
    }
    return -1;
}

int buscaBinaria(tipoAluno aluno[], unsigned tamVetor, char chave[]){
    //só funciona para vetores ordenados 
    
    int inicio, fim, meio;

    inicio = 0;
    fim = tamVetor - 1;

    while (inicio <= fim)
    {
        meio = (inicio + fim)/2;
        //compara se a chave eh maior que o elemento meio
        if(strcmp(chave, aluno[meio].nome) > 0){
            //aqui o vetor apenas é buscado do meio em ordem ordenado
            inicio = meio + 1;
        }
        else{
            //compara se a chave eh menor que o elemento meio
            if(strcmp(chave, aluno[meio].nome) < 0){
                fim = meio - 1;
            }
            //a chave é igual ao elemento que restou
            else{
                return meio;
            }
        }
    }
    return -1;
    
}

int main(int argc, char const *argv[])
{
    tipoAluno aluno[3];
    char chave[50];
    int pos;

    strcpy(aluno[0].nome, "Lucas");
    strcpy(aluno[0].curso, "EC");

    strcpy(aluno[1].nome, "Ana Julia");
    strcpy(aluno[1].curso, "CC");

    strcpy(aluno[2].nome, "Luanna Kler");
    strcpy(aluno[2].curso, "ES");

    //percorre os alunos e salva suas matrículas
    for(unsigned i = 0; i < 3; i++){
        aluno[i].matricula = i;
    }

    scanf("%[^\n]%*c", chave);

    // pos = buscaSequencial(aluno, 3, chave);
    pos = buscaBinaria(aluno, 3, chave);

    if(pos != -1){
        printf("Curso: %s\n", aluno[pos].curso);
        printf("Matricula: %d\n", aluno[pos].matricula);
    }
    else{
        printf("Aluno nao encontrado na base de dados\n");
    }
    return 0;
}
