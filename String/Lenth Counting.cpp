#include<iostream>
#include<cstring>
using namespace std;

int main ()
{

 char name1 [ ]= "mahdi zahin";
 char x[30];
 int lenth = strlen (name1);
 cout<<lenth<<endl;

 strcpy (x, name1);
 cout<<"name 2 "<<x;
}

