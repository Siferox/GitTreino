#include <stdio.h>

int main()

{
    _Bool a = 1;
    _Bool b = 1;
    _Bool c;

    c = !a | !b;
    printf("%d \n", c);

    c = a || b;
    printf("%d \n", c);

    c = a && b;
    printf("%d \n", c);

    c = !a & !b;
    printf("%d \n", c);

    return 0;

}