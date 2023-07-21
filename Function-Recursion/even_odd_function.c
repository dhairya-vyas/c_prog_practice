#include<stdio.h>

int check(int num);

int main(){
    printf("\nC Prog to check number is Even or Odd\n");
    printf("----------------------------------------\n");

    int num;

    printf("\nEnter the number:- ");
    scanf("%d",&num);

    if(check(num)==1){
        printf("\nThe number %d is ODD\n",num);
    }
    else if (check(num) == 0){
        printf("\nThe number %d is EVEN\n",num);
    }
        return 0;
    }

int check(int num){
    if(num%2!=0){
        return 1;
    }
    else {
        return 0;
    }
}