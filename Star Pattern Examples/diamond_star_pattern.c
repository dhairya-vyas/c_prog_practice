
#include <stdio.h>

int main()
{
    printf("C Prog to Print Diamond Star Pattern\n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the Number of lines:-");
    scanf("%d",&n);
    int space=n-1;
    int star=1;

    for(i=1;i<(n*2);i++)
    {
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        for(j=1;j<star*2;j++)
        {
            printf("*");
        }
        
        if(i<n){
            
            space--;
            star++;
        }
        else{
            star--;
            space++;
        }

        printf("\n");
    }
    
return 0;
}
