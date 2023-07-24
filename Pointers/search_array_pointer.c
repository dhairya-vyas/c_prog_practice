#include <stdio.h>

#define size 100

int searchElement(int *arr, int n, int num, int *result[]);

int main(){
    printf("\nC Prog to seach for an element in an Array\n");
    printf("---------------------------------------\n");

    int i,n,num;
    int arr[size];
    int *result[size];

    int *arr_ptr = arr;

    printf("\nEnter the number of elements:- ");
    scanf("%d",&n);

    printf("\nEnter the Elements of the Array:- ");
    for(i=0;i<n;i++){
        scanf("%d",(arr_ptr + i));
    }

    printf("\nThe elements of Array are:- ");
    for(i=0;i<n;i++){
        printf("%d ",*(arr_ptr + i));
    }

    printf("\nEnter the Number you want to search:- ");
    scanf("%d",&num);

    int count = searchElement(arr,n,num,result);

    if(count > 0){
        printf("\nThe number %d found at %d places in the given aray:\n",num,count);
        for(i=0;i<count;i++){
            printf("Index %d\n",result[i]-arr);
        }
    } else {
        printf("\nElement not fount in the array.\n");
    }

    return 0;
}

int searchElement(int *arr, int n, int num, int *result[]){
    int count =0;
    for(int i=0;i<n;i++){
        if(*arr == num){
            result[count++]=arr;
        }
            arr++;
        }
        return count;
    }
