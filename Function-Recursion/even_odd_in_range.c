#include<stdio.h>

int checkODD(int num1,int num2);
int checkEVEN(int num1,int num2);

int main(){
    printf("\nC Prog to check number is Even or Odd\n");
    printf("----------------------------------------\n");

    int num1,num2;

    printf("\nEnter the 1st number:- ");
    scanf("%d",&num1);

    printf("\nEnter the 2nd number:- ");
    scanf("%d",&num2);


    checkODD(num1,num2);
    checkEVEN(num1,num2);
    
}
int checkODD(int num1,int num2){
    printf("\nThe ODD numbers between %d & %d are:- ",num1,num2);
    for(int i=num1;i<=num2;i++){
    if(i%2!=0){
        printf("%d",i);
    
    if(i!=num2 && i!=num2-1){
        printf(",");
    }
    }
}
}

int checkEVEN(int num1,int num2){
     printf("\nThe EVEN numbers between %d & %d are:- ",num1,num2);
    for(int i=num1;i<=num2;i++){
    if(i%2==0){
       printf("%d",i);
    
     if(i!=num2){
        printf(",");
    }
    }
}
}