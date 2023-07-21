
#include <stdio.h>

int main()
{
    printf("C Prog to Print Maximum & Minimum of all the elements of an Array  \n");
    printf("-------------------------------------\n ");

    int i,n;
    int arr[100];

    printf("Enter the number of elements:-");
    scanf("%d",&n);
    
    printf("Enter the Elements:- ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

  

    int max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++)
    {
      if(arr[i]>max){
        max=arr[i];
      }
    }

    
    for(i=0;i<n;i++)
    {
      if(min>arr[i]){
        min=arr[i];
      }
    }
  printf("\nMaximum of array is :-%d\n",max);
  printf("\nMinimum of array is :- %d\n",min);

return 0;
}