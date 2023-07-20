
#include <stdio.h>

int main()
{
    printf("C Prog to find Largest Element of an Array\n");
    printf("-------------------------------------\n ");

    int size;
    int *arr;
    int i;
    printf("Enter the number of elements:-");
    scanf("%d",&size);

    printf("\nEnter the Elements of array:-");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];

for(i=0;i<size;++i)
    if(arr[i]>temp)
    {
        temp = arr[i];
    }
printf("The Largest Element of the Array is:- %d\n",temp);
return 0;
}