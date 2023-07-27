#include<stdio.h>

#define size 100

int main(){
    printf("\nC Prog to Reverse words of a String\n");
    printf("---------------------------------------\n");

    char text[size],rev[size];
    int i,j,k;
    int wordStart=0,wordEnd =0;

    printf("\nEnter the String;- ");
    fgets(text,size,stdin);

    for(i=0;text[i]!= '\n';i++){
        if(text[i]==' ' || text[i]=='\t' || text[i]=='\0'){
            wordEnd=(i-1);

            for(j=wordStart,k=0;j<=wordEnd;j++,k++){
                rev[k] = text[wordEnd - k];
                     rev[k] = text[wordEnd - k];
            }
            rev[k] = ' ';
            wordStart = i + 1;
            }
    }
    rev[k]='\0';
    printf("\nThe string in reverse order of words is :- %s\n",rev);
}