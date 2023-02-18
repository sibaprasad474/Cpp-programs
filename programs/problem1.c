#include<stdio.h>
#include<conio.h>
int main(){
int sum=1; int index=9;
do{
index=index-1;
sum=2*sum;
} while(index>9);
printf("%d",sum);
}