// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao03 que deve atender ao enunciado do exercício. 
// função retorna void porque ela modifica diretamente o vetor e não precisa
int questao03(int vet[], unsigned tamVetor){
	unsigned temp, x, z;
	
	z = tamVetor - 1;
	
	for(x = 0; x < z; x++){
		temp = vet[z];
		vet[z] = vet[x];
		vet[x] = temp;
		z--;
	}
	
	return vet[x];
}
//ENDFUNCAOALUNO


// ABAIXO CODIGO USADO PARA TESTE DA FUNCAO. NÃO MOFIQUE!

#include <stdio.h>

// mostra dados de um vetor

void mostraVetor(int vet[], unsigned n) {
  unsigned x;

  for(x = 0; x< n; x++) {
    printf("%d ",vet[x]);
  }
  printf("\n");
}

int main() {
   unsigned tamVetor;
   unsigned x;

   scanf("%u%*c",&tamVetor);
   int vet[tamVetor];

   for(x = 0; x< tamVetor; x++) {
     scanf("%d%*c",&vet[x]);
   } 
   questao03(vet,tamVetor);
   mostraVetor(vet,tamVetor);
}

