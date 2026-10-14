#include<iostream>
using namespace std;
int main(){

int arr[]={12, 32, 43, 1, 54, 53, 15, 64, 3, 13};

for(int i=0; i<=9; i++){


    if(arr[i]%2==0){
        cout<<"Number is even at index ["<<i<<"] "<<arr[i]<<endl;
    }

 /* else  {
     cout<<"Number is odd at index ["<<i<<"] "<<arr[i]<<endl;
   }*/
}
cout<<endl;

for(int i=0; i<=9; i++){


    if(arr[i]%2!=0){
        cout<<"Number is odd at index ["<<i<<"] "<<arr[i]<<endl;
    }

 /* else  {
     cout<<"Number is odd at index ["<<i<<"] "<<arr[i]<<endl;
   }*/
}

}
