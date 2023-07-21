
#include <stdio.h>

int main()
{
    printf("C Prog to find LCM of 2 Numbers \n");
    printf("-------------------------------------\n ");

    int num1,num2,i,max,lcm=1;

    printf("Enter the 1st Number:- ");
    scanf("%d",&num1);
    
    printf("Enter the 2nd Number:- ");
    scanf("%d",&num2);

    if (num1>num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }

    i = max;
    while(1)
    {
       if (i%num1==0 && i%num2==0)
       {
       lcm = i;
       break;
       }
         i = i + max;
    }
     printf("lcm of %d and %d = %d\n", num1, num2, lcm);
return 0;
}