#include<stdio.h>

struct student{
    char name[50];
    int roll;
    float marks;
}s;

int main(){
    printf("\nEnter details-> ");
    printf("\nEnter the name:- ");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter the roll number:- ");
    scanf("%d",&s.roll);
    printf("Enter the marks:- ");
    scanf("%f",&s.marks);

    printf("\nDisplaying the details->");
    printf("\nName:- %s",s.name);
    printf("Roll Number:- %d",s.roll);
    printf("\nMarks :- %.2f\n\n",s.marks);
}