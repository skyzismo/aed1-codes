#include <stdio.h>

int mediana(int vet[], unsigned tamVetor){
    unsigned x;

    for(x = 0; x < tamVetor; x++){
        if(tamVetor % 2 == 1){
            printf("%d\n", vet[tamVetor / 2]);
        }
    }
}

int main(){
    unsigned tamVetor, x;

    scanf("%u%*c", &tamVetor);

    int vet[tamVetor];

    for(x = 0; x < tamVetor; x++){
        scanf("%d%*c", &vet[x]);
    }

    mediana(vet, tamVetor);
}