#include <stdio.h>

#define size 100

int main(){
    printf("\nC Prog to Count number of Alphabets,Numbers and Symbols\n");
    printf("--------------------------------------------------\n");

    char text[size];
    int i;
    int count_alphabets =0,count_symbols=0,count_numbers=0;

    printf("\nEnter the string:- ");
    fgets(text,size,stdin);

    for(i=0;text[i] != '\n';i++){
        if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z')){
            count_alphabets++;
        }
        else if(text[i]>='0' && text[i]<='9'){
            count_numbers++;
        }
        else{
            count_symbols++;
        }
    }

    printf("Number of alphabets in the String are:- %d\n",count_alphabets);
    printf("Number of Numbers in the String are:- %d\n",count_numbers);
    printf("Number of Symbols in the String are:- %d\n",count_symbols);

return 0;
}

