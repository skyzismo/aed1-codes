#include <stdio.h>

int buscaSeq(float vetor[], unsigned tamVetor, float chave){
    for(unsigned i = 0; i < tamVetor; i++){
        if(vetor[i] == chave){
            return 1;
        }
    }
    return 0;
}

float lerVetor(float vetor[], unsigned tamVetor){
    for(unsigned i = 0; i < tamVetor; i++){
        scanf("%f%*c", &vetor[i]);
    }
    return vetor[tamVetor];
}

int main(int argc, char const *argv[])
{
    float chave;
    unsigned tamVetor;
    float vetor[tamVetor];

    scanf("%f%*c", &chave);
    scanf("%u%*c", &tamVetor);

    lerVetor(vetor, tamVetor);

    if(buscaSeq(vetor, tamVetor, chave)){
        printf("chave encontrada\n");
    }
    else{
        printf("chave nao encontrada\n");
    }

}
