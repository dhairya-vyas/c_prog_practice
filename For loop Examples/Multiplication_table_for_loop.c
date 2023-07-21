
#include <stdio.h>

int main()
{
    printf("C Prog to find Multiplication Table of the Given Nnumber \n");
    printf("-------------------------------------\n ");

    int i,N;
    printf("Enter the number to display it's Multiplication Table :-\n");
    scanf("%d",&N);

    for(i=0;i<=10;i++){
          printf("%d * %d = %d \n",N,i,(N*i));
    }
  
    
return 0;
}