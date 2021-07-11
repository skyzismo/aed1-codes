#include<stdio.h>

int main(){
    //short int -> verificador scanf %hd
    short int n1, n2, n3;

    scanf("%hd%*c%hd%*c%hd%*c", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3){
        printf("%hd\n", n1);
    }
    else{
        if(n2 > n3){
            printf("%hd\n", n2);
        }
        else{
            printf("%hd\n", n3);
        }
    }
    return 0;
}