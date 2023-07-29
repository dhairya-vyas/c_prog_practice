#include<stdio.h>

struct timediff{
    int hour;
    int min;
    int sec;
};

void difference (struct timediff start,struct timediff stop, struct timediff *diff);

int main(){
    printf("\nC Prog to find difference between starting and ending time\n");
    printf("-------------------------------------\n");

    struct timediff start,stop,diff;
    printf("\nEnter the Starting time details\n");
    printf("\nEnter Starting hour:- ");
    scanf("%d",&start.hour);
    printf("\nEnter Starting minutes:- ");
    scanf("%d",&start.min);
    printf("\nEnter Starting seconds:- ");
    scanf("%d",&start.sec);


    printf("\nEnter the Stoping time details\n");
    printf("\nEnter Stoping hour:- ");
    scanf("%d",&stop.hour);
    printf("\nEnter Stoping minutes:- ");
    scanf("%d",&stop.min);
    printf("\nEnter Stoping seconds:- ");
    scanf("%d",&stop.sec);
    
    difference(start,stop,&diff);
    printf("\nThe difference between both is:- \n%d:%d:%d - ",start.hour,start.min,start.sec);
    printf("%d:%d:%d ",stop.hour,stop.min,stop.sec);
    printf(" = %d:%d:%d\n\n",diff.hour,diff.min,diff.sec);
    
return 0;
}

void difference (struct timediff start,struct timediff stop, struct timediff *diff){

    while(stop.sec > start.sec){
        --start.min;
        start.sec += 60;
    }
    diff->min = start.min - stop.min ;
    diff->hour = start.hour - stop.hour;
}