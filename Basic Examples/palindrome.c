#include<stdio.h>

int main()
{
     printf("C Prog to find the number is palindrome \n");
    printf("-------------------------------------\n ");

int n,num,rev=0;
printf("Enter the Nmuber \n");
scanf("%d",&num);

n=num;

while(n!=0){
    rev = (rev * 10) + (n%10);
    n = n / 10;
}
if(rev == num){
    printf("The number %d is Palindrome Number",num);
}
else{
    printf("The number %d is not Palindrome",num);
}
return 0;
}