
#include <stdio.h>

int main()
{
    printf("C Prog to Print Pyramid Pattern of Stars \n");
    printf("-------------------------------------\n ");

    int n,i,j;

    printf("Enter the number of lines:-");
    scanf("%d",&n);

  for(i=1;i<=n;i++)
    {
            //printf(" ");
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
return 0;
}