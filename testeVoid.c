#include <stdio.h>
#include <string.h>

void mudaString(char nome[]){
    nome[0] = 'X';

    printf("[%s]\n", nome);
}

int main(int argc, char const *argv[])
{
    char nome[11];

    scanf("%[^\n]%*c", nome);
    mudaString(nome);

    return 0;
}
