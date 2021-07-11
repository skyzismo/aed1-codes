#include <stdio.h>
#include <string.h>


typedef struct tipoCidade {
  char designacao[100];
  unsigned populacao;
  float pib;
  float arrecadacaoAnual;
} tipoCidade;

// ESQUEVA AQUI AS DUAS FUNCOES QUE ESTAO FALTANDO. 
//NAO MODIFIQUE O CÓDIGO ANTES OU DEPOIS DESTE TRECHO.




// NAO MODIFIQUE O RESTANTE DO PROGRAMA:


void mostraCidade(tipoCidade cidade) {
  printf("Designação : %s\n",cidade.designacao);
  printf("Populacao  : %d\n",cidade.populacao);
  printf("Pib:       : R$ %.2f\n",cidade.pib);
  printf("Arrecadação: R$ %.2f\n",cidade.arrecadacaoAnual);
}

int buscaBinaria(tipoCidade v[], unsigned tam, char nome[]){
    //só funciona para vetores ordenados 
    
    int inicio, fim, meio;

    inicio = 0;
    fim = tam - 1;

    while (inicio <= fim)
    {
        meio = (inicio + fim)/2;
        //compara se a chave eh maior que o elemento meio
        if(strcmp(nome, v[meio].designacao) > 0){
            //aqui o vetor apenas é buscado do meio em ordem ordenado
            inicio = meio + 1;
        }
        else{
            //compara se a chave eh menor que o elemento meio
            if(strcmp(nome, v[meio].designacao) < 0){
                fim = meio - 1;
            }
            //a chave é igual ao elemento que restou
            else{
                return meio;
            }
        }
    }
    return -1;
    
}

void ordenaCidades(tipoCidade v[], unsigned tam){
    //os iteradores precisam ser do tipo int, e o pivot do tipo do vetor
    int i, j;
    tipoCidade pivot;
    
    for(i = 1; i < tam; i++){
        pivot = v[i];
        j = i - 1;

        while((j >= 0) && (strcmp(v[j].designacao, pivot.designacao) < 0))
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = pivot;
    }
}

void leCidades(tipoCidade v[], unsigned tam) {
  int x;

  for(x = 0; x< tam; x++) {
    scanf("%[^\n]%*c",v[x].designacao);
    scanf("%d%*c",&v[x].populacao);
    scanf("%f%*c",&v[x].pib);
    scanf("%f%*c",&v[x].arrecadacaoAnual);
  }
}



int main() {
  int pos;
  char nome[100];
  unsigned tam;

  scanf("%d%*c",&tam);

  tipoCidade v[tam];

  leCidades(v,tam);
  ordenaCidades(v,tam); /*PRIMEIRO TRABALHO*/
  /*PARTE 1*/
  scanf("%[^\n]%*c",nome);

  pos = buscaBinaria(v,tam,nome); /*SEGUNDO TRABALHO*/
  if(pos != -1) {
    mostraCidade(v[pos]);
  }
  else {
    printf("%s Não consta na base de dados\n",nome);
  }
  scanf("%[^\n]%*c",nome);
  
  pos = buscaBinaria(v,tam,nome);
  if(pos != -1) {
    mostraCidade(v[pos]);
  }
  else {
    printf("%s Não consta na base de dados\n",nome);
  }
  /*PARTE 2*/

  printf("\nBase de Dados Ordenada:\n");
  for(pos = 0; pos < tam; pos++) {
    mostraCidade(v[pos]);

  }
  /*PARTE 3*/

}
