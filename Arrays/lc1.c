#include<stdio.h>
main()
{
    int i,j,n;
    int dif;
    int arr1[10],arr2[10],diff[10];
    // printf("enter test cases : \n");
    scanf("%d",&n);
        printf("first student goals \n");
        for ( i = 0; i < 5; i++)
        {
            scanf("%d",&arr1[i]);
        }
        printf("second student goals :\n");
         for ( i = 0; i < 5; i++)
        {
            scanf("%d",&arr2[i]);
        }
        for ( i = 0; i < 5; i++)
        {
           if (arr1[i]>arr2[i])
           {
            diff[i]=arr1[i]-arr2[i];
           }
           
        }
        for ( i = 0; i < 5; i++)
        {
            printf("%d \n",diff[i]);
        }
        
    }