#include<stdio.h>

int strong(int num1,int num2);
int main(){
    
    printf("\nC Prog to find Strong number between the given range\n");
    printf("------------------------------------------------\n");

    int num1,num2;

    printf("\nEnter the first number:- ");
    scanf("%d",&num1);

    printf("\nEnter the second Number:-");
    scanf("%d",&num2);

    printf("\n The strong numbers are:- ");

    strong(num1,num2);

   return 0;
}

int strong(int num1,int num2){

    int i,j,sum=0,fact,lastdigit;
for(j=num1;j<=num2;j++){
    int original =j;
    sum =0;
    int temp = j;
   while(temp>0){
     lastdigit = temp%10;
     fact=1;
     for(i=1;i<=lastdigit;i++){
        fact =fact * i;
     }

     sum = sum + fact;
     temp= temp/10;
     }
     if(sum == original){
        printf("%d ",original);
     }
   }
   printf("\n");
}