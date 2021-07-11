#include<stdio.h>

#define N 5

// FACA SUA FUNCAO AQUI
  
// FIM DA SUA FUNCAO
int soma(int mat[N][N]){
    int i, j;
    int acumula;
	
	 acumula = 0;
	
    for(i = 0; i < N; ++i){
        for(j = 0; j < N; ++j){
            acumula = acumula + mat[i][N - 1 - i];
        }
    }
    return acumula;
}

int main() {
  int x,y;
    int mat[N][N];
    int valor;
    
    for(x=0; x<N; x++) {
      for(y=0; y<N; y++) {
	scanf("%d%*c",&mat[x][y]);
      }
    }
  
      printf("%d\n",soma(mat));
  
  }

