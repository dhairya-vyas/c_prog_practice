#include <stdio.h>

void checkPrime(int num1,int num2);

int main(){
    printf("\nC Prog to find prime numbers between 2 numbers\n");
    printf("---------------------------------------\n");

    int num1,num2,ans;

    printf("\nEnter the 1st number;- ");
    scanf("%d",&num1);

    printf("\nEnter the 2nd number;- ");
    scanf("%d",&num2);

    checkPrime(num1,num2);

    return 0;
}

void checkPrime(int num1,int num2){
for(int i=num1;i<=num2;i++){
        int isPrime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
               isPrime=0;
               break;
            }
            }
            if(isPrime==1 && i>1){
                printf("%d is Prime\n",i);
        }
    }
}    