
#include <stdio.h>

int main()
{
    printf("C Prog to Print all the elements of an Array  \n");
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

    printf("\n The Elements of Array are:- ");
    for(i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }
return 0;
}