#include <stdio.h>

#define size 100

int main(){
    printf("\nC Prog to find first occurence of a Letter in a String\n");
    printf("------------------------------------------\n");

    int i,j;
    char x;
    int pos;
    char text[size];

    printf("\nEnter the String:- ");
    fgets(text,size,stdin);

    printf("\nEnter the letter you want to find:- ");
    scanf("%c",&x);
    
    for(i=0;text[i]!=x && text[i] != '\0';i++){

        }
    if(text[i]=='\0'){
        printf("\nLetter not found in the given string\n");
    }
    else
    printf("\nThe letter \"%c\" first occured at index :- %d\n",x,i);
}