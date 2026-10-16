
#include<iostream>
using namespace std;

float tri(int a, float b);

int main()
{

 int r,a,b;
 cout<<"Enter First side of triangle : ";
 cin>>a;
 cout<<"Enter Second side of triangle : ";
 cin>>b;
 r=tri(a,b);
 cout<<"Area of Triangle "<<r;

}
float tri(int a, float b)
{

int r;
r = (a*b*.5);
return r;
}
