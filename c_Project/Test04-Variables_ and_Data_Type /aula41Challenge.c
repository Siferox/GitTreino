/* VARIÁVEIS AND DATA TYPES

AUTOR: Vitor Hugo do Nascimento
PURPOSE: Este é um desafio da aula 41.
SOURCE: Curso de linguagem C do Udemy
DATE: DECEMBER 27, 2023

*/

#include <stdio.h>

int main()
{
    enum Company {GOOGLE=1, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};   //Se colocarmos =numero, em qualquer um dos itens, podemos renumerar os demais

   
    
    printf("The value of Xerox is: %d\n", 3);
    printf("The value of Google is: %d\n", 1);
    printf("The value of Ebay is: %d\n", 5);
    
    return 0;
}