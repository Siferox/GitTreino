/* VARIÁVEIS AND DATA TYPES

AUTOR: Vitor Hugo do Nascimento
PURPOSE: Neste exercício, fazer aparecer o salario com percentual corrigido
DATE: DECEMBER 28, 2023

*/

#include <stdio.h>

int main()

{

    float salarioAtual;
    int percentual;
    float salarioCorrigido;

    printf("Informar o valor do salario atual: \n");
    scanf("%f", &salarioAtual);

    printf("Informar o percentual de aumento do salário: \n");
    scanf("%i", &percentual); 

    salarioCorrigido = (salarioAtual+(salarioAtual*percentual)/100);

    printf("O salario corrigido ficou: %0.2f \n", salarioCorrigido);

    return 0;

}