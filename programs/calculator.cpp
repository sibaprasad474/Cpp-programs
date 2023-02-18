#include<iostream>
using namespace std;
  int add(int x,int y){
        int add=x+y;
        return add;
    }
    int multiply(int x,int y){
       int multiply=x*y;
       return multiply;
    }

    int main(){

    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<"a+b is "<<add(a,b)<<endl;
    cout<<"a*b is "<<multiply(a,b);
    return 0;
    }