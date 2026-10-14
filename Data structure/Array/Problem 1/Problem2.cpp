#include<iostream>
using namespace std;

int main(){

   int arr[] = { 12, 32, 43, 1, 54, 53, 15, 64, 3, 13};

   int n =  sizeof(arr)/sizeof(arr[0]);

   int even_finder, odd_finder=0;

   for(int i=0; i<n; i++){
     if(arr[i]%2==0){
       even_finder++;
       }

     else{
       odd_finder++;
     }
   }
   cout<<odd_finder<<" odd numbers"<<endl ;
   cout<<even_finder<<" even numbers";
}
