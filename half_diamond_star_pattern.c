
#include <stdio.h>

int main()
{
    printf("C Prog to print Half Diamond Star Pattern  \n");
    printf("-------------------------------------\n ");

    int n,i,j;


    printf("Enter the Number of lines:-");
    scanf("%d",&n);
     int col=1;
    int sp=n-1;

    for(i=1;i<n*2;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("*");
        }
            if(i<n){
                col++;
            }
            else{
                col--;
            }
        printf("\n");
    }
    
return 0;
}