#include <stdio.h>
#include <stdlib.h>

/*
    w: argumento para criação e escrita, se o arquivo já existia, ele é zerado
    r: argumento para leitura de arquivos já existentes
    w+: argumento para criação, escrita e leitura, se o arquivo já existia, ele é zerado
    r+: argumento para leitura e escrita de arquivos já existentes
    a: argumento para o cursor adicionar informação na "última posição" do arquivo
*/

int main(int argc, char const *argv[])
{
    // o tipo FILE é uma struct nativa da biblioteca stdio.h para criação de arquivos
    FILE *primeiroArquivo;
    char dia[10] = "quinta";

    // o ponteiro para arquivo criado recebe a função fopen, onde os argumentos são o nome do arquivo e o argumento do tipo de operação sobre ele 
    primeiroArquivo = fopen("meuPrimeiroArquivo", "w");

    if(primeiroArquivo == NULL){
        printf("Erro ao criar o arquivo desejado\n");
        exit(1); //indica término do programa sem exito
    }

    //a função de impressão abaixo precisa de nome do arquivo como primeiro argumento 
    fprintf(primeiroArquivo, "Escrevendo no meu primeiro arquivo, e na %s acho que vou sair, hein\n", dia);

    //analogamente à alocação de memória, é preciso fechar o arquivo criado;
    fclose(primeiroArquivo);

    return 0;
}
