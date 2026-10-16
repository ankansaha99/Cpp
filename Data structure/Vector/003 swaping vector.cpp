#include<iostream>
#include<vector>
using namespace std;


int main(){

vector<int> store1(5,7);

cout<<"Output of Vector 1 or store1 "<<endl;
for(int i=0;i<store1.size();i++){
    cout<<store1[i]<<" ";
}
cout<<endl<<endl;

vector<int> store2;
store2.push_back(6);
store2.push_back(7);
store2.push_back(8);
store2.push_back(9);
store2.push_back(10);

cout<<"Output of Vector 2 or store2 "<<endl;
for(int i=0;i<store2.size();i++){
    cout<<store2[i]<<" ";
}
cout<<endl;

swap(store1,store2);

cout<<"\nAfter Swaping printing store 1"<<endl;
for(int i=0;i<store1.size();i++){
    cout<<store1[i]<<" ";
}
cout<<endl;
}

