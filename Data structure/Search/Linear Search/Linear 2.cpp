#include<iostream>
using namespace std;

int lin2(int arr[],int n, int finder){

for(int i=0;i<n; i++){
    if(arr[i]==finder){
        return i;
    }
}
return -1;
}


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n; i++){

        cin>>arr[i];
    }
    int finder;
    cin>>finder;

    if(lin2(arr,n,finder)==-1){
        cout<<"nf";
    }
    else{
        cout<<lin2(arr,n,finder);

    }

}



