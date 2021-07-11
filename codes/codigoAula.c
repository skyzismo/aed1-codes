#include <stdio.h>
#include <locale.h>

int main() {
	float a, b, c;
	float media;

    setlocale(LC_ALL, "");
	
	//para limpar o buffer quando ler um numero -> %*c
	scanf("%f%*c%f%*c%f%*c", &a, &b, &c);

	media = (a+b+c)/3;

	printf("Média entre as notas %.2f, %.2f, %.2f: %.2f\n", a, b, c, media);

	if(media >= 5){
		printf("Aprovado!\n");
	}
	else{
		printf("Reprovado.\n");
	}

	return 0;
}