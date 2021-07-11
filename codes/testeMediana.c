#include <stdio.h>

int mediana(int vet[], unsigned tamVetor){

    for(unsigned i = 0; i < tamVetor; i++){

        unsigned temp;

        for(unsigned j = i + 1; j < tamVetor; j++){
            if(vet[i] > vet[j]){
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }

    float mediana;

    // achar um jeito melhor para vetores com quantidade par

    if(tamVetor%2 == 1){
        mediana = vet[tamVetor/2];
        printf("\n%.2f\n", mediana);
    }
    else if(tamVetor%2 == 0){
        mediana = vet[tamVetor/2 -1] + vet[tamVetor/2];
        printf("\n%.1f\n", mediana/2);
    }
}

void mostraVetor(int vet[], unsigned n) {
  unsigned x;

  for(x = 0; x< n; x++) {
    printf("%d ",vet[x]);
  }
  printf("\n");
}

int main(){
    unsigned tamVetor, x;

    scanf("%u%*c", &tamVetor);

    int vet[tamVetor];

    for(x = 0; x < tamVetor; x++){
        scanf("%d%*c", &vet[x]);
    }

    mostraVetor(vet, tamVetor);
    mediana(vet, tamVetor);
}

// 0 1 2 3 vet[tam/2] + vet[tam/2 + 1]