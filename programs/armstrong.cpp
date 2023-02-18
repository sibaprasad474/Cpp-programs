#include<iostream>
#include<math.h>
using namespace std;
int isarmstrong(int num){
    int sum=0;
    int originaln=num;
    while (num>0)
    {
        int lastdigit=num%10;
        sum=sum+pow(lastdigit,3);
        num=num/10; 
    }
    if(sum==originaln){
        cout<<"armstrong"<<endl;
    }
    else
    {
        cout<<"not armstrong"<<endl;
    }
    return 0;

    
}
int main(){
    int n;
    cin>>n;
    isarmstrong(n);
}
