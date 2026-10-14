#include<iostream>
using namespace std;
int main(){


int x;
cin>>x;
int arr[x];

for(int i=0; i<x;i++){
    cin>>arr[i];
}

for(int i=0;i<x-1;i++){
    for(int j=i+1;j<x;j++){

        if(arr[j]<arr[i]){
            int swaP = arr[i];
            arr[i]=arr[j];
            arr[j]=swaP;
        }
    }
}
//for algorithm
for(int i=0;i<x;i++){
    cout<<arr[i]<<" ";
}
}
