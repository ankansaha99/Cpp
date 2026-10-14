#include<iostream>
using namespace std;
int main(){
    int arr[10]={8,4,6,1,6,9,6,1,9,8};
    int findx,cont;
    cout<<"Array  ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter number to search: ";
    cin>>findx;
    for(int i=0;i<10;i++){
        if(arr[i]==findx){
            cont++;
        }
    }
    cout<<"The number occurs "<<cont<<" times in array"<<endl;
    return 0;
}
