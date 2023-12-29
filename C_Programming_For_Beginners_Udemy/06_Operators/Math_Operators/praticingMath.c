/*
Acabei de aprender como usar os operadores matemáticos
*/

#include <stdio.h>

int main()
{
    float x = 2;
    float y = 3;
    float z;

    //Soma:
    z = x + y;
    printf("A soma total de 2+3=%f \n", z);

    //Subtração do menor pelo maior:
    z = x - y;
    printf("A subtração de 2-3=%f \n", z);

    //Subtração do maior pelo menor:
    z = y - x;
    printf("A subtração de 3-2=%f \n", z);

    //Divisão com numerador menor:
    z = x/y;
    printf("A divisão de 2/3=%f \n", z);

    //Divisão com numerador maior:
    z = y/x;
    printf("A divisão de 3/2=%f \n", z);

    //Multiplicação:
    z = x * y;
    printf("A multiplicação de 2x3=%f \n", z);

    //Resto da divisão:
    z = (int) y % (int) x; // O comando (int), é uma forma de converter nesta operação, o float em int, apenas neste exemplo;
    printf("O resto da divisão de 3/2=%f \n", z);

    //Resto da divisão:
    z = (int) x % (int) y; // O comando (int), é uma forma de converter nesta operação, o float em int, apenas neste exemplo;
    printf("O resto da divisão de 2/3=%f \n", z);

    //Acrescimo nas duas situações:
    ++x; //Neste caso, o valor de x = 2, como somou +1, ficou então 2+1 = 3
    printf("O acrescimo de ++x = 2+1 => %f \n", x);
    x++; //Como ele armazenou o ultimo valor, ou seja, 3, então ficou como 3+1 = 4
    printf("O acrescimo de x++ = 3+1 => %f \n", x);

    //Decrescimo nas duas situações:
    --y; //Neste caso, o valor de y = 3, como subtraiu 1, ficou então 3-1 = 2
    printf("O acrescimo de --y = 3-1 => %0.1f \n", y);
    y--; //Aqui, como armazenou o último valor de 2, então 2-1 = 1
    printf("O acrescimo de y-- = 2-1 => %0.1f \n", y);

    return 0;

}
