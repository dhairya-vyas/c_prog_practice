
#include <stdio.h>

int main()
{
    printf("C Prog to find HCF of 2 Numbers \n");
    printf("-------------------------------------\n ");

    int num1,num2,i,min,hcf=1;

    printf("Enter the 1st Number:- ");
    scanf("%d",&num1);
    
    printf("Enter the 2nd Number:- ");
    scanf("%d",&num2);

    if (num1<num2)
    {
        min = num1;
    }
    else
    {
        min = num2;
    }

    for (i=1;i<=min;i++)
    {
       if (num1%i==0 && num2%i==0)
       {
       hcf = i;
       }
    }
     printf("HCF of %d and %d = %d\n", num1, num2, hcf);
return 0;
}