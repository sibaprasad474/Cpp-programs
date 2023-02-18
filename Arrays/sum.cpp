#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int target=5;
    for (int i = 0; i < 5; i++)
    {
        for (int j=i+1; i < 5; j++)
        {
            if (target==arr[i]+arr[j])
            {
                cout<<arr[i]<<" "<<arr[j];
            }
        }
        
    }
    

}