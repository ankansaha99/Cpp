#include<iostream>
using namespace std;

int ls(int arr[],int as, int key){

    for(int i=0;i<as;i++){
        if(arr[i]==key){
            return i;
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

cout<<ls(arr,as,key);
}
