#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //decimal to binary
    int num;
    int bit;
    // int ans=0;
    cin>>num;
    while (num!=0)
    {
        bit=num&1;
        num=num>>1;
        cout<<bit;
    }
    
}