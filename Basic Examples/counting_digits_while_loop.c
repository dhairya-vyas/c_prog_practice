
#include <stdio.h>

int main()
{
    printf("C Prog to Calculate number of Digits  \n");
    printf("-------------------------------------\n ");

    long long num;
    int count=0;
    printf("Enter the whole Number:- \n");
    scanf("%lld",&num);

    do
    {
        count++;

        num = num / 10;
    }
while (num!=0);
 printf("Total number of digits are:- %d\n",count);   
return 0;
}
