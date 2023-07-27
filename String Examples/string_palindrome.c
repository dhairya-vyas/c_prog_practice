#include <stdio.h>
#define size 100

int main(){
    printf("\nC Prog to find the given String is Palindrome\n");
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
    
    int isPalindrome=1;
    for(i=0;i<j;i++){
        if(text[i] != rev[i]){
            isPalindrome=0;
            break;
        }
    }
    
    if(isPalindrome){
    printf("\nThe given String is a Palindrome String\n");
    }else{
        printf("\nThe given String is not a Palindrome String\n");
    }
return 0;
}