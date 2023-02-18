#include<iostream>
using namespace std;
//1 --> prime no
//0 --> non prime
bool isPrime(int num){
  for (int i = 2; i < num; i++)
  {
   if (num%i==0)
    {
      return 0;
    }
  }
  return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl; 
}