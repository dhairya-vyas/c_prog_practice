
#include <stdio.h>

int main()
{
    printf("C Prog to find Sum of all digits\n");
    printf("-------------------------------------\n ");

    int num;
    long long pdt=1ll;
    printf("Enter the number:- \n");
    scanf("%d",&num);

if (num==0){
    pdt = 0;
}
else{
    pdt=1ll;
}
while(num != 0){
    pdt =pdt *( num % 10) ;

    num = num / 10;
}
printf("%lld\n",pdt);
    
return 0;
}