#include<iostream>
#include<array>
using namespace std;
int main(){
    //basic array implementation
    int arr[5]={1,2,3,4,5};

    //stl array implementation
    array<int,4> a={11,12,13,14};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    // .at() - returns the value at that index
    cout<<"at 2nd position : "<<a.at(2)<<endl;
    // .empty() - checks array is empty or not
    if(a.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }
}