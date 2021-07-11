#include<stdio.h>

int main(){
    unsigned char qtd, n, maior, i;

    scanf("%hhu%*c%hhu%*c", &qtd, &n);

    maior = n;

    for(i = 1; i < qtd; i++){
        scanf("%hhu%*c", &n);

        if(n > maior){
            maior = n;
        }
    }

    printf("\n%hhu\n", maior);
    return 0;
}