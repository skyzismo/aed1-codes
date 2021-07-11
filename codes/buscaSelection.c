#include <stdio.h>

float ordenaSelecao(float vetor[], unsigned tamVetor){
    unsigned penultimo, i, j, posMenor;
    float temp;

    penultimo = tamVetor - 1;

    for(i = 0; i < penultimo; i++){
        posMenor = i;
        for(j = i + 1; j < tamVetor; j++){
            if(vetor[j] < vetor[posMenor]){
                posMenor = j;
            }
        }
        //aqui realiza as trocas
        temp = vetor[i];
        vetor[i] = vetor[posMenor];
        vetor[posMenor] = temp;
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

    ordenaSelecao(vetor, tamVetor);
    mostraVetor(vetor, tamVetor);
    return 0;
}