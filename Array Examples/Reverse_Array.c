#include<stdio.h>

#define MAX_SIZE 100

int main()
{
    int source_arr[MAX_SIZE],dest_arr[MAX_SIZE];
    int size,i;

    int *source_ptr = source_arr;
    int *dest_ptr = dest_arr;

    int *end_ptr;

    printf("Enter the number of Elements:- ");
    scanf("%d",size);

    printf("Enter the Array Elements:- ");
     for(i=0;i<=size;i++)
    {
        scanf("%d",source_arr[i]);
    }

    
}