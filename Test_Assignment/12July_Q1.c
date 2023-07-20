#include <stdio.h>
int main(){

     printf("C Prog to to Sort an Array in Ascending Order \n");
    printf("-------------------------------------\n ");

    int i , j ,temp;

    int n;
    printf("Enter the number of elements of array:- ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the Elements:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //For displaying elements in Unsorted Order
    printf("\n The Elements in Unsorted Manner are:- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    //Logic for Printing in Ascending order
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }

    //For Printing in ascending order
    printf("\n The Elements in Ascending order are:- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}