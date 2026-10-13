#include<iostream>
using namespace std;
int main(){

int num[3];

for(int i=0; i<=2; i++){
cout<<"Enter Number "<< i+1 <<": ";
    cin>>num[i];

}
cout<<"You Enter : ";
for(int i = 0; i<=2; i++){

  cout<<num[i]<<" " ;
}

}
