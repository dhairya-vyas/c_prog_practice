
#include <stdio.h>

int main()
{
    printf("C Prog to Print Pyramid Pattern of Stars \n");
    printf("-------------------------------------\n ");

    int n,i,j,value,space;
    printf("\nEnter the Number of lines:- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(space=0;space<=(n-i);space++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            if(i==1 || j==1){
                value =1;
            }
            else{
                value = value * (i-j+1)/(j-1);
            }
            printf("%4d",value);
        }
    printf("\n");
    }
return 0;
}