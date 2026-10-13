#include<iostream>
using namespace std;
void jug (int a, int b);
void biyog (int a, int b);
void gun (int a, int b);
void vag (double a, int b);

int main ()
{
    jug (10,3);
    biyog (10,3);
    gun (10,3);
    vag (10,3);

}

void jug (int a, int b)
{
    int folafol = a+b;
    cout<<"jug korle folafol hoccche : "<< folafol<<endl;

}
void biyog (int a, int b)
{
    int folafol = a-b;
    cout<<"biyog korle folafol hoccche : "<< folafol<<endl;

}
void gun (int a, int b)
{
    int folafol = a*b;
    cout<<"gun korle folafol hoccche : "<< folafol<<endl;

}
void vag (double a, int b)
{
    float folafol = a/b;
    cout<<"vag korle folafol hoccche : "<< folafol<<endl;

}
