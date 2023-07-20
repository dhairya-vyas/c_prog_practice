
#include <stdio.h>

int main()
{
    printf("C Prog to print Hollow Reverse Triangle Pattern of Stars\n");
    printf("-------------------------------------\n ");

    int n,i,j;
    printf("Enter the number of lines:-");
    scanf("%d",&n);

for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        printf(" ");
    }
    for(j=i;j<=n;j++)
    {
        if(i==1|| j==1 || j==i || j==n){
        printf("*");
    }
    else{
        printf(" ");
    }
    }
    printf("\n");
}

return 0;
}