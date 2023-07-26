#include <stdio.h>

#define size 100

int printarray(int *arr_ptr,int n);
int asc_array(int *arr_ptr,int n);
int desc_array(int *arr_ptr,int n);

int main(){
printf("\nC Prog to Sort an Array using Pointers\n");
printf("----------------------------------------\n");

int arr[size];
int i,n;

printf("\nEnter the number of Elements of Array:- ");
scanf("%d",&n);

printf("\nEnter the %d Elements of Array:- ",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("\nThe %d elements of Array in Unsorted manner are:- ",n);
printarray(arr,n);


printf("\nThe %d Sorted elements of array in Ascending order are:- ",n);
asc_array(arr,n);
printarray(arr,n);


printf("\nThe %d Sorted elements of array in Descending order are:- ",n);
desc_array(arr,n);
printarray(arr,n);


return 0;
}


int printarray(int *arr_ptr,int n)
{
    int i;
    for(i=0;i<n;i++){
    printf("%d ",arr_ptr[i]);
    }
}

int asc_array(int *arr_ptr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr_ptr[i]>=arr_ptr[j]){
                temp=arr_ptr[i];
                arr_ptr[i]=arr_ptr[j];
                arr_ptr[j]=temp;
            }   
        }
    }
}

int desc_array(int *arr_ptr,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr_ptr[i]<=arr_ptr[j]){
                temp=arr_ptr[i];
                arr_ptr[i]=arr_ptr[j];
                arr_ptr[j]=temp;
            }
        }
    }
}

