#include<iostream>
using namespace std;

void noCount(int num){
for(int i=1; i<=num; i++){
        cout<< i <<" ";
    }
}
int main(){
    int n;
    cin>>n;
    noCount(n);
    
}