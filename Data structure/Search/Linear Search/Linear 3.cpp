#include<iostream>
using namespace std;


int l_s(int arr[],int a, int key){

for(int i=0;i<a;i++){

    if(arr[i]==key){
       return i;
       cout<<"Found";
    }
}

return -1;
}


int main(){

int a;
cin>>a;
int arr[a];
for(int i=0; i<a;i++){
    cin>>arr[i];
}
int key;
cin>>key;
cout<<l_s(arr,a,key);

}


