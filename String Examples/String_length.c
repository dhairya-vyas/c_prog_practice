#include<stdio.h>

int main(){
    printf("\nC Pog to print Length of the Given String\n");
    printf("-------------------------------------------------\n");

#define size 100
    char text[size];
    int i;
    int count=0,len;

    printf("\n Enter the String:- ");
        fgets(text,100,stdin);

    for(i=0;text[i]!='\n';i++){
    }
    text[i]='\0';
    printf("\nThe length of \"%s\" is:- %d\n",text,i);

    return 0;
}