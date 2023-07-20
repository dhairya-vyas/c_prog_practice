
#include <stdio.h>

int main()
{
    printf("C Prog to find Sum of First and Last Digit of a given number \n");
    printf("-------------------------------------\n ");

    int num,first,last,sum=0;

    printf("Enter the Number:- \n");
    scanf("%d",&num);

    last = num % 10;
   

    first= num;
    while(num>=10){
        num = num /10;
    }
   first= num;
   
    sum = first + last;
    printf("%d",sum);
    
return 0;
}