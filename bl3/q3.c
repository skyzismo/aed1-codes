#include <stdio.h>
#include <string.h>

int palindromo(char nome[]){
    unsigned i, j, conf = 0;

    j = strlen(nome) - 1;

    for(i = 0; i < strlen(nome); i++){
        if(nome[i] == nome[j]){
            conf++;
        }
        j--;
    }
    if(conf == strlen(nome)){
        return 1;
    }
    return 0;
}

int main(){
    char nome[100];
	
	scanf("%[^\n]%*c",nome);
    if(palindromo(nome)) {
		printf("SIM\n");
	}
	else {
		printf("NAO\n");	
	}
}