#include<stdio.h>

#define size 100

int main(){
    printf("\nC Prog to find maximum occuring letter of a given String\n");
    printf("---------------------------------------\n");

    int i,len;
    char freq[26];
    char text[size];

    printf("\nEnter the String:- ");
    fgets(text,size,stdin);

    for(len=0;text[len]!='\n';len++){}

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

int max=0;
    for(i=0;i<26;i++){
       
    if(freq[i]>freq[max]){
        max = i;
    }
    }
text[len]='\0';
    printf("\nThe maximum occuring letter in the string \"%s\" is \"%c\" and it occured \"%d\"times\n",text,(max+97),freq[max]);
return 0;
}