#include<iostream>
using namespace std;

int ls(int arr[], int as, int src){

for(int i=0;i<as;i++){

    if(arr[i]==src){
        return i;//arr indx return
    }
}
//or
return -1;

}

int main(){

int as;
cin>>as;
int arr[as];
for(int i=0;i<as;i++){

    cin>>arr[i];//done

}
int src;
cin>>src;

cout<<ls(arr,as,src);
}
