#include <stdio.h>
#define size 100
void copy(char *str1,char *str2);

int main(){
    printf("\nC Prog to Copy 1 string to Another string using Pointer\n");
    printf("------------------------------------\n");
    
    char text1[size],text2[size];
    char *str1 = text1;
    char *str2 = text2;

    printf("\nEnter the String:- ");
    fgets(text1,size,stdin);

    printf("\nThe original string is:- %s\n",text1);

    copy(str1,str2);

    printf("\nThe Copied string is:- %s\n",text2);

return 0;
}

void copy(char *str1, char *str2){
    int i;
    for(i=0;*str1!='\n';i++){
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2='\0';
}