#include<stdio.h>

int main(){
    unsigned char qtd, n, maior, menor;

    scanf("%hhu%*c%hhu%*c", &qtd, &n);

    maior = n;
    menor = n;

    while (qtd > 1){
        scanf("%hhu%*c", &n);

        if(n > maior){
            maior = n;
        }
        else{
            if(n < menor){
                menor = n;
            }
        }
        qtd--;
    }

    printf("\n%hhu %hhu\n", menor, maior);
    
    return 0;
}