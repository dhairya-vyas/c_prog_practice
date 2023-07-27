#include <stdio.h>

#define size 100

int main(){
    printf("\nC Prog to count number of words in a String\n");
    printf("---------------------------------------\n");

    char text[size];
    int i,count_word=0,num;

    printf("\nEnter the String:- ");
    fgets(text,size,stdin);

    for(i=0;text[i]!='\0';i++){
        if(text[i]==' '){
            num = count_word++;
        }
    }
    text[i-1]='\0';
    printf("\nThe \"%s\" string contains %d words\n",text,count_word+1);
}