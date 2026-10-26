#include<iostream>
using namespace std;

int bs(int arr[], int as, int key){

int start=0;
int en=as;

while(start<=en){

    int mid=(start+en)/2;

    if(arr[mid]==key){
        return mid;
    }else if(mid<key){

            start=mid+1;
    }else{

    en=mid-1;
    }
}
return -1;
}

int main(){

int as;
cin>>as;
int arr[as];


for(int i=0;i<as;i++){

    cin>>arr[i];
}
int key;
cin>>key;

cout<<bs(arr,as,key);



}
