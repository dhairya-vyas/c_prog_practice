#include <stdio.h>

    int getmax(int num1,int num2);
    int getmin(int num1,int num2);

 int main(){

    printf("\nC Prog to find Maximum and Minimum number \n");
    printf("---------------------------------------------\n");

    int num1,num2;
    int max,min;

    printf("Enter the 1st Number:- ");
    scanf("%d",&num1);

    printf("Enter the 2nd Number:- ");
    scanf("%d",&num2);

    max=getmax(num1,num2);
    printf("\nThe Maximum number is :- %d\n",max);
    min=getmin(num1,num2);
    printf("\nThe Minimum number is :- %d\n",min);

    return 0;
 }

 int getmax(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    else {
        return num2;
    }
 }

 int getmin(int num1,int num2){
    if(num1>num2){
        return num2;
    }
    else {
        return num1;
    }
 }