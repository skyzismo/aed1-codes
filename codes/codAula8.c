#include <stdio.h>
#include <string.h>

struct tipoFuncionario{
    //contem todos os atributos da struct e seus tipos
    char nome[30];
    float salario;
    char funcao[20];
    char setor[30];
};

void mostraFuncionarios(struct tipoFuncionario func1, struct tipoFuncionario func2){
    printf("O funcionario %s obteve aumento e agora recebe: %.2f\n", func1.nome, func1.salario);
}
 
int main(int argc, char const *argv[])
{
    //aqui sao criadas as variaveis que contem todos os atributos da struct tipoFuncionario
    struct tipoFuncionario func1, func2;

    scanf("%[^\n]%*c", func1.nome);
    scanf("%f%*c", &func1.salario); 

    func1.salario = func1.salario * 2;

    func2 = func1;

    mostraFuncionarios(func1, func2);

    return 0;
}
