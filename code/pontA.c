#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *x, y;

    y = 10;

    //ponteitos somente apontam para variáveis de mesmo tipo
    x = &y;

    //imprime o valor da variável apontada por x (ponteiro)
    printf("%d\n", *x);
    //endereço de y
    printf("%p\n", &y);
    //imprime o endereço da variável y
    printf("%p\n", x);
    //imprime o endereço do ponteiro *x
    printf("%p\n", &x);

    //como o ponteiro *x possui o endereço de y, ele pode manipular o conteúdo de y
    *x = 20;

    printf("%d\n", y);

    return 0;
}
