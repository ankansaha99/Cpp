#include<iostream>
using namespace std;

int binsrc(int arr[],int n,int src){
int s=0;
int e=n;
while(s<=e){
    int mid=(s+e)/2;

    if(arr[mid]==src){
        return mid;
    }else if(arr[mid]>src){
     s=mid+1;
    }else{
       e=mid-1;
    }
}
return -1;

}


int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"Enter at Array index ["<<i<<"] : ";
    cin>>arr[i];
}

int src;
cout<<"Enter number to search : ";
cin>>src;

cout<<binsrc(arr,n,src);

}
