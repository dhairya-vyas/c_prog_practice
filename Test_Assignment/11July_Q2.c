
#include <stdio.h>

int main()
{
    printf("C Prog to find Reverse of String \n");
    printf("-------------------------------------\n ");

    char str[50],revstr[50];
    int i, strIndex, revIndex, len;

    printf("Enter the String:-");
    scanf("%s",&str);
     printf("\nBefore reversing the String:- %s\n",str);

while(str[i] != '\0'){
    i++;
    len = i;
}

revIndex = 0;
strIndex = len-1;
while(strIndex >=0)
{
    revstr[revIndex] = str[strIndex];
    
    strIndex--;
    revIndex++;
    
}
revstr[revIndex] = '\0';
printf("After reversing the String: %s\n",revstr);
    
return 0;
}