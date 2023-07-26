#include<stdio.h>

#define ROW 3
#define COL 3

void inputArray(int matrix[][COL],int row,int col);
void printArray(int matrix[][COL],int row,int col);

int main(){
    printf("\nC Prog to print Matrix using Pointers\n");
    printf("----------------------------------------\n");

    int i,j;
    int matrix[ROW][COL];

    printf("\nEnter the Elements in %d x %d order:- \n",ROW,COL);
    inputArray(matrix, ROW, COL);


    printf("\nThe elements of the %d x %d Matrix are:- \n",ROW,COL);
    printArray(matrix, ROW, COL);
}


void inputArray(int matrix[][COL],int row, int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j =0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}

void printArray(int (*matrix)[COL],int row, int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}