#include<stdio.h>


// FACA AQUI A FUNCAO LD conforme o enunciado, de maneira que você complete o programa abaixo.

unsigned LD(float vet1[], float vet2[], unsigned tamVetor){
    unsigned i, j;
    unsigned cont = 0;

    //verifica o padrão de constantes
    j = vet2[0] / vet1[0];

    //verificacao por via negativa!!!!
    for(i = 0; i < tamVetor; i++){
        if(vet1[i] != j * vet2[i] || vet2[i] != j * vet1[i]){
            return 0;
        }
    }
    return 1;
}


// FIM DA FINCAO LD



int main() {
   unsigned tamVetor;
   unsigned x;

   scanf("%u%*c",&tamVetor);
   float vet1[tamVetor], vet2[tamVetor];

   for(x = 0; x< tamVetor; x++) {
     scanf("%f%*c",&vet1[x]);
   }
   for(x = 0; x< tamVetor; x++) {
     scanf("%f%*c",&vet2[x]);
   }	
	
	
   if(LD(vet1, vet2, tamVetor)) {
     printf("1\n");
   }
   else {
     printf("0\n");
   }

}
