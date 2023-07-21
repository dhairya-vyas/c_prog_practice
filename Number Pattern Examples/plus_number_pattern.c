
#include <stdio.h>

int main()
{
    printf("C Prog to Print 0 in Plus Design\n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number:-");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==3|| i==3){
            printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    
return 0;
}