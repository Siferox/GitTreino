#include <stdio.h>
#define payRate 12.00
#define taxRate15 0.15
#define taxRate20 0.20
#define taxRate25 0.25

int main(void)
{
    
    float overtime, grossPay;
    
    printf("inform the number os hours worked in this week: \n");
    scanf("%f", &overtime);
    grossPay = payRate*overtime;

    if (grossPay >= 300)
        
        printf("The gross pay is $%0.2f, and taxes is 15 percent and the value is $%0.2f, and the net pay is $%0.2f \n", grossPay, grossPay*taxRate15, grossPay-(grossPay*taxRate15));

        else if ((grossPay >= 150) && (grossPay < 300))
        printf("The gross pay is $%0.2f, and taxes is 20 percent and the value is $%0.2f, and the net pay is $%0.2f \n", grossPay, grossPay*taxRate20, grossPay-(grossPay*taxRate20));

        else
        printf("The gross pay is $%0.2f, and taxes is 25 percent and the value is $%0.2f, and the net pay is $%0.2f \n", grossPay, grossPay*taxRate25, grossPay-(grossPay*taxRate25));
    

return 0;

}