
#include <stdio.h>

int main()
{
    printf("C Prog to print Number pattern taking input from User\n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number:-");
    scanf("%d",&n);
    int temp=n;

    if(n>=1 && n<=1000)
    {
        for(i=1;i<=(2*n-1);i++)
        {
            for(j=1;j<=(2*n-1);j++)
            {
                if(j==1||j==(2*temp-1)||i == 1||i==(2*temp-1)){
                printf("%d",temp);
            }
            else
            {
                printf(" ");
            }
            }
            printf("\n");
        }
        
    }
    
return 0;
}