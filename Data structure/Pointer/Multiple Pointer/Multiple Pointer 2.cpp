#include<iostream>
using namespace std;
int main(){

int x=45;
int *a=&x;
int *b=&x;
int *c=&x;

cout<<"Value of c is : "<<*c<<endl;
x=75;
(*c)++;
cout<<*b;
cout<<endl;

int **f=&a;
cout<<**f;
(**f)++;

cout<<endl;
cout<<*c; //bujhle bujhpata na bujhle tejpata

}
