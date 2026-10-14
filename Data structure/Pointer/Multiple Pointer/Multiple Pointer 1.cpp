#include<iostream>
using namespace std;

int main(){

int x=10;
int *p=&x;
int *q=&x;

cout<<*p<<" "<<*q<<endl;

x=20; //Changing x's value
cout<<"\nAfter changing x's value"<<endl;
cout<<*p<<" "<<*q<<endl;

cout<<endl;
*p=30;
cout<<"q's value : "<<*q<<endl;
(*q)++;
cout<<"Now value of p : "<<*p;


}
