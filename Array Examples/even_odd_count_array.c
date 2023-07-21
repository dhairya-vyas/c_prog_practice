
#include <stdio.h>

int main()
{
    printf("C Prog to count EVEN and ODD elements in an Array  \n");
    printf("-------------------------------------\n ");

    int i,n;
    int arr[100];
    int even_count=0,odd_count=0;
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
        printf("%d",arr[i]);
    }

   for(i=0;i<n;i++)
    {
        if (arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }

   printf("\nEven elements of array are:- %d\n",even_count);
   printf("\Odd elements of array are:- %d\n",odd_count); 

return 0;
}