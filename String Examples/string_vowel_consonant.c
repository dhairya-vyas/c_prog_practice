#include<stdio.h>

#define size 100

int main(){
    printf("\nC Prog to Count Vowels and Consonant in a given string\n");
    printf("---------------------------------------------\n");

    char text[size];
    int i,count_vowel=0,count_consonant=0;

    printf("\nEnter the String:- ");
    fgets(text,size,stdin);

    for(i=0;text[i]!='\n';i++){
        if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z')){  
            if(text[i] == 'A' || text[i] == 'E'||
            text[i] == 'I' || text[i] == 'O'||
            text[i] == 'U' || text[i] == 'a'||
            text[i] == 'e' || text[i] == 'i'||
            text[i] == 'o' || text[i] == 'u'){
                count_vowel++;
            }
            else{
                count_consonant++;
            }
        }
        else{
            printf("\n Enter valid alphabets between A to Z\n");
            }
    }
    printf("\nThe given String contains %d vowels\n",count_vowel);
    printf("\nThe given string contains %d Consonants\n",count_consonant);


    return 0;
}
