#include<iostream>
using namespace std;
main(){
    struct linear{
        int arr[5];
    };
    struct linear l1;
    int n;
    cout<<"enter the key"<<"\n";
    cin>>n;
    for (int i = 0; i < 5; i++)
    {
        cin>>l1.arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
       if (n==l1.arr[i]){
        cout<<"index no got at "<<i<<" position"<<"\n";
         break; 
       }
             
    }
    // cout<<"index is"<<i<<"found the number:"
    

}

