#include<stdio.h>
int reversenum(int num,int reverse);

int main(){
    printf("\nC Prog to find reverse of Number\n");
    printf("--------------------------------\n");

    int num,reverse;

    printf("\nEnter the number :- ");
    scanf("%d",&num);

   reversenum(num,reverse);
 return 0;   
}

int reversenum(int num,int reverse){
    while(num!=0){
        reverse = (reverse*10) + (num%10);
        num = num / 10;
       
    }
     printf("\nThe Reversed number is %d\n",reverse);
}