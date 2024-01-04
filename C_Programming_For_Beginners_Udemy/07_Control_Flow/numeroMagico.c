/* PROGRAMA DE NÚMEROS MÁGICOS #1 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int magic;              // Numero mágico
int guess;              // Palpite usuário

magic = rand();         // Gera o número mágico

printf("Adivinhe o número mágico: ");
scanf("%d", &guess);

if (guess==magic) 

printf("**Certo**\n");

else

printf("Errado\n");

return 0;

}