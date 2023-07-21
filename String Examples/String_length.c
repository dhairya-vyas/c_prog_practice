#include<stdio.h>

int main(){
    printf("\nC Pog to print Length of the Given String\n");
    printf("-------------------------------------------------\n");

#define size 100
    char text[size];
    int i;
    int count=0;

    printf("\n Enter the String:- ");
        fgets(text,100,stdin);

    for(i=0;text[i]!='\0';i++){
    }
    printf("\nThe length of the %s string is:- %d\n",text,i);

    return 0;
}