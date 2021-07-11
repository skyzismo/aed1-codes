#include <stdio.h>

int main()
{
    char nome[20];

    /*for(letra = 32; letra < 127; letra++){
        printf("%hhd  %c\n", letra, letra);
    }*/

    //para strings, não é preciso o & como endereçamento para variável
    scanf("%[^\n]%*c", nome);

    printf("%s\n", nome);
}
