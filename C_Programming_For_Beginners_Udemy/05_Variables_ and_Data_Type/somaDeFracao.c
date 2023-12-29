/* VARIÁVEIS AND DATA TYPES

AUTOR: Vitor Hugo do Nascimento
PURPOSE: Neste exercício, farei uma soma de frações.
SOURCE: INTRODUÇÃO A PROGRAMAÇÃO EM C: GUIA DO INICIANTE PAGINA 26
DATE: DECEMBER 28, 2023

*/

#include <stdio.h>

int main()
{
    float numerador = 1;
    float H;

    H = (numerador/1 + numerador/2 + numerador/3 + numerador/4 + numerador/5);
        
    printf("A soma das frações é de: %0.5f \n", H);

    return 0;
}