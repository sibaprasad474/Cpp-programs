#include<iostream>
using namespace std;
void print(int array[],int size){
cout<<"printing the array"<<" "<<endl;
//printing the array
for (int i = 0; i < size; i++)
{
   cout<<array[i]<<" ";
}
cout<<endl<<"printing is all done";
}

int main(){
int third[15]={1,23};
int n=15;
print(third,15);
return 0;
}