#include<stdio.h>

int main()
{
printf("C program to print the Transpose of the Matrix\n");
printf("------------------------------------------------\n");
#define size 3
    int i,j;
    int A[size][size];
    int temp=0;

printf("\nEnter the Elements of Matrix:-\n");
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        scanf("%d",&A[i][j]);
    }
}

for(i=0;i<size;i++){
    for(j=0;j<size;j++){
        if(i!=j){
            temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
}

printf("\nThe Transpose of the given matrix is:- \n");
for(i=0;i<size;i++){
    for(j=0;j<size;j++){
        printf("%d ",A[j][i]);
    }
    printf("\n");
}
}