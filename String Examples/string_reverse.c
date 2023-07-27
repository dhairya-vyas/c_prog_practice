#include <stdio.h>
#define size 100

int main(){
    printf("\nC Prog to find Reverse of the given String\n");
    printf("----------------------------------------\n");

    char text[size],rev[size];
    int i,j;

    printf("\nEnter the String:- ");
    fgets(text,size,stdin);

    for(i=0;text[i]!='\n';i++){
        }
    text[i] = '\0';
    for(j=0;j<i;j++){
            rev[j] = text[i-j-1];    
    }
    printf("\nThe reverse string is :- %s\n",rev);
}