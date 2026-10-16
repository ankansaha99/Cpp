#include<iostream>
using namespace std;

class car
{
public :
    string carName;

    car (string carName)
    {
       this -> carName = carName;
    }
    void display()
    {
        cout<<"Car type : "<<carName;
    }
};


int main ()
{
   car Tesla( "Tesla Model x");
    Tesla.display ();
}
