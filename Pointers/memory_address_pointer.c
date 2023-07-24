#include<stdio.h>

int main(){
    printf("\nC Prog to print memory address of various operators\n");
    printf("------------------------------------------------------\n");

    char character = 'C';
    int integer = 1;
    float real = 10.4f;
    long long biginteger = 989898989ll;

    printf("\nThe Value of character = %c The Address of character = %u\n",character,&character);
    printf("\nThe Value of Integer = %d The Address of Integer = %u\n",integer,&integer);
    printf("\nThe Value of real = %f The Address of real = %u\n",real,&real);
    printf("\nThe Value of biginteger = %lld The Address of biginteger = %u\n",biginteger,&biginteger);
}

  