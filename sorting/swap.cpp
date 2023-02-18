#include<iostream>
using namespace std;
int main(){
cout<<"enter two numbers"<<endl;
int a,b;
cin>>a>>b;
cout<<"after swapping :"<<endl;
int temp=a;
a=b;
b=temp;
cout<<a<<" "<<b<<endl;
}