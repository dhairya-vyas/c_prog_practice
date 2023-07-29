#include<stdio.h>

struct Distance{
    int feet;
    float inch;
} d1, d2, result;

int main(){
    //take first distance input
    printf("Enter 1st Distance\n");
    printf("Enter feet: ");
    scanf("%d",&d1.feet);
    printf("Enter inch: ");
    scanf("%f",&d1.inch);

    //take 2nd distance input
    printf("Enter 2nd Distance\n");
    printf("Enter feet: ");
    scanf("%d",&d2.feet);
    printf("Enter inch: ");
    scanf("%f",&d2.inch);


    result.feet=d1.feet + d2.feet;
    result.inch= d1.inch + d2.inch;

    while(result.inch >= 12.0){
        result.inch = result.inch - 12.0;
        ++result.feet;
    }
    printf("\nSum of Distances = %d\'-%.1f\"\n",result.feet,result.inch);
return 0 ;
}