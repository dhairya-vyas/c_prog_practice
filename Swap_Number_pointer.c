
#include <stdio.h>

int main()
{
    printf("C Prog to SWAP Numbers using Pointers \n");
    printf("-------------------------------------\n ");

    int num1,num2;
    int *ptr1,*ptr2;
    int temp;
    printf("Enter the 1st number:-");
    scanf("%d",&num1);

    printf("Enter the 2nd number:-");
    scanf("%d",&num2);

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Before Swapping the Number is :- %d & %d\n",(*ptr1),(*ptr2));
   
    temp = *ptr1;
    *ptr1 =*ptr2;
     *ptr2 = temp;

     printf("After Swapping the Number is :- %d & %d\n",(*ptr1),(*ptr2));

return 0;
}