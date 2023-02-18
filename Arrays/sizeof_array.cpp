#include<iostream>
using namespace std;
int main(){
    int a[8]={2,3,4,5};
    //using sizepf operator to determine size of the array
    int aSize = sizeof(a)/sizeof(int);
    cout<<"size of the array is : "<<aSize<<endl;
    return 0;
}