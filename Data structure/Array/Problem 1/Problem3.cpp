#include<iostream>
using namespace std;

void odd_printer(int starting,int ending);

int main(){

int starting, ending;

cout<<"Starting value : ";
cin>>starting;
cout<<"Ending value : ";
cin>>ending;

 odd_printer(starting,ending);

}

void odd_printer(int starting,int ending){
    for(int i=starting;i<=ending;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
   }
}
