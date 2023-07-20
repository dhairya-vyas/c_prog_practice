
#include <stdio.h>

int main()
{
    printf("C Prog to Delete Array elements\n");
    printf("-------------------------------------\n ");

    int i,n,dlt;
    int arr[n];

    printf("Enter the number of elements:-");
    scanf("%d",&n);

    printf("Enter the elements of the array:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to Delete:- ");
    scanf("%d",&dlt);

   printf("\nThe Array before Deletion:- ");
     for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }

    for(i=dlt-1;i<n-1;i++)
    {
            arr[i]=arr[i+1];
    }
    printf("\nThe Array after Deletion:- ");
     for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
     
    
return 0;
}