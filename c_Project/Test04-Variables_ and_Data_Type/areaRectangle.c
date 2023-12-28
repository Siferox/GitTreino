/* VARIÁVEIS AND DATA TYPES

AUTOR: Vitor Hugo do Nascimento
PURPOSE: Neste exercício, é um desafio para criar o cálculo da área do retângulo
SOURCE: Curso da Udemy
DATE: DECEMBER 27, 2023

*/

#include <stdio.h>

int main()
{
    double width, height;

    printf("Please, inform the rectangle's width and height: \n");
    scanf("%lf %lf", &width, &height);

    printf("The rectangle's area is: %0.3lf \n", width * height);
    printf("The rectangle's perimeter is: %0.3lf \n", 2 * (width + height));

    return 0;

}
