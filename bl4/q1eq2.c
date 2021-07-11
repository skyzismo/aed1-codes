#include <stdio.h>

//BEGINFUNCAOALUNO

// a questão valeu pelas duas questões

// faca a funcao questaol41 aqui! Não modifique outras partes do programa
int quetaol41(int vet[], unsigned tamVetor){
  unsigned i;
  int temp[tamVetor];

  i = 0;

  while (i < tamVetor)
  {
    temp[i] = vet[i];
    i++;
  }

  for(i = 1; i < tamVetor; i++){
    vet[i] = vet[i] - temp[i - 1];
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

  scanf("%u%*c",&tamanhoVetor);
  int vet[tamanhoVetor];
  ler(vet,tamanhoVetor);
  quetaol41(vet,tamanhoVetor);
  mostrar(vet,tamanhoVetor);
}
