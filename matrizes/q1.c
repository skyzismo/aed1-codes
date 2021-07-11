#include<stdio.h>

#define N 5

// FACA SUA FUNCAO AQUI

unsigned contaQuatro(int mat[N][N], int valor){
    int i, j;
    unsigned verif;

    for(i = 0; i < N; ++i){
        for(j = 0; j < N; ++j){
            if(mat[i][j] == valor){
                verif++;
            }
        }
    }
    if(verif == 4){
        return 1;
    }
    else{
        return 0;
    }
}
  
// FIM DA SUA FUNCAO


int main() {
  int x,y;
    int mat[N][N];
    int valor;
    
    for(x=0; x<N; x++) {
      for(y=0; y<N; y++) {
	scanf("%d%*c",&mat[x][y]);
      }
    }
    scanf("%d%*c",&valor);	
    if(contaQuatro(mat,valor)) {
      printf("verdadeiro\n");
    }
    else {
      printf("falso\n");
    }
  }
