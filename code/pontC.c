#include<stdio.h>

void somaDois(int *p){
    *p = *p + 2;
}

//soma de vetores com ponteiros
/*void somaVetores(int *v1, int *v2, int *res, unsigned tamVetor){
    for(unsigned i = 0; i < tamVetor; i++){
        res[i] = v1[i] + v2[i];
    }
}*/

//outro tipo de soma de vetores com ponteiros
void somaVetores(int *v1, int *v2, int *res, unsigned tamVetor){
    // recebe o fim do vetor
    int *fim = &res[tamVetor];

    while (res < fim)
    {
        *res = *v1 + *v2;
        v1++;
        v2++;
        res++;
    }
    
}

void mostraVetor(int v[], unsigned tamVetor){
    for(unsigned i = 0; i < tamVetor; i++){
        printf("%d\n", v[i]);
    }
}

int main(int argc, char const *argv[])
{
    int v1[2] = {3, 7};
    int v2[2] = {10, 20};

    int *p;

    //recebe o endereço da primeira variavel de v1 (p = &v1[0])
    /*
    p = v1;
    mostraVetor(p, 2);

    p = v2;
    mostraVetor(p, 2);
    */

    p = v1;
    //aloca um valor na posição 0 do vetor v1
    *p = 0;
    p++; // aritmética de ponteiros p = p + (1 * sizeof(int)), apontando, agora, para a posição 1 do vetor v1
    *p = 200; //aqui, a posição 1 de v1 recebe 200

    mostraVetor(v1, 2);

    return 0;
}
