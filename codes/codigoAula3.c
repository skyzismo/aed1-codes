#include<stdio.h>
#define tamVetor 6

int main(){
    int vet[tamVetor] = {2, 4, 6, 8, 10, 12};
    int x, y, z, temp;

    z = tamVetor - 1;

    for(x = 0; x < z; x++){

        //temp serve como variavel temporaria, recebe o valor da ultima posicao
        temp = vet[z];
        //aqui de fato ocorre a troca, e a ultima posicao recebe o primeiro valor
        vet[z] = vet[x];
        //aqui a primeira posicao recebe o ultimo valor guardado no temp
        vet[x] = temp;

        z--;

        /*for(z = tamVetor - 1; z >= 0; z--){
            temp = vet[z];
            vet[z] = vet[x];
            vet[x] = temp;
        }*/
    }

    for(x = 0; x < tamVetor; x++){
        printf("%d\n", vet[x]);
    }
}