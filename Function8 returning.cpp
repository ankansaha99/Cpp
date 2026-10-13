#include<iostream>
using namespace std;
int Fruit (int a, int b);

int main ()
{
   int Flower = Fruit (69, 100);
   cout<<Flower;


}

int Fruit (int a, int b)
{
    int Final_output = a+b;
    return Final_output;
}
