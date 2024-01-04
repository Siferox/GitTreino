#include <stdio.h>

int main()
{
    unsigned int a = 60;    // 0011 1100
    unsigned int b = 13;    // 0000 1101
    int resultAnd = 0, resultOr = 0, resultLeft, resultRight;
    
    resultAnd = a & b;      // 12 = 0000 1100
    resultOr = a | b;       // 61 = 0011 1101
    resultLeft = a << 1;    // 120 = 0111 1000 para quantidade 1
    resultRight = a >> 1;   // 30 = 0001 1110 para quantidade 1

    printf("result AND is %d\n", resultAnd);
    printf("result OR is %d\n", resultOr);
    printf("result shift left is %d\n", resultLeft);
    printf("result shift right is %d\n", resultRight);
    
    return 0;

}