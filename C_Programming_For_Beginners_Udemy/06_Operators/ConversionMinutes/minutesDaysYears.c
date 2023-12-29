#include <stdio.h>

int main()

{

    int minutes;
    double minutesInYear;
    double Years;
    double Days;

    printf("Inform the minutes here: ");
    scanf("%i", &minutes);

    minutesInYear = (365 * 24 * 60);        // To find the minutes per year, is 525.600.
    Years = minutes / minutesInYear;        // To find how many years.
    Days = minutes / (minutesInYear/365);   // Divide minutesInYear by 365 days to find minutes per days

    printf("The converted minutes into years is: %0.5lf years \n", Years);
    printf("The converted minutes into days is : %0.5lf days \n", Days);

    return 0;

}