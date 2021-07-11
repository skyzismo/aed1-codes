#include<stdio.h>

#define N 5

// FACA SUA FUNCAO AQUI
int menor(int mat[N][N]){
    int i, j;

    for(i = 1; i < N; ++i){
        for(j = 1; j < N; ++j){
            int menor;

            if(mat[i][j] < mat[i - 1][j - 1]){
                menor = mat[i][j];
            }
            else{
                menor = mat[i][j];
            }
        }
    }
    return menor;
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
  
      printf("%d\n",menor(mat));
  
  }

