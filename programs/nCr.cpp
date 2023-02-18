#include<iostream>
using namespace std;
/*----------------------*****--------------------*/
int fact(int num){                                           //section1
int fact=1;
for (int i = 1; i <= num; i++)
{
    fact=fact*i;
}
 return fact;
}
/*----------------------*****--------------------*/
int nCr(int n,int r){                                        //section2
    int num= fact(n);

    int denom=fact(r) * fact(n-r);

    int ans=num/denom;

    return ans;
}
/*----------------------*****--------------------*/
int main()                                                  //section3
{
    int n,r;
    cin>>n>>r;
    cout<<"ans is "<<nCr(n,r)<<endl;
}