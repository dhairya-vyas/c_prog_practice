
#include <stdio.h>

int main()
{
    printf("C Prog to Print Diamond Star Pattern\n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number of lines:-");
    scanf("%d",&n);
    int space=n-1;
    int star=1;

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
      for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
         printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=(2*i-2); j<(2*n-2); j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}