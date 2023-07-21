
#include <stdio.h>

int main()
{
    printf("C Prog to Print 1, N number of times   \n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number:-");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("1");
        }
        printf("\n");
    }
    
return 0;
}