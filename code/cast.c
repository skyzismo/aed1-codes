#include <stdio.h>

int main(int argc, char const *argv[])
{
    int xInt, yInt;
    char xChar, yChar;
    unsigned xUnsignedChar, yUnsignedChar;
    unsigned xUnsignedInt, yUnsignedInt;
    float xFloat, yFloat;
    double xDouble, yDouble;

    xChar = -1;
    xUnsignedChar = xChar;
    xInt = 10 + xChar;
    yInt = 10 + xUnsignedChar;

    printf("%d\n", xInt);
    printf("%d\n", yInt);

    xInt = 65;
    xChar = 65;

    printf("%c\n", xInt);
    printf("%d\n", xChar);

    xInt = 3;
    yInt = 2;

    xFloat = xInt/yInt;

    printf("%.2f\n", xFloat);

    // conversão forçada de pelo menos um componente da operacao para que seja produzido um float contforme o tipo da variavel
    xFloat = (float)xInt/yInt;

    printf("%.2f\n", xFloat);

    return 0;
}
