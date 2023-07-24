#include <stdio.h>

#define size 100

void printArray(int arr[],int n);

int main(){
    printf("\nC Prog to Swap 2 Arrays using Pointers\n");
    printf("--------------------------------\n");

    int i,n;
    int arr1[size],arr2[size];

    int *arr1_ptr = arr1;
    int *arr2_ptr = arr2;

    printf("\nEnter the number of Elements:- ");
    scanf("%d",&n);

    printf("\nEnter the Array elements:- ");
    for(i=0;i<n;i++){
        scanf("%d",(arr1_ptr + i));
    }

    printf("\nThe elements of 1st array before swapping are:- ");
    printArray(arr1,n);

    printf("\nThe elements of 2nd array before swapping are:- ");
    printArray(arr2,n);

    for(i=0;i<n;i++){
        int temp = *(arr1_ptr + i);
        *(arr1_ptr + i) = *(arr2_ptr + i);
        *(arr2_ptr + i) = temp;
    }

    printf("\nThe elements of 1st array after swapping are:- ");
    printArray(arr1,n);

    printf("\nThe elements of 2nd array after swapping are:- ");
    printArray(arr2,n);

return 0;
}


void printArray(int *arr,int n){
    int i;

    for(i=0;i<n;i++){
        printf("%d ",*(arr + i));
    }
}