#include <stdio.h>

#define size 100

int main(){
    printf("\nC Prog to find last occurence of a Letter in a String\n");
    printf("------------------------------------------\n");

    int i,index=-1;
    char x;
    char text[size];

    printf("\nEnter the String:- ");
    fgets(text,size,stdin);

    printf("\nEnter the letter you want to find:- ");
    scanf("%c",&x);
    
    for(i=0;text[i] != '\0';i++){

        if(text[i]==x){
            index =i;
        }
    }
    if(text[i]=0){
        printf("\nLetter not found in the given string\n");
    }
    else
    printf("\nThe letter \"%c\" Last occured at index :- %d\n",x,index);
}