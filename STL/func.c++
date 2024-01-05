#include<iostream>
#include<array>
using namespace std;
void sum(array<int,4>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }

}
int main(){
    array<int,4>a={1,2,3,4};
    sum(a);
}