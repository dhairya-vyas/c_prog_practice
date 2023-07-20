
#include <stdio.h>

int main()
{
    printf("C Prog to insert a New Elemen in an Array  \n");
    printf("-------------------------------------\n ");

    int i,n,num,pos;
    int arr[100];
    printf("Enter the number of elements:-");
    scanf("%d",&n);
    
    printf("Enter the Elements:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of new element:- ");
    scanf("%d",&num);

    printf("Enter the position of new element:- ");
    scanf("%d",&pos);

    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    n++;
   
   printf("Array Elements after insertion are:- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

return 0;
}