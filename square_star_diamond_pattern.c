
#include <stdio.h>

int main()
{
    printf("C Prog to Print Square Star Diamond Pattern \n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number of Rows:- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (i==1 || i==n || j==1 || j==n || i == j || j == (n - i + 1))
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
       
return 0;
}