/* #include <stdio.h>

int main(){
    unsigned linha, coluna;

    for(linha = 0; linha < 20; linha++){
        for (coluna = 0; coluna < 20; coluna++){
            //quando chegar nessas linhas, ele printa o "1" para formar a imagem
            if((linha == 0) || (coluna == 0) || (linha == 19) || (coluna == 19) || (linha == coluna) || (linha + coluna == 19)){
                printf("1");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}*/

#include <stdio.h>

int main() {
 unsigned int dimensao, l, c;
	
 scanf("%u%*c",&dimensao); // aqui lê a dimensão
	
	// agora escreva o código para imprimir a imagem
	// olha um exemplo do que pode ser feito pra imprimir uma imagem
	// com linha 0 e a última linha acesas	
	// dai complemente o exercício
	
 for( l=0; l < dimensao; l++) {
	for( c=0; c < dimensao; c++) {
		if((l==0) || (l == dimensao-1) || (l == c) || (l + c == dimensao -1) || (c == 0) || c == dimensao-1) {
		 printf("1");
		}
		else {
		 printf(" ");
		}
	}
	printf("\n"); // para mudar de linha
 }
}