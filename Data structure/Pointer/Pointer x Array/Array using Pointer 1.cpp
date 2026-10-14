#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};

    cout<<*arr<<endl;

    int *a;
    a=&arr[0];

    cout<<*a<<endl;

    cout<<*(arr+5)<<endl;

    cout<<*(a+4)<<endl;
}
