#include <stdio.h>

// BEGINFUNCAOALUNO
// FACA SUA FUNCAO AQUI. NAO ALTERE O RESTO DO PROGRAMA!
int buscarBinaria(int vet[], unsigned tamVetor, int chave){
    //só funciona para vetores ordenados 
    
    int inicio, fim, meio, verifica;

    inicio = 0;
	verifica = 0;
    fim = tamVetor - 1;

    while (inicio <= fim)
    {
        meio = (inicio + fim)/2;
        //compara se a chave eh maior que o elemento meio
        if(chave > vet[meio]){
            //aqui o vetor apenas é buscado do meio em ordem ordenado
            inicio = meio + 1;
        }
        else{
            //compara se a chave eh menor que o elemento meio
            if(chave < vet[meio]){
                fim = meio - 1;
            }
            //a chave é igual ao elemento que restou
            else{
                return meio;
            }
        }
    }
}






//ENDFUNCAOALUNO
	


void ler(int v[], unsigned tamanhoVetor) {
  unsigned cont;
  for(cont = 0; cont < tamanhoVetor; cont++) {
    scanf("%d%*c",&v[cont]);
  }
} 


int main() {
  unsigned tamanhoVetor;
  int chave;
  scanf("%d%*c",&chave);
  scanf("%u%*c",&tamanhoVetor);
  int vet[tamanhoVetor];
  ler(vet,tamanhoVetor);
  if(buscarBinaria(vet,tamanhoVetor,chave)) {
    printf("SIM");
  }
  else {
 printf("NAO");
  }
}
