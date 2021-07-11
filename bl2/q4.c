// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao04 que deve atender ao enunciado do exercício. 
// função retorna void porque ela modifica diretamente o vetor e não precisa

//ENDFUNCAOALUNO
int questao04(int vet[], unsigned tamVetor){
    unsigned i, j, confere;
    
    for(i = 0; i < tamVetor; i++){
        for(j = i + 1; j < tamVetor - 1; j++){
            if(vet[i] > vet[j]){
                confere = 1;
            }
        }
    }

    if(confere == 0){
        return 1;
    }
    else{
        return 0;
    }
}

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
   if(questao04(vet,tamVetor)) {
     printf("VERDADEIRO\n");
   }
   else {
     printf("FALSO\n");
   }
   
}
