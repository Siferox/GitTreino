/* VARIÁVEIS AND DATA TYPES

AUTOR: Vitor Hugo do Nascimento
PURPOSE: Neste exercício, farei o cálculo do volume da lata de óleo.
SOURCE: INTRODUÇÃO A PROGRAMAÇÃO EM C: GUIA DO INICIANTE PAGINA 26 exercício 7.
DATE: DECEMBER 28, 2023

*/

/* Calcule e apresente o volume de uma lata de óleo, utilizando a fórmula volume = 3.14159 * raio * altura. */


#include <stdio.h>
#define Pi 3.14159
int main()
{
    float raio, altura;
    
    printf("insira os valores de raio e de altura, respectivamente para acharmos o valor do volume: \n");
    scanf("%f %f", &raio, &altura);
    printf("O valor do volume da lata é de: %0.2f \n", (Pi * raio * raio) * altura);

    return 0;


}