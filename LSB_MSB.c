
#include <stdio.h>

int main()
{
    printf("C Prog to find Least Significant Bit and Most Significant bit \n");
    printf("-------------------------------------\n ");

    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

   if(num & 1){
   printf("LSB of %d is set to (1) \n",num);
   }
   else{
   printf("LSB of %d is set to (0)\n ",num);
   }
    
return 0;
}