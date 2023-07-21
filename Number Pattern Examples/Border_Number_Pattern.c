
#include <stdio.h>

int main()
{
    printf("C Prog to Print 1 on border\n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number:-");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==1 || i==n){
            printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    
return 0;
}