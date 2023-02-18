#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i; 
    }
    cout<<"factorial is "<<fact<<endl;
    return 0;
}
int main(){
    int n;
    cin>>n;
    factorial(n);
}