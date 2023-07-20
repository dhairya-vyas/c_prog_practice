#include<stdio.h>

int main()
{
printf("C program to check if the Matrix is Sparse Matrix\n");
printf("------------------------------------------------\n");
#define size 3
    int i,j;
    int A[size][size];
    int T=0;

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
        if(A[i][j]==0){
            T++;   
        }
        }
    }

if( T>=((i*j)/2)){
printf("\nThe given Matrix is a Sparse Matrix \n");
}
else{
  printf("\nThe given Matrix is not a Sparse Matrix \n");  
}
return 0;
}
