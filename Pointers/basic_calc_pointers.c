
#include <stdio.h>

int main()
{
    printf("C Prog to make a Basic Calculator using Pointers \n");
    printf("-------------------------------------\n ");

    float num1,num2;
    float *ptr1,*ptr2;
    printf("Enter the 1st number:-");
    scanf("%f",&num1);

    printf("Enter the 2nd number:-");
    scanf("%f",&num2);

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Sum is :- %.2f\n",(*ptr1) + (*ptr2));

    printf("Difference is :- %.2f\n",(*ptr1) - (*ptr2));

    printf("Product is :- %.2f\n",(*ptr1) * (*ptr2));

    printf("Division is :- %.2f\n",(*ptr1) / (*ptr2));

return 0;
}