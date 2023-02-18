#include<iostream>
using namespace std;
void printArray(int arr[], int size)
{
 for (int i = 0; i < size; i++)
{
    cout<<"printing the array"<<arr[i] <<endl;
}
    cout<<"printing done"<<endl;
}
int main(){

int third[5]={2,3,4};
// int n=12;
printArray(third,5);
return 0;

