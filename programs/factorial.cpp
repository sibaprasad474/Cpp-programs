#include<iostream>
using namespace std;

int main()
{
    int num,fact=1;
    cout<<"enter a number " <<endl;
    cin>>num;

    if(num==0)
    {
        cout<<"factorial of " <<num <<" is 1"<<endl;
    }

    else if (num<0)
    {
        cout<<"enter a valid number"<<endl;
    }

    else
    {
        for ( int i = 1; i < num; i++)
        {
            fact=fact*i;
        }
        cout<<"factorial of "<<num<<" is "<<fact;
        
    }
       
}