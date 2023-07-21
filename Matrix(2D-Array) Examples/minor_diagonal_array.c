#include <stdio.h>

int main(){

    printf("C Prog to find Sum of Minor Diagonal of Matrix\n");
    printf("-------------------------------------\n ");

    #define size 3
    int i,j;
    int sum=0;
    int A[size][size];

    printf("\nEnter the Elements of First Matrix:-\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&A[i][j]);
        }
    }
            for(i=0;i<size;i++){
                sum += A[i][size-i-1];
            }
            

    printf("\nThe Sum of Minor Diagonal of the Matrix is:-%d\n",sum);
    return 0;
}