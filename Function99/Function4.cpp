#include<iostream>
using namespace std;

void j(int a, int b);
void g(int a, int b);
void b(int a, int b);
void v(double a, int b);


int main ()
{
    j (10,20);
     b (10,20);
     g (10,20);
      v (456,20);

}

void j(int a, int b)
{
    int res = a+b;
    cout<<res<<endl;

}
void b (int a, int b)
{
    int res = a-b;
    cout<<res<<endl;

}

void g (int a, int b)
{
    int res = a*b;
    cout<<res<<endl;

}
void v (double a, int b)
{
    double res = a/b;
    cout<<res;

}
