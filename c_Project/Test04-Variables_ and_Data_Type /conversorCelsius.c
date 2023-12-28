/* VARIÁVEIS AND DATA TYPES

AUTOR: Vitor Hugo do Nascimento
PURPOSE: Neste exercício, farei um conversor de Celsius, para Fahrenheit;
DATE: DECEMBER 28, 2023

*/

#include <stdio.h>

int main()
{

    float celsius, fahrenheit;

    printf("Insira o valor da temperatura atual em °C: \n");
    scanf("%f", &celsius);
    
    fahrenheit = (9 * celsius + 160) / 5;

    printf("O valor da sua temperatura, convertida em °Fahrenheit é de: %0.2f \n", fahrenheit);

    return 0;

}