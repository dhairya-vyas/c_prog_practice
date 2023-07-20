
#include <stdio.h>

int main()
{
    printf("C Prog to Print Hollow Parallelogram Star Pattern \n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number of Rows:- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            if(i==1 || i ==n || j==1 || j==n){
            printf("*");
        }
        else{
            printf(" ");
        }
        }
        printf("\n");
    }
    
return 0;
}