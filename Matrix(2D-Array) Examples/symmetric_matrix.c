#include<stdio.h>

int main()
{
printf("C program to print the Transpose of the Matrix\n");
printf("------------------------------------------------\n");
#define size 3
    int i,j;
    int A[size][size];
    int isIdentity;

printf("\nEnter the Elements of Matrix:-\n");
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        scanf("%d",&A[i][j]);
    }
}

isIdentity=1;
for(i=0;i<size;i++){
    for(j=0;j<size;j++){
        if(i==j && A[i][j]!=1){
            isIdentity=0;
        }
       else if(i!=j && A[i][j]!=0){
            isIdentity=0;
    }
}
}

if(isIdentity==1){
    printf("\nThe Given Matrix is an identity Matrix\n");
}
else{
    printf("\nThe Given Matrix is not an Identity Matrix\n");
}
}