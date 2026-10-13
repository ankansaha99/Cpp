#include<iostream>
using namespace std;


int main()
{
    int i,n,arr1[100],arr2[100];

    cout<<"Please enter number that you want to copy  ";
    cin>>n;
    cout<<" You Entered "<<n<< " Number for copy : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Number : "<<i<<" : ";
        cin>>arr1[i];
    }


     for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }



    cout<<endl<<" Original : "<<endl;
        for(i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }



    cout<<endl<<" Copy : "<<endl;
        for(i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    return 0;
}


