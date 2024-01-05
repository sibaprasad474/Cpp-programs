#include<iostream>
using namespace std;
main(){
    int n,i,j;
    cout<<"enter no of elements you want :"<<" ";
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for ( i = 1; i < n; i++)
    {
     j=i-1;
     int counter=arr[i];
     while (arr[j]>arr[i])
     {
        arr[j+1]=arr[j];
        j--;
     }
     arr[j+1]=counter;
        
    }
     for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
