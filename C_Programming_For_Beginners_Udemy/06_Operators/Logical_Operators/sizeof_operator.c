/* NESTE EXERCÍCIO, PODEMOS VER O TAMANHO DE MEMÓRIA OCUPADA POR CADA TIPO DE DADO*/

#include <stdio.h>

int main ()
{
    float teste;
    printf("char            %zd\n", sizeof(char));
    printf("float           %zd\n", sizeof(float));
    printf("short           %zd\n", sizeof(short));
    printf("int             %zd\n", sizeof(int));
    printf("long            %zd\n", sizeof(long));
    printf("double          %zd\n", sizeof(double));
    printf("long double     %zd\n", sizeof(long double));
    printf("teste 'float'   %zd\n", sizeof(teste));


    return 0;
}