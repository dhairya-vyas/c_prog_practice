#include<stdio.h>

#define size 100

int main()
{

int i,n;
int arr[size];

    printf("Enter the number of Elements:- ");
    scanf("%d",&n);

    printf("Enter the Array Elements:- ");
     for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nThe elements of Array before reversing are:- ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\nThe elements of Array after reversing are:- ");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    
}