
#include <stdio.h>
#include <math.h>

int main()
{
    printf("C Prog to find Simple & Compound Interest:- \n");
    printf("-------------------------------------------------\n ");

    float principle,time,rate,si,ci;

    printf("Enter the Principle Amount:- ");
    scanf("%f",&principle);

    printf("Enter the Time in years:- ");
    scanf("%f",&time);

    printf("Enter the Rate of interest:- ");
    scanf("%f",&rate);


    si = (principle * rate * time) / 100;
    printf("The Simple Interest is equal to %f \n",si);

    ci = principle * (pow((1+rate/100), time));
    printf("The Compound Interest is equal to %f \n",ci);
  
return 0;
}