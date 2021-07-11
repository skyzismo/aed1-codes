#include<stdio.h>

#define N 3

// FAÇA AQUI A FUNCAO SOLICITADA (retorno é unsigned)
unsigned char contaBombas(unsigned char mat[N][N]){
    int i,j, cont;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(mat[i][j] != 9 || mat[i][j] != 19){
                cont++;
            }
        }
    }
    if(cont > 0){
        return cont;
    }
    else{
        return 0;
    }
}
//FIM DA SUA FUNCAO. NAO ALTERE O CÓDIGO A SEGUIR



	
int main() {
	int x,y;
		unsigned char mat[N][N];
	
		for(x=0; x<N; x++) {
				for(y=0; y<N; y++) {
					scanf("%hhu%*c",&mat[x][y]);
				}
		}

	printf("%u",contaBombas(mat));
	
}
