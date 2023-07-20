
#include <stdio.h>

int main()
{
    printf("C Prog to find Factors of Number \n");
    printf("-------------------------------------\n ");

    int i,num;
    printf("Enter the Number:- \n");
    scanf("%d",&num);
    
    printf("All factors of %d are: \n", num);

    for (i=1;i<=num;i++)
    {
        if (num % i == 0)
        {
            printf("%d, ",i);
        }
    }
return 0;
}