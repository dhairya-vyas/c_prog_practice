#include<stdio.h>

#define size 100

int main(){
    printf("\nC Prog to count all occurences of a letter in given string\n");
    printf("--------------------------------\n");

    char text[size];
    char x;
    int i,count=0;

    printf("\nEnter the String:- ");
    fgets(text,size,stdin);

    printf("\nEnter the letter to search:- ");
    scanf("%c",&x);

    for(i=0;text[i]!='\0';i++){
        if(text[i]==x){
            count++;
        }
    }
    text[i-1]='\0';
    printf("\nThe string \"%s\" contains \"%c\" letter \"%d\" times\n",text,x,count);
}