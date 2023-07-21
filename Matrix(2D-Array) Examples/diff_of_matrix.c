#include <stdio.h>

int main(){

    printf("C Prog to find Difference of 2 Matrices\n");
    printf("-------------------------------------\n ");

    #define size 3
    int i,j;
    int A[size][size];
    int B[size][size];
    int C[size][size];

    printf("\nEnter the Elements of First Matrix:-\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter the elements of Second Matrix:-\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("\nThe Difference of both the Matrix is:-\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}