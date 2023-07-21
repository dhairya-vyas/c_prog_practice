#include<stdio.h>

int main(){
    printf("\nC Prog to replace duplicate elements with 0\n");
    printf("---------------------------------------------\n");

    int n,i,j;
    int arr[n];
    printf("\nEnter the number of elements:- ");
    scanf("%d",&n);

    printf("\nEnter the elements of array:- ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe array with Duplicate elements is:- \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]==arr[i]){
            arr[i]=0;
        }
        else{
            arr[i]=arr[i];
        }
    }

    printf("\nThe array without Duplicate elements is:- \n");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }

    }