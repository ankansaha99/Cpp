#include<iostream>
using namespace std;
int largest_num(int s);
int main()
{
    int s,r;
    cout<<"Enter the size of array: ";
    cin>>s;
    r=largest_num(s);
    cout<<"The largest  value is :"<<r<<endl;
    return 0;
}
int largest_num(int s)
{
    int n[1000],i,r;
    cout<<"Enter the element of array: ";
    for(i=0;i<s;i++)
    {
        cin>>n[i];
    }
    r=n[0];
    for(i=0;i<s;i++)
    {

      if(r<n[i])
      {
          r=n[i];
      }
    }

    return r;
}
