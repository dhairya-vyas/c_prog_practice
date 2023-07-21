
#include <stdio.h>

int main()
{
    printf("C Prog to Print numbers in triangle in reverse\n");
    printf("-------------------------------------\n ");

    int n,i,j,k;
    printf("Enter the Number:-");
    scanf("%d",&n);

     for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j*2-1);
         
        printf("\n");
    }
return 0;
}