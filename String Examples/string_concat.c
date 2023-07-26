#include<stdio.h>

int main(){
    printf("\nC Prog to print Concatenated String from the Given 2 Strings\n");
    printf("-------------------------------------------------\n");

#define size 100
    char text[size],text2[size];
    int i,j;

    printf("\n Enter the 1st String:- ");
        fgets(text,100,stdin);
    printf("\n Enter the 2nd String:- ");
        fgets(text2,100,stdin);    

    for(i=0;text[i]!='\0';i++){
    }
    text[i-1]=' ';
    
    for(j=0;text2[j]!='\0';j++){
        text[i+j] = text2[j];
    }
    printf("\nThe New Concatenated string is:- %s",text);

    return 0;
}