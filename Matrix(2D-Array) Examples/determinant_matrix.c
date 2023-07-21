#include<stdio.h>

int main()
{
printf("C program to print the Determinant of the Matrix\n");
printf("------------------------------------------------\n");
#define size 2
    int i,j;
    int A[size][size];
    int det=0;

printf("\nEnter the Elements of %d x %d Matrix:-\n",size,size);
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        scanf("%d",&A[i][j]);
    }
}

for(i=0;i<size;i++){
    for(j=0;j<size;j++){
        det = (A[0][0]*A[1][1]) - (A[0][1]*A[1][0]);
        }
    }


printf("\nThe Determinant of the given matrix is:- %d \n",det);
}
