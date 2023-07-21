
#include <stdio.h>

int main()
{
    printf("C Prog to Print 1 Alternate number of times   \n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number:-");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j%2==0){
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