#include <stdio.h>
#include <stdlib.h>


unsigned contaLetras(char nome[], char letra){
	//aqui é retornado um numero

	unsigned i = 0, contador = 0;

	while(nome[i] != 0){
		//aqui o codigo aceita
		if(nome[i] == letra || nome[i] + 32 == letra){
			contador++;
		}
		i++;
	}

	return contador;
}

int main() {
 
	char nome[300];
	char letra;

	scanf("%[^\n]%*c",nome);
	scanf("%c%*c",&letra);
	printf("%u", contaLetras(nome,letra));
}
