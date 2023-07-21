

#include <stdio.h>

int main()
{
    printf("C Prog to find sum of 2 Numbers:- \n");
    printf("-------------------------------------\n ");

    int num1, num2,sum=0,pdt=0,sub=0,div=0;

    printf("Enter the first number:- ");
    scanf("%d",&num1);

    printf("Enter the second number:- ");
    scanf("%d",&num2);

    sum = num1 + num2;
    printf("The sum of %d and %d is equal to %d \n",num1,num2,sum);

    sub = num1 - num2;
    printf("The subtraction of %d and %d is equal to %d \n",num1,num2,sub);
    
    pdt = num1 * num2;
    printf("The product of %d and %d is equal to %d \n",num1,num2,pdt);
    
    div = num1 / num2;
    printf("The division of %d and %d is equal to %d \n",num1,num2,div);
    
    return 0;
}