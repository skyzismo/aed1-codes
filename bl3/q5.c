#include <stdio.h>

//BEGINFUNCAOALUNO
int computaDiferencas(int vet[], unsigned tamVetor, int delta){
    unsigned i;

    for(i = 0; i < tamVetor; i++){
        vet[i] = vet[i] - delta;
    }
    return vet[i];
}


//ENDFUNCAOALUNO



void ler(int v[], unsigned tamanhoVetor) {
  unsigned cont;
  for(cont = 0; cont < tamanhoVetor; cont++) {
    scanf("%d%*c",&v[cont]);
  }
} 


void mostrar(int v[], unsigned tamanhoVetor) {
  unsigned cont;
  for(cont = 0; cont < tamanhoVetor -1; cont++) {
    printf("%d ",v[cont]);
  }
  if(tamanhoVetor) { 
	 printf("%d",v[cont]);
  }
} 



int main() {
  unsigned tamanhoVetor;
  int delta;
  scanf("%d%*c",&delta);
  scanf("%u%*c",&tamanhoVetor);
  int vet[tamanhoVetor];
  ler(vet,tamanhoVetor);
  computaDiferencas(vet,tamanhoVetor,delta);
  mostrar(vet,tamanhoVetor);
}
