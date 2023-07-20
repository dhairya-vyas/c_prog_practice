
#include <stdio.h>

int main()
{
    printf("C Prog to find to Weekday using Switch Case \n");
    printf("-------------------------------------\n ");

    int week;

    printf("Enter the Day(1-7):- ");
    scanf("%d",&week);

    switch(week)
    {
        case 1: {
            printf("Monday \n");
            break;
        }
        case 2: {
            printf("Tuesday \n");
            break;
        }
        case 3: {
            printf("Wedday \n");
            break;
        }
        case 4: {
            printf("Thursday \n");
            break;
        }
        case 5: {
            printf("Friday \n");
            break;
        }
        case 6: {
            printf("Saturday \n");
            break;
        }
        case 7: {
            printf("Sunday \n");
            break;
        }
    }
    
return 0;
}