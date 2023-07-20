
#include <stdio.h>

int main()
{
    printf("C Prog to Print all alphabets  \n");
    printf("-------------------------------------\n ");

    char alpha;
    printf("Enter the first alphabet to start printing:-  ");
    scanf("%c",&alpha);

 if (alpha < 'A' || alpha > 'Z') {
        printf("Invalid input. Please enter a capital letter.\n");
        return 0;
    }

    for(char y = alpha;y<='Z';y++)
    {
        printf("%c\n",y);
    }
return 0;
}