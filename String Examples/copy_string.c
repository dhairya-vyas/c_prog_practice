#include<stdio.h>

int main(){
    printf("\nC Pog to print Another String from the Given String\n");
    printf("-------------------------------------------------\n");

#define size 100
    char text[size],text2[size];
    int i;
    int count=0;

    printf("\n Enter the String:- ");
        fgets(text,100,stdin);

    for(i=0;text[i]!='\0';i++){
        text2[i] = text[i];
    }
    printf("\nThe Previous string is:- %s\n",text);
    printf("\nThe New string is:- %s\n",text2);

    return 0;
}