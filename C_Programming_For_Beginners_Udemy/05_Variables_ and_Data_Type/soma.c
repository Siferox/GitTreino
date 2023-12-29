/* VARIÁVEIS AND DATA TYPES

AUTOR: Vitor Hugo do Nascimento
PURPOSE: Neste exercício, farei uma soma.
DATE: DECEMBER 28, 2023

*/

#include <stdio.h>

int main()
{

    int primeiro, segundo, terceiro, quarto, quinto;

    printf("Informe o valor do primeiro numero até o quinto: \n");
    scanf("%i %i %i %i %i", &primeiro, &segundo, &terceiro, &quarto, &quinto);

    printf("A soma de todos os valores colocados são: %i \n", primeiro + segundo + terceiro + quarto + quinto);
    
    return 0;
    
}