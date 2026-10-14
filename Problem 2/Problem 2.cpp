#include<iostream>
using namespace std;
int main(){

int arr1[10]={1,2,3,4,5,6,7,8,9,10};
int arr2[10]={5,6,7,8,9,10,11,12,13};

int Count=0;
cout<<"Common elements are : ";
for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            Count++;
        }
    }
}
if(Count==0){
    cout<<"Not Matched";
}

}
