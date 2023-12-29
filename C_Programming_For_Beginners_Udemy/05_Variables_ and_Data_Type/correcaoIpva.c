/* VARIÁVEIS AND DATA TYPES

AUTOR: Vitor Hugo do Nascimento
PURPOSE: Neste exercício, fazer aparecer o IPVA corrigido com %
DATE: DECEMBER 28, 2023

*/

#include <stdio.h>

int main()

{

    float valorCarro, valorIPVA, percIPVA;

    printf("Por favor, informar o valor do carro: \n");
    scanf("%f", &valorCarro);

    printf("Por favor, informar o valor do IPVA: \n");
    scanf("%f", &valorIPVA);

    percIPVA = (valorIPVA / valorCarro) * 100;

    printf("O valor percentual do IPVA do seu carro é de %0.2f%% \n\n", percIPVA);

    return 0;

}