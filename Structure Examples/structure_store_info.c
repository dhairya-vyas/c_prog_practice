#include <stdio.h>
struct student{
    char firstname[50];
    int roll;
    float marks;
    }s[5];

int main(){
    printf("\nC Prog to stroe info and display using structure\n");
    printf ("-------------------------\n");

    int i;
    printf("\nEnter information of student:- ");
    for(i=0;i<5;i++){
        s[i].roll = i + 1; 
        printf("\nEnter roll number:- %d ,\n",s[i].roll);
        printf("\nEnter the name:- ");
        scanf("%s",s[i].firstname);
        printf("\nEnter the marks:- ");
        scanf("%f",&s[i].marks);
    }

    printf("\nFor Displaying Information\n");
    for(i=0;i<5;i++){
        printf("\nRollnumber :- %d",i+1);
        printf("\nFirstname:- %s",s[i].firstname);
        printf("\nMarks:- %.2f",s[i].marks);
        printf("\n");
    }
    return 0;
}