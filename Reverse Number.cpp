#include<iostream>
using namespace std;


int main()
{
    int i,n=5,arr[100];
   // cout<<" Please Enter number that you want to reverse : "<<endl;
    //cin>>n;
    cout<<" You want/Entered "<<n<< " numbers for reverse : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Number "<<i<<" : ";
        cin>>arr[i];
    }



    cout<<endl<<"In normal : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }



    cout<<endl<<"In reverse : "<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}


