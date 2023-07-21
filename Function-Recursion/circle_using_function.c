#include<stdio.h>

double getDia(double radius);
double getCirc(double radius);
double getArea(double radius);


int main()
{
    printf("\nC Prog to find Diameter, Perimeter and Area from given Radius\n");
    printf("-----------------------------------------------------\n");

    int rad;
    double dia,circ,area;

    printf("Enter the Radius of the Circle:- ");
    scanf("%d",&rad);

    dia=getDia(rad);
    printf("\nThe Diameter of the Circle with Radius %d is :- %.2f\n",rad,dia);

    circ=getCirc(rad);
    printf("\nThe Circumference of the Circle with Radius %d is :- %.2f\n",rad,circ);

    area=getArea(rad);
    printf("\nThe Area of the Circle with Radius %d is :- %.2f\n",rad,area);

    return 0;
}

double getDia(double rad)
{
    return (2*rad);
}

double getCirc(double rad)
{
    return (2*3.14*rad);
}

double getArea(double rad)
{
    return (3.14*rad*rad);
}