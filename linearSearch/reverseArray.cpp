#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while (arr[start] < arr[end])
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" "; 
    }
    
}
int main(){
    int arr[7]={2,4,6,8,9,10,11};
    reverse(arr, 7);
    printArray(arr, 7);
    
}