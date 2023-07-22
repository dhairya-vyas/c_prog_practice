#include<stdio.h>

int Nat(int num1,int num2);

int main(){
    printf("\nC Prog to print all Natural numbers between the given range\n");
    printf("---------------------------------------------\n");

int num1,num2;

    printf("\nEnter the 1st Number:- ");
    scanf("%d",&num1);

    printf("\nEnter the 2nd Number:- ");
    scanf("%d",&num2);

    if(num1<1){
        num1=1;
    }
    if(num2>num1){
    Nat(num1,num2);
    }
    else{
        printf("\nThe 2nd number should be smaller than 1st number\n");
    }

return 0;
}

int Nat(int num1,int num2){
    if(num2>num1){
            for(int i=num1;i<=num2;i++){
                printf("%d",i);
            if(i!=num2){
                printf(",");
            }
        }
    }
}
