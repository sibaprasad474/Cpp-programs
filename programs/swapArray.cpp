#include<iostream>
using namespace std;
int main(){
    int n; //array variable declaration
    cout<<"enter size of array"<<endl;
    cin>>n; //array size input
    int arr[n]; //array declaration
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
        for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
}