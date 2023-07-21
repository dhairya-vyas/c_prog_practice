#include <stdio.h>

int main(){

    printf("C Prog to check the Matrix is Upper Triangle Matrix\n");
    printf("-------------------------------------\n ");

    #define size 3
    int i,j;
    int isUpper;
    int A[size][size];

    printf("\nEnter the Elements of Matrix:-\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&A[i][j]);
        }
    }

   
   isUpper =1;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(j<i && A[i][j]!=0){
                isUpper= 0;
            }
        }
    }

    if(isUpper ==1){
            printf("\nThe given matrix is Upper Triangle Matrix\n");
    }
    else{
            printf("\nThe given matrix is not Upper Triangle Matrix\n");
    }
    return 0;
}