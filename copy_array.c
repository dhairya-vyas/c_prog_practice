
#include <stdio.h>

int main()
{
    printf("C Prog to Copy Array elements to another array  \n");
    printf("-------------------------------------\n ");

    int i,n;
    int arr[100],arr2[100];

    printf("Enter the number of elements:-");
    scanf("%d",&n);

    printf("Enter the elements of the array:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
            arr2[i]=arr[i];
    }
    printf("\nThe old elements of array are:- ");
     for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }

     printf("\nThe new elements of array are:- ");
     for(i=0;i<n;i++)
     {
        printf("%d ",arr2[i]);
     }
    
return 0;
}