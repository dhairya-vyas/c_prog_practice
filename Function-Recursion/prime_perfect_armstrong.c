#include <stdio.h>

int checkPri(int num);
int checkPerf(int num);
int checkArm(int num);


int main(){
    printf("\nC Prog to cehck number is Prime number, Armstrong Number and Perfect Number\n");
    printf("---------------------------------------------\n");

    int num;

    printf("\nEnter the Number;- ");
    scanf("%d",&num);

    if (checkPri(num)){
        printf("\nThe number %d is a Prime Number\n");
    }
    else{
        printf("\nThe number %d is not a Prime Number\n");
    }
    
    if(checkPerf(num)){
        printf("\nThe number %d is a Perfect Number\n");
    }
    else{
        printf("\nThe number %d is not a Perfect Number\n");
    }

    if(checkArm(num)){
        printf("\nThe number %d is a Armstrong Number\n");
    }
    else{
        printf("\nThe number %d is not a Armstrong Number\n");
    }

    return 0;
}

int checkPri(int num){
    int i;
    for(i=2;i<=num/2;i++){
    if(num%i==0){
        return 0;
    }
    else{
        return 1;
    }
    }
}