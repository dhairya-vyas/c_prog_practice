
#include <stdio.h>

int main()
{
    printf("C Prog to find Power of a Number \n");
    printf("-------------------------------------\n ");

    int i,num,exp;
    long long pow=1;
    printf("Enter the Base Number \n");
    scanf("%d",&num);

    printf("Enter the Exponent:-");
    scanf("%d",&exp);

    for(i=1;i<=exp;i++){
        pow = pow*num;
    }
    printf("The final result is %lld",pow);
    
return 0;
}