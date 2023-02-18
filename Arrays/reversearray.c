#include<stdio.h>
main(){
    int size;
    printf("enter the array size :");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements : \n");
    int i,temp;
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = size-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    }