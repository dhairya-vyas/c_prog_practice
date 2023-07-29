#include <stdio.h>

typedef struct complex{
    float real;
    float imag;
}complex;

complex add(complex n1,complex n2);

int main(){
    printf("\nC Prog to add 2 Complex Numbers\n");
    printf("----------------------------\n");

    complex n1,n2,result;

    printf("\nFor the First Complex number\n");
    printf("Enter the real and imaginary parts:- ");
    scanf("%f %f",&n1.real,&n1.imag);

    printf("\nFor the second complex number\n");
    printf("Enter the real nd imaginery parts:- ");
    scanf("%f %f",&n2.real,&n2.imag);

    result=add(n1,n2);

    printf("\n\nSUM = %.1f + %.1fi\n\n",result.real,result.imag);
    return 0;
}

complex add(complex n1, complex n2){
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}