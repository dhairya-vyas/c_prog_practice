#include<stdio.h>

int main()
{
    printf("C program to check given Matrix is Lower Triangle\n");
    printf("------------------------------------------------\n");
#define size 3
    int i,j;
    int A[size][size];
    int isLower;

printf("\nEnter the Elements of Matrix:-\n");
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        scanf("%d",&A[i][j]);
    }
}

isLower=1;
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if(i>j && A[i][j]!=0){
            isLower=0;
        }
        else{
            isLower=1;
        }
    }
}

if(isLower==1){
    printf("\nThe Matrix is Lower Triangle Matrix\n");
}
else{
    printf("\nThe Matrix is not Lower Triangle Matrix\n");
}
}