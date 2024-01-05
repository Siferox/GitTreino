#include <stdio.h>
#define payRate 12.00
#define taxRate15 0.15
#define taxRate20 0.20
#define taxRate25 0.25

int main(void)
{
    
    float hours, overtime, grossPay, t15, t20, t25;
    
    printf("Inform the number os hours worked in this week: \n");
    scanf("%f", &hours);
    
    if (hours <= 40)
    {
        grossPay = payRate * hours;
    }
        else
        {    
        overtime = (hours - 40) * payRate * 1.5;  
        grossPay = overtime + (40*payRate);              
        }    
     
    if (grossPay < 300)
        {
            t15 = grossPay * taxRate15;
            printf("The gross pay is $%0.2f\n", grossPay);
            printf("The taxes is 15 percent and the value is $%0.2f\n", t15);
            printf("The net pay is $%0.2f \n", grossPay-t15);
        }
        else if ((grossPay >= 300) && (grossPay < 450))
        {
            t15 = 300 * taxRate15;
            t20 = (grossPay - 300) * taxRate20;
            printf("The gross pay is $%0.2f\n", grossPay);
            printf("The taxes is 20 percent and the value is $%0.2f\n", t15+t20);
            printf("The net pay is $%0.2f \n", grossPay-(t15+t20));
        }
        else if (grossPay > 450)
        {
            t15 = 300 * taxRate15;
            t20 = 150 * taxRate20;
            t25 = (grossPay - 450) * taxRate25;
            printf("The gross pay is $%0.2f\n", grossPay);
            printf("The taxes is 25 percent and the value is $%0.2f\n", t15 + t20 + t25);
            printf("The net pay is $%0.2f \n", grossPay-(t15 + t20 + t25));
        }

    return 0;

}