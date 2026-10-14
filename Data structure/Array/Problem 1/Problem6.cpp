//code by mahdi zahin
#include<iostream>
using namespace std;
int main(){

int arraySize;
cout<<"Please enter array Size : ";
cin>>arraySize;

int arr[arraySize];

//Taking input from user
for(int i=0;i<arraySize; i++){
    cout<<"Enter Number at index ["<<i<<"] : ";
    cin>>arr[i];
}
cout<<endl;

//Output
cout<<"Numbers in normal order  : ";
for(int i=0;i<arraySize; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Numbers in reverse order : ";
for(int i=arraySize-1;i>=0; i--){
    cout<<arr[i]<<" ";
}
}
//code by mz




