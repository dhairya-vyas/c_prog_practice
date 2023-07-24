#include<stdio.h>
int palindrome(int num);
int reverse_num(int num);

int main(){
    printf("\nC Prog to find reverse of Number\n");
    printf("--------------------------------\n");

    int num;

    printf("\nEnter the number :- ");
    scanf("%d",&num);

    if(palindrome(num) == 0){
        printf("The number %d is a Palindrome number",num);
    }
    else{
        printf("The number %d is not a Palindrome number",num);
    }
 return 0;   
}

int reverse_num(int num){
    int reverse=0;
    while(num!=0){
        reverse = (reverse*10) + (num%10);
        num = num / 10;   
    }
    return reverse;
}

int palindrome(int num){
   if (num == reverse_num(num))
    {
        return 0;
    }
    else{
        return 1;
    }
}