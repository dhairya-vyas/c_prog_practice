
#include <stdio.h>

int main()
{
    printf("C Prog to find Sum of 2 Matrices\n");
    printf("-------------------------------------\n ");

#define SIZE 3
    int i,j;
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];
    
    printf("\nEnter the elements of the 1st Matrix:- \n");
    for(i=0;i<SIZE;i++)
    {
    for (j = 0; j < SIZE; j++)
    {
        scanf("%d",&A[i][j]);
    }
    }

printf("\nEnter the elements of the 2nd Matrix:- \n");
      for(i=0;i<SIZE;i++)
    {
    for (j = 0; j < SIZE; j++)
    {
        scanf("%d",&B[i][j]);
    }
    }

      for(i=0;i<SIZE;i++)
    {
    for (j = 0; j < SIZE; j++)
    {
        C[i][j] = A[i][j] + B[i][j];
    }
    }
    printf("\nThe Sum of 1st and 2nd Matrix is:- \n");
     for(i=0;i<SIZE;i++)
    {
    for (j = 0; j < SIZE; j++)
    {
        printf("%d ",C[i][j]);
    }
    printf("\n");
    }
     
    
return 0;
}