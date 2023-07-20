
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
        for(j=1;j<=sp;j++){
            printf(" ");
        }
        for(j=1;j<=col;j++)
        {
            printf("*");
        }
          printf("\n");
            if(i<n){
                col++;
                sp--;
            }
            else{
                col--;
                sp++;
            }
      
    }
    
return 0;
}