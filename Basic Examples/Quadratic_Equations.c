#include <stdio.h>
#include <math.h>

int main()
{
    printf("C Prog to find Roots of a Quadratic Equation \n");
    printf("-------------------------------------\n ");

    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;
    
    printf("Enter the 3 coefficients of the equation(aX^2 + bX + c):- ");
    scanf("%f %f %f",&a,&b,&c);
    
    discriminant = ((b*b) - (4 * a * c));

    if(discriminant > 0){
        
        root1 = ((-b)-sqrt(discriminant))/(2 * a);
        root2 = ((-b)+sqrt(discriminant))/(2 * a);
        printf("The 2 Distinct and Real roots exist %.2f & %.2f",root1,root2);
    }

    else if (discriminant == 0){
        root1 = root2 = (-b) / (2 * a);
        printf("The 2 Equal and Real roots exist %.2f & %.2f",root1,root2);
    }

    else {
        root1 = root2 = (-b) / (2 * a);
        imaginary = sqrt(discriminant) / (2 * a);
        printf("The 2 Equal and Complex roots exist %.2f + i%.2f & %.2f - i%.2f",root1,imaginary,root2,imaginary);
    }

return 0;
}