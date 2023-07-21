
#include <stdio.h>

int main()
{
    printf("C Prog to find Reverse of all digits \n");
    printf("-------------------------------------\n ");

    int num,reverse=0;
    printf("Enter the Number \n");
    scanf("%d",&num);

    while(num!=0){
        reverse = reverse *10 + (num%10);
        num = num / 10;
    }
    printf("Reverse Number = %d\n",reverse);
    
return 0;
}