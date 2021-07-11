#include <stdio.h>

void limpaString(char str[]){
    str[5] = 0;
}

void mostraVetor(char str[], unsigned tam){
    unsigned x = 0;

    while (x < tam){
        printf("%c", str[x]);
        x++;
    }
    printf("\n");
    
}

int main(){
    char nome[20];

    printf("Entre como nome: ");
    scanf("%[^\n]%*c", nome);
    limpaString(nome);
    printf("%s\n", nome);
    mostraVetor(nome, 20);
}