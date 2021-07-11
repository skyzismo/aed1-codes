#include <stdio.h>

float ordenaInsercao(float vetor[], unsigned tamVetor){
    unsigned i, j;
    float pivot;

    for(i = 1; i < tamVetor; i++){
        pivot = vetor[i];
        j = i - 1;
        while ((j >= 0) && (vetor[j] > pivot))
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = pivot;
    }
    return vetor[i];
}

void mostraVetor(float vet[], unsigned n) {
  unsigned x;

  for(x = 0; x< n; x++) {
    printf("%f ",vet[x]);
  }
  printf("\n");
}


int main(int argc, char const *argv[])
{
    unsigned tamVetor;

    scanf("%u%*c", &tamVetor);

    float vetor[tamVetor];

    for(unsigned i = 0; i < tamVetor; i++){
        scanf("%f%*c", &vetor[i]);
    }

    ordenaInsercao(vetor, tamVetor);
    mostraVetor(vetor, tamVetor);
    return 0;
}