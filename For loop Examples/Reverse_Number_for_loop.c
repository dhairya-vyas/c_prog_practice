
#include <stdio.h>

int main()
{
    printf("C Prog to Print Reverse Numbers from N to 1  \n");
    printf("-------------------------------------\n ");

    int start,i;
    printf("Enter the number from where you want to start:-  ");
    scanf("%d",&start);

    for(i=start;i>=1;i--){
        printf("%d\n",i);
    }
    
return 0;
}