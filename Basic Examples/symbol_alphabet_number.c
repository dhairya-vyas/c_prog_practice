
#include <stdio.h>

int main()
{
    printf("C Prog to find the given character is Symbol or Alphabet or Number\n");
    printf("-------------------------------------\n ");

    char ch;

    printf("Enter the Character:- ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    printf("The given character '%c' is an Alphabet \n",ch);

    else if(ch>='0' && ch<='9')
    printf("The given character '%c' is a Digit \n",ch);

    else
    printf("The given character '%c' is a Symbol \n",ch);

return 0;
}