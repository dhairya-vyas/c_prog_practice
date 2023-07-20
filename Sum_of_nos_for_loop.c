#include <stdio.h>

int main()
{
    printf("C Prog to find Sum of Numbers till the given upper limit\n");
    printf("-------------------------------------\n ");

    int i,N,Sum=0;
    printf("Enter the Upper Limit:- \n");
    scanf("%d",&N);

    for(i=0;i<=N;i++)
    {
        Sum=Sum+i;
    }
    
     printf("Sum of all  the numbers upto %d is equal to %d \n",N,Sum);

return 0;
}