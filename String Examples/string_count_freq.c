#include <stdio.h>

#define size 100

int main(){
    printf("\nC Prog to find frequency of each character in a String\n");
    printf("---------------------------------------------\n");

    int i,len;
    char text[size];
    char freq[26];

    printf("\nEnter the String:- ");
    fgets(text,size,stdin);

    for(len=0;text[len]!='\n';len++){}

    for(i=0;i<26;i++){
        freq[i]=0;
    }

    for(i=0;i<len;i++){
        if(text[i]>='a' && text[i]<='z'){
            freq[text[i] - 97]++;
        }
        else if(text[i]>='A' && text[i]<='Z'){
            freq[text[i] - 65]++;
        } 
    }

     printf("\nFrequency of all characters in the given string: \n");
    for(i=0; i<26; i++)
    {
        if(freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }

    return 0;
}