
#include <stdio.h>

int main()
{
    printf("C Prog to find Factorial of Number \n");
    printf("-------------------------------------\n ");

    int i,num;
    unsigned long long fact=1LL;

    printf("Enter the Number:- \n");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d = %llu \n", num, fact);

return 0;
}