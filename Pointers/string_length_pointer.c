#include <stdio.h>

#define size 100

int length(const char *str);

int main(){
    printf("\nC Prog to find length of given String\n");
    printf("--------------------------------------\n");

    char text[size];
    int i;

    printf("\nEnter the String :- ");
    fgets(text,size,stdin);

    int strsize= length(text);
    text[strsize]='\0';
    printf("\nThe length of \"%s\" is:- %d\n",text,strsize);
    return 0;
}


int length(const char *str){
    int i;
    
    for(i=0;*str!='\n';i++){
        str++;
    }
return i;
}