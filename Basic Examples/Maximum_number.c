
#include <stdio.h>

int main()
{
    printf("C Prog to find Maximum of 3 numbers\n");
    printf("-------------------------------------\n ");

    int x,y,z,max;

    printf("Enter 1st Number:- ");
    scanf("%d",&x);

    printf("Enter 2nd Number:- ");
    scanf("%d",&y);

    printf("Enter 3rd Number:- ");
    scanf("%d",&z);

if(x>y && x>z){
    printf("%d is the Maximum number \n",x);
}
else if(y>x && y>z){
    printf("%d is the Maximum number \n",y);
}
else{
    printf("%d is the Maximum number \n",z);
}
 
    
return 0;
}