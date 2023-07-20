
#include <stdio.h>

int main()
{
    printf("C Prog to find Electricity Bill according to Bill Units \n");
    printf("-------------------------------------\n ");

    float units,amount;
    printf("Enter the Meter reading (in units):- ");
    scanf("%f",&units);
    
    if(units <= 50){
        amount = (0.50 * units);
    }
    else if(units <= 150){
        amount = 25 +((units - 50) * 0.75);
    }
    else if(units <= 250){
        amount = 100 +((units - 150) * 1.20);
    }
    else{
        amount = 220 + ((units - 250) * 1.50);
    }
printf("Your Bill amount is %.2f \n",amount);
return 0;
}