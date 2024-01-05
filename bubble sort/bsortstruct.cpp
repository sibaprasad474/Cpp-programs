#include<iostream>
using namespace std;
main(){
    struct bsort{
        int arr[6];
    };
    struct bsort b1;
    cout<<"enter elements in any form :"<<"\n";
    for (int i = 0; i < 6; i++)
    {
        cin>>b1.arr[i];
    }
    // cout<<"as you entered :" "\n";
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (b1.arr[j]<b1.arr[i])
            {
                int temp=b1.arr[i];
                b1.arr[i]=b1.arr[j];
                b1.arr[j]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<b1.arr[i]<<" ";
    }
}