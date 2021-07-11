#include <stdio.h>
#include <stdlib.h> //biblioteca para as funções malloc() e free()

int main(int argc, char const *argv[])
{
    char *senha;

    senha = (char*) malloc(5 * sizeof(char));

    //teste de alocação
    if(senha == NULL){
        printf("Memory not allocated.\n");
        exit(0);
    }

    for(unsigned i = 0; i < 5; i++){
        scanf("%c%*c", &senha[i]);
    }
    for(unsigned i = 0; i < 5; i++){
        printf("\n%s\n", senha);
    }

    // independente do quanto o prog alocar no ponteiro, o tamanho sempre será referido ao quanto o ponteiro ocupa, e não o quanto foi alocado para ele
    printf("\nO tamanho de senha eh: %ld\n", sizeof(senha));

    free(senha);
    
    return 0;
}
