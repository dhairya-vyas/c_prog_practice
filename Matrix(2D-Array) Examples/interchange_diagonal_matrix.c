#include <stdio.h>

int main(){

    printf("C Prog to Interchange Diagonals of the Matrix\n");
    printf("-------------------------------------\n ");

    int i,j;
    int temp;
    int size;

    printf("Enter the Size of Matrix:- ");
    scanf("%d",&size);
    int A[size][size];
    

    printf("\nEnter the Elements of %d x %d Matrix:-\n",size,size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nThe Interchanged Diagonal Elements of Matrix:-\n");
        for(j=0;j<size;j++){
            temp=A[j][j];
            A[j][j]=A[j][size-j-1];
            A[j][size-j-1]=temp;
        }
   

     for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%4d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}