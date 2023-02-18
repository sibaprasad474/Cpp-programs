#include<iostream>
#include<math.h>
using namespace std;
//using function
/*int pow(int x ,int y){
int ans=1;
for (int i = 1; i <=y; i++)
{
    ans=ans*x;
}
return ans;
}*/
int main(){
    int a,b;   //pow(a,b)
    cout<<"enter no to find square"<<endl;
    cin>>a>>b;
    cout<<powf(a,b)<<endl; //uisng normal powf function
   
}

