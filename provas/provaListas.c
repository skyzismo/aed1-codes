#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef  struct {
 char nome[30]; 
 char endereco[20];
float altura; 
           } tipoDados;


typedef struct tipoNo {
tipoDados d;
struct tipoNo *prox;
} tipoNo;

typedef struct tipoLista {
tipoNo *prim;
}  tipoLista;





void insereNaLista(tipoLista *pLista, tipoDados *al) {

  tipoNo *aux;
  aux = (tipoNo *) malloc (sizeof(tipoNo) );
  aux->d = *al;
  aux->prox = pLista->prim;
  pLista->prim = aux;
}



void criaLista(tipoLista *pLista) {
  pLista->prim = NULL;
}




int listaVazia(tipoLista *p) {
	
	return p->prim == NULL;	
}


// COLOQUE AQUI SEU CODIGO
float mediaLista(tipoLista *lista){
    tipoNo *auxiliar;
    unsigned qtd = 0;
    float soma = 0.0;

    auxiliar = lista->prim;

    while (auxiliar)
    {
        soma = soma + auxiliar->d.altura;

        auxiliar = auxiliar->prox;

        qtd++;
    }
    if(qtd){
        soma = soma / qtd;
    }
    return soma;
}

// FIM DO SEU CODIGO



void lerValoresParaLista(tipoLista *p, int tam) {
  tipoDados val;
 
  for(int x = 0; x< tam; x++) {
     scanf("%[^\n]%*c",val.nome);
     scanf("%[^\n]%*c",val.endereco);
     scanf("%f%*c",&val.altura);
    insereNaLista(p,&val);
  }
}



int main() {
  tipoLista l1;
  int tam;

  criaLista(&l1);
  scanf("%d%*c",&tam);
  lerValoresParaLista(&l1,tam);
  printf("%.2f\n",mediaLista(&l1));

}

