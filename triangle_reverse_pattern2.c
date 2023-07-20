
#include <stdio.h>

int main()
{
    printf("C Prog to Print numbers in triangle in reverse\n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number:-");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
return 0;
}