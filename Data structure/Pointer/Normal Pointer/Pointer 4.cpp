#include<iostream>
using namespace std;
int main (){

int x=10;
cout<<"Printing the value of x : ";
cout<<x;
cout<<endl;
cout<<"Printing memory address of x : ";
cout<<&x;//printing the memory address of x

cout<<endl;cout<<endl;
int*p;
p=&x;
cout<<"Printing the value of p using pointer is : ";
cout<<*p;
cout<<endl;
cout<<"Printing memory address of p : ";
cout<<&p;
cout<<endl;cout<<endl;
}
