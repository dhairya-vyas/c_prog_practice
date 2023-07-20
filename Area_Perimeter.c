
#include <stdio.h>

int main()
{
    printf("C Prog to find ARea and Perimeter of a Square or Rectangle:- \n");
    printf("-------------------------------------\n ");

    float len,breadth,area=0,peri=0;

    printf("Enter the first number:- ");
    scanf("%f",&len);

    printf("Enter the second number:- ");
    scanf("%f",&breadth);

    peri = 2 * (len + breadth);
    printf("The perimeter of rectangle is equal to %f \n",peri);

    area = len * breadth;
    printf("The area of rectangle is equal to %f \n",area);
    
return 0;
}