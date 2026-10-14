#include<iostream>
using namespace std;
int main(){

int ArraySize;
cout<<"Enter Array Size : ";
cin>>ArraySize;
int arr[ArraySize];

//for array input P4 manjursir x mz 11:44pm feb19
cout<<endl;
for(int i=0;i<ArraySize;i++){
    cout<<"Enter Number at index ["<<i<<"] : "  ;
    cin>>arr[i];
}

//for selection sort
for(int i=0;i<ArraySize-1;i++){
    for(int j=i+1;j<ArraySize; j++){
    if(arr[j]<arr[i]){
        int swaP = arr[j];
        arr[j]=arr[i];
        arr[i]=swaP;
    }
}

}
cout<<"\nSelection Sorted Array : ";
for(int i=0;i<ArraySize;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;cout<<endl;
}
