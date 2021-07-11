#include<stdio.h>

void somaDois(int *p){
    // como se fosse z = z + 2 ou y = y + 2
    *p = *p + 2;
}

int main(int argc, char const *argv[])
{
    int x = 95, y = 56, z = 77;
    int *px;

    px = &x;

    printf("%d\n", *px);
    somaDois(px);
    printf("%d\n", x);

    printf("%d\n", y);
    somaDois(&y);
    printf("%d\n", y);

    printf("%d\n", z);
    somaDois(&z);
    printf("%d\n", z);


    return 0;
}