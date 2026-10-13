#include<iostream>
using namespace std;
void bazar (int a, int b);

int main ()
{
    bazar (200,700);
}

void bazar (int a, int b)
{
    int wholevalue = a+b;
    cout<<" TODAYS BAZAR COST IS " <<wholevalue;
}
