#include <stdio.h>

#define size 100

int main(){
    printf("\nC Prog to reverse an Array using Pointers\n");
    printf("----------------------------------------------\n");

    int i,n;
    int arr[size];

    int *arr_ptr=arr;
    printf("\nEnter the number of elements:- ");
    scanf("%d",&n);

    printf("\nEnter the elements of the Array:- ");
    for(i=0;i<n;i++){
        scanf("%d",(arr_ptr +i));
    }

    printf("\nThe array elements before reversing:- ");
    for(i=0;i<n;i++){
        printf("%d ",*(arr_ptr +i));
    }

    printf("\nThe array elements after reversing:- ");
    for(i=n-1;i>=0;i--){
        printf("%d ",*(arr_ptr +i));
    }
}