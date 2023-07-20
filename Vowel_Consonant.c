
#include <stdio.h>

int main()
{
    printf("C Prog to find the given Alphabet is Vowel or Consonant\n");
    printf("-------------------------------------\n ");

    char ch;

    printf("Enter the Character:- ");
    scanf("%c",&ch);

    if(ch =='a' ||ch == 'e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("The given character '%c' is an Vowel \n",ch);

    else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    printf("The given character '%c' is a Consonant \n",ch);

    else
    printf("The given character '%c' is not a valid Alphabet \n",ch);

return 0;
}