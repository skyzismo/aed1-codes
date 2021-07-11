#include<stdio.h>

int main(){
    //short int -> verificador scanf %hd
    short int n, maior;

    scanf("%hd%*c", &n);
    //guarda no maior já assumindo isso, pois foi o primeiro a ser lido
    maior = n;

    scanf("%hd%*c", &n);

    if(n > maior){
        maior = n;

        scanf("%hd%*c", &n);

        if(n > maior){
            printf("\n%hd\n", n);
        }
        else{
            printf("\n%hd\n", maior);
        }
    }
    else{
        scanf("%hd%*c", &n);

        if(n > maior){
            printf("\n%hd\n", n);
        }
        else{
            printf("\n%hd\n", maior);
        }
    }

    
    return 0;
}