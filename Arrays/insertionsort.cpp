#include<iostream>
using namespace std;
main(){
int n;
printf("enter no of elements you want : \n");
scanf("%d",&n);
int arr1[n];
printf("enter the %d no of elements : \n",n);
for (int i = 0; i < n; i++)
{
    cin>>arr1[i];
}
for (int i = 1; i < n; i++)
{
    int current=arr1[i];
    int j=i-1;
   while (arr1[j]>current)
   {
    arr1[j+1]=arr1[j];
    j--;
   }
   arr1[j+1]=current;
   
}
for (int i = 0; i < n; i++)
{
    cout<<arr1[i]<<" ";
}


}