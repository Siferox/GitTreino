#include <stdio.h>

int main(void)
{

    int number, sign;
    printf("Please type in a number: \n");
    scanf("%i", &number);

    if (number < 0)
    sign = -1;
    else if (number == 0)
    sign = 0;

    else if (number == 2)
    sign = 2;

    else 
    sign = 1;

    printf("Sign = %i\n", sign);

    return 0;

}