#include<iostream>
using namespace std;
int main(){

int num;
cout<<"How much Number you want to add : ";
cin>>num;
cout<<"Okay then,"<<endl;
int student [num];
for(int i=0; i<=num-1; i++){

    cout<<"Enter your number "<<i+1 <<" : ";
    cin>>student [i];
}

cout<<"You Entered these numbers : ";
for(int i=0; i<=num-1; i++){
    cout<<student [i]<<" ";
}
cout<<" "<<endl;

int sum;
for(int i=0; i<=num-1; i++){
      sum=sum + student [i];
}
cout<<"Addition of all number : "<<sum;




}
