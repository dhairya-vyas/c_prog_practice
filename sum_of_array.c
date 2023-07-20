
#include <stdio.h>

int main()
{
    printf("C Prog to find Sum of all the elements of an Array  \n");
    printf("-------------------------------------\n ");

    int i,n,sum=0;
    int arr[100];
    printf("Enter the number of elements:-");
    scanf("%d",&n);
    
    printf("Enter the Elements:- ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum +=arr[i];
    }
    printf("\n The Sum of the Elements of Array is:-%d\n",sum);
return 0;
}