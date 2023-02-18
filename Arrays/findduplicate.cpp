#include<iostream>
using namespace std;
int findduplicate(int *arr, int size){
int ans=0;
for (int i = 0; i < size; i++)
{
    ans=ans^arr[i];
}
for (int i = 1; i < size; i++)
{
    ans=ans^arr[i];
}
return ans;
}
int main(){
    int arr[5]={1,2,4,5,1};
    cout<<findduplicate(arr,5)<<" ";
}
