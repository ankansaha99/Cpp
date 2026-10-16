#include<iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cout<<"Enter last number ";
    cin>>n;
    cout<<"Even numbers of " <<n <<" : ";
    for (i=2; i<=n; i+=2)

    {
        cout<<i<<"  ";

    }
    sum = i;
 cout<<endl<< "Sum of 1st and Last integer of even number = " <<sum<< " "<<endl;

}

