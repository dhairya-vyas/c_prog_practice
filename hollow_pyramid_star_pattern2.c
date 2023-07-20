#include <stdio.h>

int main()
{
    printf("C Prog to print Pyramid Star Pattern \n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the number of lines:-");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf(" ");
        for(j=i;j<=n;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++)
        if(j==1 || i ==j || i==n)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
        printf("\n");
    }
    
return 0;
}