#include<iostream>
using namespace std;
string bs (string arr[],int n, string src);
int main(){
    cout<<"Enter a s ";
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string src;
    cin>>src;
}
string bs (string arr[],int n, string src){
int s=0,e=n;

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

//Now Solve the problem
//for more help Knock at my messenger

}

