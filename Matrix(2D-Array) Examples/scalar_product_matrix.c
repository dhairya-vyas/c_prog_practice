#include <stdio.h>

int main(){

    printf("C Prog to find Product of 2 Matrices\n");
    printf("-------------------------------------\n ");

    #define size 3
    int i,j;
    int num;
    int A[size][size];

    printf("\nEnter the Elements of First Matrix:-\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&A[i][j]);
        }
    }


    printf("Enter the Number to multiply the matrix:- ");
    scanf("%d",&num);

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            A[i][j] = num * A[i][j];
        }
    }

    printf("\nThe Product of the Matrix is:-\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}