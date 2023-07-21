
#include <stdio.h>

double cube(double num);

int main()
{
    printf("C Prog to find Cube of number using Functions \n");
    printf("-------------------------------------\n ");

    int num;
    double c;

    printf("Enter the Number:-");
    scanf("%d",&num);
    
    c=cube(num);

    printf("Cube of %d is %.2f\n",num,c);

return 0;
}

double cube(double num)
{
    return(num*num*num);
}