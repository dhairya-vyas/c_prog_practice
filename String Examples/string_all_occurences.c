#include<stdio.h>

#define size 100

int main(){
    printf("\nC Prog to find all occurences of a letter\n");
    printf("--------------------------------------\n");

    int i,index=0;
    char text[size];
    char x;

    printf("\nEnte the String:- ");
    fgets(text,size,stdin);

    printf("\nEnter the letter to find:- ");
    scanf("%c",&x);

    printf("Index is:- ");
    for(i=0;text[i]!='\0';i++){
        if(text[i]==x){
            index=i;
            printf("%d ",index);
        }
    }
   
}