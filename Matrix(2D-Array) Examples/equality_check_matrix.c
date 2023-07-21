#include <stdio.h>

int main(){

    printf("C Prog to find Product of 2 Matrices\n");
    printf("-------------------------------------\n ");

    #define size 3
    int i,j;
    int num;
    int A[size][size];
    int B[size][size];

    printf("\nEnter the Elements of First Matrix:-\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter the Elements of Second Matrix:-\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&B[i][j]);
        }
    }
            
    if(A[i][j] == B[i][j]){
        printf("\nBoth the Matrices are Equal\n");
    }
    else{
        printf("\nBoth the Matrices are not Equal\n");
    }
    return 0;
}