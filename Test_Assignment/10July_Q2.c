
#include <stdio.h>
#include<string.h>
#include <math.h>
#include<stdlib.h>

int main()
{
    printf("C Prog to Print each word on new line  \n");
    printf("-------------------------------------\n ");

    char *s;
    s=(char *)malloc(1024*sizeof(char));
    scanf("%[^\n]",s);
    s=(char *)realloc(s,strlen(s)+1);
    for(int i=0;strlen(s)>i;i++)
    {
        printf("%c",s[i]);
        if(s[i]==' ')
        {
            printf("\n");
        }
    }


return 0;
}