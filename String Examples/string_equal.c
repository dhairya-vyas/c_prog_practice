#include<stdio.h>

int main(){
    printf("\nC Prog to print check Equality of String from the Given 2 Strings\n");
    printf("-------------------------------------------------\n");

#define size 100
    char text[size],text2[size];
    int i,j;
    int count=0;

    printf("\n Enter the 1st String:- ");
        fgets(text,100,stdin);
    printf("\n Enter the 2nd String:- ");
        fgets(text2,100,stdin);    

    for(i=0;text[i]!='\0';i++){
    }
    for(j=0;text2[j]!='\0';j++){
    }
    
     if(text[i] != text2[j]){
            printf("\nthe string is not equal\n");
        }
        else{
            printf("\nThe string is equal\n");
        }

    return 0;
}