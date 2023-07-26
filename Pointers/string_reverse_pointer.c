#include<stdio.h>

#define size 100

void reverse(char *str1,char *str2);

int main(){
    printf("\nC Prog to Reverse String using Pointers\n");
    printf("-----------------------------------------\n");

    char text1[size],text2[size];

    printf("\nEnter the String :- ");
    fgets(text1,size,stdin);

    reverse(text1,text2);

    printf("\nThe \"%s\" in Reverse is:- \"%s\"\n",text1,text2);

return 0;
}

void reverse(char *str1,char *str2){
    int i,j;
    for(i=0;str1[i]!='\n';i++){
    }
    str1[i]='\0';
    for(j=0;j<i;j++){
        str2[j]=str1[i-j-1];
    }
    str2='\0';
}