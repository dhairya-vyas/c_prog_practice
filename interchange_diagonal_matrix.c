#include <stdio.h>

int main(){

    printf("C Prog to Interchange Diagonals of the Matrix\n");
    printf("-------------------------------------\n ");

    #define size 3
    int i,j;
    int sum;
    int A[size][size];

    printf("\nEnter the Elements of Matrix:-\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&A[i][j]);
        }
    }

   
    for(i=0;i<size;i++){
        sum=0;
        for(j=0;j<size;j++){
            sum = sum + A[i][j];
        }
         printf("The sum of elements of Row %d= %d\n",i+1,sum);
    }

     for(i=0;i<size;i++){
        sum=0;
        for(j=0;j<size;j++){
            sum = sum + A[j][i];
        }
         printf("The sum of elements of Column %d= %d\n",i+1,sum);
    }
    return 0;
}