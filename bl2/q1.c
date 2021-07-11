#include <stdio.h>
#include <math.h>

// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao01 que deve atender ao enunciado do exercício. 
int questao01(valor){

    if(valor > 0){
        //codigo aqui
        short int vet[valor], i;
        short int produto = 1;

        for(i = 0; i < valor; i++){
            vet[i] = (i + 1) * 2;
            produto = produto * vet[i];
        }

        return produto; 
    }
    else{
        return 1;
    }
}


//ENDFUNCAOALUNO


// ABAIXO CODIGO USADO PARA TESTE DA FUNCAO. NÃO MOFIQUE!

int main() {
   long int valor;

   scanf("%d%*c",&valor);
   printf("%d\n", questao01(valor));

}
