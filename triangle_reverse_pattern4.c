
#include <stdio.h>

int main()
{
    printf("C Prog to Print numbers in triangle in reverse\n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number:-");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
return 0;
}