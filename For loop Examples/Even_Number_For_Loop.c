
#include <stdio.h>

int main()
{
    printf("C Prog to find all the Even Numbers \n");
    printf("-------------------------------------\n ");

    int i,y;
    printf("Enter the Last number upto which you want to print the Even Numbers:- ");
    scanf("%d",&y);

    for(i=y;i>=0;i--){
        if(i%2==0){
        printf("%d\n",i);
    }    
    }
return 0;
}