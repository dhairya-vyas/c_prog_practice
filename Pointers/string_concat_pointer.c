#include <stdio.h>
#define size 100

char concat(char *str1,char *str2);

int main(){
    printf("\nC Program to Concat 2 Strings using Pointers\n");
    printf("-----------------------------------\n");

    char text1[size],text2[size];

    printf("\nEnter the First String:- ");
    fgets(text1,size,stdin);

    printf("\nEnter the 2nd String:- ");
    fgets(text2,size,stdin);

    concat(text1,text2);

    printf("\nThe new Concatenated string is:- %s\n",text1);

    return 0;
}
char concat(char *str1,char *str2){

    int i,j;
    for(i=0;str1[i] != '\0';i++){
    }
   str1[i-1]=' ';

    for(j=0; str2[j] != '\0';j++){
        str1[i+j]=str2[j];
    }
    str1[i+j]='\0';
}