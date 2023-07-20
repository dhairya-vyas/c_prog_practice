
#include <stdio.h>

int main()
{
    printf("C Prog to count frequency of Array elements\n");
    printf("-------------------------------------\n ");

    int i,n,count=0;
    int arr[n],freq[n];

    printf("Enter the number of elements:-");
    scanf("%d",&n);

    printf("Enter the elements of the array:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<n;i++)
    {
           if(arr[i]==arr[i])
           {
            count++;
           }
    }
    printf("\nThe frequency of:- ");
     for(i=0;i<n;i++)
     {
        printf("%d = %d\n",arr[i],count);
     }
     
    
return 0;
}