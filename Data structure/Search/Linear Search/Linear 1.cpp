#include<iostream>
using namespace std;

int lin_src(int arr[],int n,int key);

int main(){

int n;
cout<<"Enter Array Size : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cout<<"Enter at index ["<<i<<"] : ";
    cin>>arr[i];
}
cout<<"Enter Number to Search : ";
int key;
cin>>key;

cout<<"Number found at index ["<<lin_src(arr,n,key)<<"]"<<endl;

}
int lin_src(int arr[],int n,int key){
for(int i=0; i<n; i++){
    if(arr[i]==key){
        return i;
    }

}
return -1;
}
