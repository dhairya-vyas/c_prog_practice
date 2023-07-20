
#include <stdio.h>

int main()
{
    printf("C Prog to Calculate Gross salary from Basic  Salary \n");
    printf("-------------------------------------\n ");

float basic,da,hra,gross;

printf("Enter the Basic Salary:- ");
scanf("%f",&basic);

/*Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%
Basic Salary >= 20001 : HRA = 30%, DA = 95%*/

if(basic<=10000){
    hra = basic * 0.20;
    da = basic * 0.80;
}

else if(basic>=10000 && basic <= 20000){
    hra = basic * 0.25;
    da = basic * 0.90;
}

else {
    hra = basic * 0.30;
    da = basic * 0.95;
}

gross = basic + hra + da;
printf("The gross Salary of Employee is:- %.2f \n",gross);
    
return 0;
}