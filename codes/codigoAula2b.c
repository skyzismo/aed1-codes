#include<stdio.h>

int main(){
    //short int -> verificador scanf %hd
    short int n, maior, quant;

    scanf("%hd%*c%hd%*c", &quant, &n);
    
    maior = n;

    while (quant > 1){
        scanf("%hd%*c", &n);

        if(n > maior){
            maior = n;
        }

        quant--;
    }

    printf("\n%hd\n", maior);

    
    
    return 0;
}