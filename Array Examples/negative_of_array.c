
#include <stdio.h>

int main()
{
    printf("C Prog to count Negative elements in an Array  \n");
    printf("-------------------------------------\n ");

    int i,n;
    int arr[100];
    int neg_count=0;
    printf("Enter the number of elements:-");
    scanf("%d",&n);
    
    printf("Enter the Elements:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Elements of Array are:- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

   for(i=0;i<n;i++)
    {
        if (arr[i]<0){
            neg_count++;
        }
    }

   printf("\nNegative elements of array are:- %d\n",neg_count);

return 0;
}