#include<stdio.h>

int power(int base,int pow);

int main(){
    printf("\nC Prog to calculated power of the given number\n");
    printf("-----------------------------------------\n");

    int base,pow,answer;

    printf("\nEnter the Base number:- ");
    scanf("%d",&base);

    printf("\nEnter the Power to multiply:- ");
    scanf("%d",&pow);

   answer= power(base,pow);
    printf("\n%d ^ %d = %d\n",base,pow,answer);
}

int power(int base,int pow){

    if(pow==0)
        return 1;
    
    else if(pow>0)
        return base *power(base,pow-1);
    else
    return 1 / power(base,-pow);
    
    }
