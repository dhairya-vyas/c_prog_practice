#include <stdio.h>

#define size 100

int main(){
    printf("\nC Prog to find minimum occurence of a letter in a given String\n");
    printf("------------------------------------------\n");

    char text[size];
    int i,len;
    int freq[26];

    printf("\nEnter the String:- ");
    fgets(text,size,stdin);

    for(len = 0;text[len]!='\n';len++){}

    for(i=0;i<26;i++){
        freq[i]=0;
    }

    for(i=0;i<len;i++){
        if(text[i]>='a' && text[i]<='z'){
            freq[text[i]-97]++;
        }
        else if(text[i]>='A' && text[i]<='Z'){
            freq[text[i]-65]++;
        }
    }

    int min = -1;
    for(i=0;i<26;i++){
        if(freq[i]!=0){
        if (min == -1 || freq[min] > freq[i]) {
                min = i;
            }
        }
    }

    text[len] = '\0';
    if (min != -1) {
        printf("\nThe given string \"%s\" has minimum occurrence of letter '%c' and it has occurred for %d times\n", text, min + 'a', freq[min]);
    } else {
        printf("\nThe given string \"%s\" does not contain any letters\n", text);
    }

    return 0;
}