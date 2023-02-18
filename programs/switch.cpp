#include<iostream>
using namespace std;
int main(){
    int num=2;
    cout<< endl ;
    switch (num)
    {
    case 1:
        cout<<"first one" <<endl;
        break;
    case 2:
        cout<<"second one"<<endl; 
        break;
    
    default:
        cout<<"default case"<<endl;
        break;
    }
    cout<< endl ;
}