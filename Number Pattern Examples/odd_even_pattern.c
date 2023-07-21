
#include <stdio.h>

int main()
{
// 2,33,222,5555,22222,777777,2222222,99999999
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<=i;j++)
        if(i%2==0){
            printf("2",i);
        }
        else
        {
            printf("%d",i+2);
        }
        if(i>8){
        printf(" ");
    }
    else{
        printf(" , ");
    }
    }

    
return 0;
}


 