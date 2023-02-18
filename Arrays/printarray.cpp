#include<iostream>
using namespace std;
int main(){
    //int array1[15]={2,7};

    //initialising all locations with 0
    int array[15]={0};

    //not possible to initialise all locations with 1 here
    //int array[10]={1};
    int n=15;
    for (int i = 0; i < n; i++)
    {
       cout<<array[i]<<" ";
    }
    
}