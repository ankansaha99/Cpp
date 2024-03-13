#include<iostream>

using namespace std;


void find( int a1[], int a2[],int s1, int s2){

bool common = false;

for(int i=0;i<s1;i++){

for(int j=0; j<s2;j++){

if(a1[i]==a2[j]){

cout<<a1[i]<<" ";
 common= true;
 break;
 }
   }
     }

if(!common){

cout<<"no common element!";

  }
     }

int main(){

int a1[]={1,4,6,3,6,9};
 int a2[]={5,3,7,1,2,6};

int s1= 6;

int s2 = 6;

cout<<"here output: ";

find(a1, a2, s1, s2);

cout<<endl;

return 0;
 }
