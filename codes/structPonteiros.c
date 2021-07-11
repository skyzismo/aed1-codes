#include <stdio.h>
#include <string.h>

typedef struct tipoDado{
    char nome[10];
    int id;
    float salario;
}tipoDado;

typedef struct tipoNo{
    tipoDado dado;
    struct tipoNo *prox;
}tipoNo;

int main(int argc, char const *argv[])
{
    tipoNo m; //variavel
    tipoNo *pm;  //ponteiro
 
    //structs 
    m.dado.id = 0;
    m.dado.salario = 1000.00;
    strcpy(m.dado.nome, "Lucas G.");

    pm = &m;

    (*pm).dado.id = 5;
    (*pm).dado.salario *= 2;
    // a flecha aparece quando se trata de ponteiro para struct
    pm->dado.id = 10;
    pm->dado.salario *= 4;
    

    return 0;
}
