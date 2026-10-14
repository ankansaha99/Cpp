#include<iostream>
using namespace std;
int main(){
    int size_1,size_2,j=0,rev[13];

    cout<<"Enter first array size : ";
    cin>>size_1;
    int arr_1[size_1];

    for(int i=0;i<size_1;i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>arr_1[i];
    }
    cout<<"\nEnter second array size : ";
    cin>>size_2;
     int arr_2[size_2];
    for(int i=0;i<size_2;i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>arr_2[i];
    }
    cout<<"\nArray in reverse order : ";
    for(int i=0;i<size_1+size_2;i++){
        if(i<size_1){
          rev[i]=arr_1[i];
        }
        else{
            rev[i]=arr_2[j];
            j++;
        }
    }
    for(int i=(size_1+size_2)-1;i>=0;i--){
        cout<<rev[i]<<" ";
    }
}
